#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CNNACDNLPHH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5A670)
#define CNNACDNLPHH_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xDA5A660)
#define CNNACDNLPHH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xDA5A800)
#define CNNACDNLPHH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xDA5A860)
#define CNNACDNLPHH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDA5A8B0)

	class CNNACDNLPHH : public ::KAANKGHDHCB
	{
	public:
		::System::Int32 DDEPHFKCBHI; // 0x20
		::System::Int32 COEMCOBPMKD; // 0x24
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CNNACDNLPHH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNACDNLPHH_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNACDNLPHH_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNACDNLPHH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNACDNLPHH_PAGKOAEOLKA_OFFSET))(this);
		}

	};
