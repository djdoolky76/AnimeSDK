#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC29C20)
#define RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_GET_HIDEGOODINDICES_OFFSET UNITYSDK_OFFSET(0x1CC29E90)
#define RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_SET_HIDEGOODINDICES_OFFSET UNITYSDK_OFFSET(0x1CC29EA0)
#define RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC29D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHideGoodsShopIndex_TypeDefinitionIndex = 66654;

	class GridFightHideGoodsShopIndex : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _HideGoodIndices_k__BackingField; // 0x28
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HideGoodIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_GET_HIDEGOODINDICES_OFFSET))(this);
		}

		::System::Void set_HideGoodIndices(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHIDEGOODSSHOPINDEX_SET_HIDEGOODINDICES_OFFSET))(this, a1);
		}

	};
}
