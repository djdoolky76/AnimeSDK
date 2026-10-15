#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define BPIEHCCAMIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A61A0)
#define BPIEHCCAMIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1A6610)
#define BPIEHCCAMIA_JKAILKNKMHO_OFFSET UNITYSDK_OFFSET(0xC1A61B0)
#define BPIEHCCAMIA_LDLGJOOEOFM_OFFSET UNITYSDK_OFFSET(0xC1A6530)
#define BPIEHCCAMIA_MMAAGGPCFGL_OFFSET UNITYSDK_OFFSET(0xC1A6590)

inline static constexpr unsigned int BPIEHCCAMIA_TypeDefinitionIndex = 60882;

	class BPIEHCCAMIA : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* CGAEACAKGMP; // 0x10
		::EOABGMGNKGA* CGJNMCLDIGO; // 0x18
		::System::Void _ctor(::EOABGMGNKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_CTOR_OFFSET))(this, a1);
		}

		::System::Void JKAILKNKMHO(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_JKAILKNKMHO_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_DISPOSE_OFFSET))(this);
		}

		::System::Void LDLGJOOEOFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_LDLGJOOEOFM_OFFSET))(this);
		}

		::System::Collections::IEnumerator* MMAAGGPCFGL(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_MMAAGGPCFGL_OFFSET))(this, a1, a2);
		}

	};
