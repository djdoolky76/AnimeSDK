#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class FMMKENDGOPH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define LLPIEJKIPEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB771110)
#define LLPIEJKIPEC_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB7710B0)
#define LLPIEJKIPEC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB771160)
#define LLPIEJKIPEC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB7711B0)
#define LLPIEJKIPEC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB771400)

inline static constexpr unsigned int LLPIEJKIPEC_TypeDefinitionIndex = 82286;

	class LLPIEJKIPEC : public ::KAANKGHDHCB
	{
	public:
		::FMMKENDGOPH* BGKEEIDDGOB; // 0x20
		::System::String* IIHFKAGKEMC; // 0x28
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
