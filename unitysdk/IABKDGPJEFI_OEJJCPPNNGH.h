#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABKDGPJEFI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define IABKDGPJEFI_OEJJCPPNNGH_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x15DFD580)
#define IABKDGPJEFI_OEJJCPPNNGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DFC810)
#define IABKDGPJEFI_OEJJCPPNNGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DFD680)
#define IABKDGPJEFI_OEJJCPPNNGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFD3F0)
#define IABKDGPJEFI_OEJJCPPNNGH_DEHCLJMCHHO_OFFSET UNITYSDK_OFFSET(0x15DFD5D0)
#define IABKDGPJEFI_OEJJCPPNNGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DFD500)
#define IABKDGPJEFI_OEJJCPPNNGH_EPKECAMLCJH_OFFSET UNITYSDK_OFFSET(0x15DFD400)
#define IABKDGPJEFI_OEJJCPPNNGH_KGPCCGNFFJJ_OFFSET UNITYSDK_OFFSET(0x15DFD490)

inline static constexpr unsigned int IABKDGPJEFI_OEJJCPPNNGH_TypeDefinitionIndex = 80166;

	class IABKDGPJEFI_OEJJCPPNNGH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::IABKDGPJEFI* ADJNOFMEIKM; // 0x18
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x20
		::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* MPKAFEJFNKN; // 0x28
		static ::System::IDisposable** StaticGet_COAHELMPGLI()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "OEJJCPPNNGH")->GetStaticField(0x3F410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_CCTOR_OFFSET))();
		}

		static ::System::IDisposable* BPLPBPMEODA(::IABKDGPJEFI* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* a3)
		{
			return ((::System::IDisposable*(*)(::IABKDGPJEFI*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Collections::IEnumerator* EPKECAMLCJH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_EPKECAMLCJH_OFFSET))(this);
		}

		::System::Void KGPCCGNFFJJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_KGPCCGNFFJJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_DISPOSE_OFFSET))(this);
		}

		::System::Void DEHCLJMCHHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_DEHCLJMCHHO_OFFSET))(this, a1);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OEJJCPPNNGH_BNNKNIJBGPA_OFFSET))(this);
		}

	};
