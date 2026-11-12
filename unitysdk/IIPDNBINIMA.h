#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABAGMFKDCLG.h"
#include "unitysdk/GJMPEIGLHJK.h"
class FKLAILNGPHN;
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIPDNBINIMA_APPCBLHJNFK_OFFSET UNITYSDK_OFFSET(0x1741E420)
#define IIPDNBINIMA_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1741EB20)
#define IIPDNBINIMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1741E700)
#define IIPDNBINIMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1741E3F0)
#define IIPDNBINIMA_GET_ISROTATEREGIONGROUP_OFFSET UNITYSDK_OFFSET(0x1741E400)
#define IIPDNBINIMA_LOFDOEHEEHE_OFFSET UNITYSDK_OFFSET(0x1741E410)
#define IIPDNBINIMA_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x1741EC00)
#define IIPDNBINIMA_NLHCGMDBKCB_OFFSET UNITYSDK_OFFSET(0x1741EAD0)

inline static constexpr unsigned int IIPDNBINIMA_TypeDefinitionIndex = 71121;

	class IIPDNBINIMA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* NBEDFKHNIEK; // 0x10
		::System::Collections::Generic::List_1<::FKLAILNGPHN*>* ALBHNCGIBDF; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x20
		::System::Boolean _IsRotateRegionGroup_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + IIPDNBINIMA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDNBINIMA_GET_GROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsRotateRegionGroup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDNBINIMA_GET_ISROTATEREGIONGROUP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FKLAILNGPHN*>* LOFDOEHEEHE()
		{
			return ((::System::Collections::Generic::List_1<::FKLAILNGPHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDNBINIMA_LOFDOEHEEHE_OFFSET))(this);
		}

		static ::ABAGMFKDCLG APPCBLHJNFK(::RPG::GameCore::LevelCrowdInfo* a1, ::GJMPEIGLHJK a2)
		{
			return ((::ABAGMFKDCLG(*)(::RPG::GameCore::LevelCrowdInfo*, ::GJMPEIGLHJK))((::PBYTE)hIl2Cpp + IIPDNBINIMA_APPCBLHJNFK_OFFSET))(a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDNBINIMA_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void NBJFLGNEBED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIPDNBINIMA_NBJFLGNEBED_OFFSET))(this);
		}

		::RPG::GameCore::EntityClassifyType NLHCGMDBKCB(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + IIPDNBINIMA_NLHCGMDBKCB_OFFSET))(this, a1);
		}

	};
