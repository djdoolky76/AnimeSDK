#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class HFCOGLIEHFB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define JNNKPOJGBNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB28EE40)
#define JNNKPOJGBNP_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB28EDE0)
#define JNNKPOJGBNP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB28EE90)
#define JNNKPOJGBNP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB28EEE0)
#define JNNKPOJGBNP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB28F130)

	class JNNKPOJGBNP : public ::KAANKGHDHCB
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x20
		::HFCOGLIEHFB* BGKEEIDDGOB; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + JNNKPOJGBNP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKPOJGBNP_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKPOJGBNP_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKPOJGBNP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNNKPOJGBNP_PAGKOAEOLKA_OFFSET))(this);
		}

	};
