#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define BPIEHCCAMIA_CTOR_OFFSET UNITYSDK_OFFSET(0xCB46FC0)
#define BPIEHCCAMIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB47430)
#define BPIEHCCAMIA_JKAILKNKMHO_OFFSET UNITYSDK_OFFSET(0xCB46FD0)
#define BPIEHCCAMIA_LDLGJOOEOFM_OFFSET UNITYSDK_OFFSET(0xCB47350)
#define BPIEHCCAMIA_MMAAGGPCFGL_OFFSET UNITYSDK_OFFSET(0xCB473B0)

inline static constexpr unsigned int BPIEHCCAMIA_TypeDefinitionIndex = 62261;

	class BPIEHCCAMIA : public ::System::Object
	{
	public:
		::EOABGMGNKGA* CGJNMCLDIGO; // 0x10
		::UnityEngine::Coroutine* CGAEACAKGMP; // 0x18
		::System::Void _ctor(::EOABGMGNKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_CTOR_OFFSET))(this, a1);
		}

		::System::Void JKAILKNKMHO(::System::Single a1, ::System::Action_1<::EOABGMGNKGA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::EOABGMGNKGA*>*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_JKAILKNKMHO_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_DISPOSE_OFFSET))(this);
		}

		::System::Void LDLGJOOEOFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_LDLGJOOEOFM_OFFSET))(this);
		}

		::System::Collections::IEnumerator* MMAAGGPCFGL(::System::Single a1, ::System::Action_1<::EOABGMGNKGA*>* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::EOABGMGNKGA*>*))((::PBYTE)hIl2Cpp + BPIEHCCAMIA_MMAAGGPCFGL_OFFSET))(this, a1, a2);
		}

	};
