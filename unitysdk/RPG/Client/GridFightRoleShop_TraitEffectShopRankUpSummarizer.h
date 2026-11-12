#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class HONNGJEMGGH;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC5F200)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDC5EAD0)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDC5F070)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xDC5EB30)
#define RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATESHOP_OFFSET UNITYSDK_OFFSET(0xDC5ECC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop_TraitEffectShopRankUpSummarizer_TypeDefinitionIndex = 66935;

	class GridFightRoleShop_TraitEffectShopRankUpSummarizer : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _ChangedIndices; // 0x10
		::System::Boolean _HasShop; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShop(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATESHOP_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP_TRAITEFFECTSHOPRANKUPSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}
