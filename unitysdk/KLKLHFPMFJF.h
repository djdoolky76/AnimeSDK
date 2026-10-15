#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OONGDLIDJJJ_KGFBJAABGAN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AGOFDNJAOMA;
class OPEJFIDCNPO;
class PNNPEPDNFEA_PEAIKOGICOC;
namespace RPG::GameCore { class ComplexSkillAIConfigEx; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLKLHFPMFJF_BIBIKFEKEBF_OFFSET UNITYSDK_OFFSET(0xB52CAE0)
#define KLKLHFPMFJF_BIDJOKFDNBL_OFFSET UNITYSDK_OFFSET(0xB52C400)
#define KLKLHFPMFJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB52CB30)
#define KLKLHFPMFJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB52CB20)
#define KLKLHFPMFJF_HFDPJMELCAC_OFFSET UNITYSDK_OFFSET(0xB52CAA0)
#define KLKLHFPMFJF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB52C5A0)
#define KLKLHFPMFJF_PIEBKLDMPLH_OFFSET UNITYSDK_OFFSET(0xB52CA60)

inline static constexpr unsigned int KLKLHFPMFJF_TypeDefinitionIndex = 54134;

	class KLKLHFPMFJF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TaskContext** StaticGet_BGPFIGKPKEJ()
		{
			return (::RPG::GameCore::TaskContext**)UnitySDK::FromName("", "KLKLHFPMFJF")->GetStaticField(0x5E9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKLHFPMFJF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLKLHFPMFJF_CCTOR_OFFSET))();
		}

		static ::OONGDLIDJJJ_KGFBJAABGAN BIDJOKFDNBL(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::ComplexSkillAIConfigEx* a3, ::RPG::GameCore::GameEntity* a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::PNNPEPDNFEA_PEAIKOGICOC* a6, ::AGOFDNJAOMA* a7)
		{
			return ((::OONGDLIDJJJ_KGFBJAABGAN(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::ComplexSkillAIConfigEx*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::PNNPEPDNFEA_PEAIKOGICOC*, ::AGOFDNJAOMA*))((::PBYTE)hIl2Cpp + KLKLHFPMFJF_BIDJOKFDNBL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIConfigEx* a1, ::OPEJFIDCNPO* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIConfigEx*, ::OPEJFIDCNPO*))((::PBYTE)hIl2Cpp + KLKLHFPMFJF_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::System::Void PIEBKLDMPLH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLKLHFPMFJF_PIEBKLDMPLH_OFFSET))();
		}

		static ::System::Void HFDPJMELCAC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KLKLHFPMFJF_HFDPJMELCAC_OFFSET))(a1);
		}

		static ::System::Void BIBIKFEKEBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KLKLHFPMFJF_BIBIKFEKEBF_OFFSET))(a1);
		}

	};
