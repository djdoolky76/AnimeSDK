#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class ComplexSkillAIPostProcess; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHCLDIOHPCN_APANCADFLHK_OFFSET UNITYSDK_OFFSET(0xCC92280)
#define CHCLDIOHPCN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC924D0)
#define CHCLDIOHPCN_EMGFCFBFHKC_OFFSET UNITYSDK_OFFSET(0xCC92350)
#define CHCLDIOHPCN_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xCC91EA0)
#define CHCLDIOHPCN_MHFGKBHNNHA_OFFSET UNITYSDK_OFFSET(0xCC920E0)
#define CHCLDIOHPCN_PKOHENLMLOC_OFFSET UNITYSDK_OFFSET(0xCC92410)

inline static constexpr unsigned int CHCLDIOHPCN_TypeDefinitionIndex = 54351;

	class CHCLDIOHPCN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_LAANOLJPOAM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "CHCLDIOHPCN")->GetStaticField(0x268A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCLDIOHPCN_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_KFGJEKJHIMB_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint MHFGKBHNNHA(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_MHFGKBHNNHA_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint APANCADFLHK(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_APANCADFLHK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint EMGFCFBFHKC(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_EMGFCFBFHKC_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint PKOHENLMLOC(::RPG::GameCore::ComplexSkillAIPostProcess* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::OPEJFIDCNPO* a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIPostProcess*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + CHCLDIOHPCN_PKOHENLMLOC_OFFSET))(a1, a2, a3, a4);
		}

	};
