#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLJEGMGCIOG_BPGCODDEPKJ_OFFSET UNITYSDK_OFFSET(0x1C623C50)
#define FLJEGMGCIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C623E80)
#define FLJEGMGCIOG_EFDBFJDFMKK_OFFSET UNITYSDK_OFFSET(0x1C6232A0)
#define FLJEGMGCIOG_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1C623200)
#define FLJEGMGCIOG_GET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x1C623E40)
#define FLJEGMGCIOG_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C623E20)
#define FLJEGMGCIOG_GET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x1C623E60)
#define FLJEGMGCIOG_HEDJPMOIEIE_OFFSET UNITYSDK_OFFSET(0x1C623370)
#define FLJEGMGCIOG_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x1C623250)
#define FLJEGMGCIOG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C623300)
#define FLJEGMGCIOG_SET_ALREADYINCATS_OFFSET UNITYSDK_OFFSET(0x1C623E50)
#define FLJEGMGCIOG_SET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C623E30)
#define FLJEGMGCIOG_SET__CACHECATS_OFFSET UNITYSDK_OFFSET(0x1C623E70)

inline static constexpr unsigned int FLJEGMGCIOG_TypeDefinitionIndex = 37210;

	class FLJEGMGCIOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IFBFJDCECML*>* MDKHLGDPEOK; // 0x10
		::System::Collections::Generic::List_1<::IFBFJDCECML*>* CGEHOEPHEBP; // 0x18
		::System::Collections::Generic::List_1<::IFBFJDCECML*>* HMDEDGHGGHE; // 0x20
		::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* __CacheCats_k__BackingField; // 0x28
		::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* _AlreadyInCats_k__BackingField; // 0x30
		::RPG::GameCore::CakeRaceAoeShowType _ShowType_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::System::Collections::Generic::List_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::System::Collections::Generic::List_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void EFDBFJDFMKK(::System::Collections::Generic::List_1<::IFBFJDCECML*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFBFJDCECML*>*, ::System::Single))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_EFDBFJDFMKK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HEDJPMOIEIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_HEDJPMOIEIE_OFFSET))(this);
		}

		::System::Void BPGCODDEPKJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_BPGCODDEPKJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAoeShowType get_ShowType()
		{
			return ((::RPG::GameCore::CakeRaceAoeShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_GET_SHOWTYPE_OFFSET))(this);
		}

		::System::Void set_ShowType(::RPG::GameCore::CakeRaceAoeShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAoeShowType))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_SET_SHOWTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* get_AlreadyInCats()
		{
			return ((::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_GET_ALREADYINCATS_OFFSET))(this);
		}

		::System::Void set_AlreadyInCats(::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_SET_ALREADYINCATS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* get__CacheCats()
		{
			return ((::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_GET__CACHECATS_OFFSET))(this);
		}

		::System::Void set__CacheCats(::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + FLJEGMGCIOG_SET__CACHECATS_OFFSET))(this, a1);
		}

	};
