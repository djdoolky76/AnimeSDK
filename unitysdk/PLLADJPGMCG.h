#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/RPG/GameCore/MissionBeginType.h"
#include "unitysdk/System/Object.h"
class BPMMPIFCIJM;
class PLLADJPGMCG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PLLADJPGMCG_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC303520)
#define PLLADJPGMCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC302530)
#define PLLADJPGMCG_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC302630)
#define PLLADJPGMCG_CTOR_OFFSET UNITYSDK_OFFSET(0xC302490)
#define PLLADJPGMCG_DNBGNDEIBAL_OFFSET UNITYSDK_OFFSET(0xC303440)
#define PLLADJPGMCG_ELPLIEIMKLP_OFFSET UNITYSDK_OFFSET(0xC3027F0)
#define PLLADJPGMCG_FPCFAFGHBBE_OFFSET UNITYSDK_OFFSET(0xC302430)
#define PLLADJPGMCG_PAHMOAMEBNP_OFFSET UNITYSDK_OFFSET(0xC302A60)
#define PLLADJPGMCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC303580)

inline static constexpr unsigned int PLLADJPGMCG_TypeDefinitionIndex = 52011;

	class PLLADJPGMCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HOBBEEKFHMC; // 0x10
		::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* MDOPNHHJLKD; // 0x18
		::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* GHBNBDKPOMI; // 0x20
		::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* JICHIMGAPJG; // 0x28
		::System::Int32 GFELEAKHMEO; // 0x30
		::RPG::GameCore::MainMissionType GMPGDEINODK; // 0x34
		::RPG::GameCore::MissionBeginType HJJGKDENMMK; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLADJPGMCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* a2, ::RPG::GameCore::MainMissionType a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::RPG::GameCore::MissionBeginType a5, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* a6, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>* a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>*, ::RPG::GameCore::MainMissionType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::MissionBeginType, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>*, ::System::Collections::Generic::List_1<::BPMMPIFCIJM*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PLLADJPGMCG_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_2(::PLLADJPGMCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLLADJPGMCG*))((::PBYTE)hIl2Cpp + PLLADJPGMCG_CTOR_2_OFFSET))(this, a1);
		}

		::System::Boolean FPCFAFGHBBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLADJPGMCG_FPCFAFGHBBE_OFFSET))(this);
		}

		::System::Void ELPLIEIMKLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLADJPGMCG_ELPLIEIMKLP_OFFSET))(this);
		}

		::System::Void PAHMOAMEBNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLADJPGMCG_PAHMOAMEBNP_OFFSET))(this);
		}

		::System::UInt32 DNBGNDEIBAL(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLLADJPGMCG_DNBGNDEIBAL_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::PLLADJPGMCG* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PLLADJPGMCG*))((::PBYTE)hIl2Cpp + PLLADJPGMCG_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLADJPGMCG_TOSTRING_OFFSET))(this);
		}

	};
