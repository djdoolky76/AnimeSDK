#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC64F10)
#define RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_GET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xDC650D0)
#define RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_SET_POSINDEXS_OFFSET UNITYSDK_OFFSET(0xDC650E0)
#define RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC64FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoundBeginRandomChangeRoleByPosModifier_TypeDefinitionIndex = 66600;

	class GridFightRoundBeginRandomChangeRoleByPosModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PosIndexs_k__BackingField; // 0x28
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PosIndexs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_GET_POSINDEXS_OFFSET))(this);
		}

		::System::Void set_PosIndexs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROUNDBEGINRANDOMCHANGEROLEBYPOSMODIFIER_SET_POSINDEXS_OFFSET))(this, a1);
		}

	};
}
