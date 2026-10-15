#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class FMMKENDGOPH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define LLPIEJKIPEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB7779B0)
#define LLPIEJKIPEC_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB777950)
#define LLPIEJKIPEC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB777A00)
#define LLPIEJKIPEC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB777A50)
#define LLPIEJKIPEC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB777CA0)

	class LLPIEJKIPEC : public ::KAANKGHDHCB
	{
	public:
		::System::String* IIHFKAGKEMC; // 0x20
		::FMMKENDGOPH* BGKEEIDDGOB; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + LLPIEJKIPEC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPIEJKIPEC_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPIEJKIPEC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPIEJKIPEC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPIEJKIPEC_PAGKOAEOLKA_OFFSET))(this);
		}

	};
