#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDFCJJAAOPJ;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBLGAHACJLA_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0x16563FE0)
#define JBLGAHACJLA_AADOIGAFMJF_OFFSET UNITYSDK_OFFSET(0x16563DF0)
#define JBLGAHACJLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x165646C0)
#define JBLGAHACJLA_ECKLJGMMCAI_OFFSET UNITYSDK_OFFSET(0x165642B0)
#define JBLGAHACJLA_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0x16563C00)
#define JBLGAHACJLA_GGPKCNGMMEG_OFFSET UNITYSDK_OFFSET(0x165640B0)
#define JBLGAHACJLA_HBAELKMEFAM_OFFSET UNITYSDK_OFFSET(0x16563D90)
#define JBLGAHACJLA_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0x16564640)
#define JBLGAHACJLA_NGEAGIFJDMK_OFFSET UNITYSDK_OFFSET(0x16564440)

inline static constexpr unsigned int JBLGAHACJLA_TypeDefinitionIndex = 56484;

	class JBLGAHACJLA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AIGlobalVarsConfig** StaticGet_PBMPIJFLNIA()
		{
			return (::RPG::GameCore::AIGlobalVarsConfig**)UnitySDK::FromName("", "JBLGAHACJLA")->GetStaticField(0x69F30);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::GDFCJJAAOPJ*>** StaticGet_ENICAPCDPEK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::GDFCJJAAOPJ*>**)UnitySDK::FromName("", "JBLGAHACJLA")->GetStaticField(0x69F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBLGAHACJLA_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBLGAHACJLA_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void AADOIGAFMJF(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ComplexSkillAIFactorGroup*>*, ::System::String*))((::PBYTE)hIl2Cpp + JBLGAHACJLA_AADOIGAFMJF_OFFSET))(a1, a2);
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBLGAHACJLA_AABALFLGKPE_OFFSET))();
		}

		static ::RPG::GameCore::ComplexSkillAIFactorGroup* ECKLJGMMCAI(::System::String* a1)
		{
			return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + JBLGAHACJLA_ECKLJGMMCAI_OFFSET))(a1);
		}

		static ::System::Void GGPKCNGMMEG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBLGAHACJLA_GGPKCNGMMEG_OFFSET))();
		}

		static ::System::Void HBAELKMEFAM(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBLGAHACJLA_HBAELKMEFAM_OFFSET))(a1);
		}

		static ::System::Void NGEAGIFJDMK(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBLGAHACJLA_NGEAGIFJDMK_OFFSET))(a1);
		}

		static ::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBLGAHACJLA_JDKCDJNJAOL_OFFSET))();
		}

	};
