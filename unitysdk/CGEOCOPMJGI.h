#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGEOCOPMJGI;
class ECJGCFIJJKD;
namespace System { class Object; }

#define CGEOCOPMJGI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC87F00)
#define CGEOCOPMJGI_EJDJJDNMCEL_OFFSET UNITYSDK_OFFSET(0xCC87E20)
#define CGEOCOPMJGI_FHDMHKOMEFO_OFFSET UNITYSDK_OFFSET(0xCC87F10)
#define CGEOCOPMJGI_GET_ERRORPACKET_OFFSET UNITYSDK_OFFSET(0xCC87E00)
#define CGEOCOPMJGI_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0xCC87DF0)
#define CGEOCOPMJGI_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xCC87E10)
#define CGEOCOPMJGI_KLNBEHCHGIG_OFFSET UNITYSDK_OFFSET(0xCC87E80)

	class CGEOCOPMJGI : public ::System::Object
	{
	public:
		::System::Object* _ErrorPacket_k__BackingField; // 0x10
		::ECJGCFIJJKD* _SettleResult_k__BackingField; // 0x18
		::System::UInt32 _Retcode_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::Object* a2, ::ECJGCFIJJKD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::ECJGCFIJJKD*))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_GET_RETCODE_OFFSET))(this);
		}

		::System::Object* get_ErrorPacket()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_GET_ERRORPACKET_OFFSET))(this);
		}

		::ECJGCFIJJKD* get_SettleResult()
		{
			return ((::ECJGCFIJJKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_GET_SETTLERESULT_OFFSET))(this);
		}

		::System::Boolean EJDJJDNMCEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_EJDJJDNMCEL_OFFSET))(this);
		}

		static ::CGEOCOPMJGI* KLNBEHCHGIG(::ECJGCFIJJKD* a1)
		{
			return ((::CGEOCOPMJGI*(*)(::ECJGCFIJJKD*))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_KLNBEHCHGIG_OFFSET))(a1);
		}

		static ::CGEOCOPMJGI* FHDMHKOMEFO(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::CGEOCOPMJGI*(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CGEOCOPMJGI_FHDMHKOMEFO_OFFSET))(a1, a2);
		}

	};
