#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEGIEBCBOCI;
class POJNGHHJCNC;
namespace System { class Object; }

#define MEGIEBCBOCI_CTOR_OFFSET UNITYSDK_OFFSET(0x183FF7C0)
#define MEGIEBCBOCI_EJDJJDNMCEL_OFFSET UNITYSDK_OFFSET(0x183FF6E0)
#define MEGIEBCBOCI_FHDMHKOMEFO_OFFSET UNITYSDK_OFFSET(0x183FF7D0)
#define MEGIEBCBOCI_GET_ERRORPACKET_OFFSET UNITYSDK_OFFSET(0x183FF6C0)
#define MEGIEBCBOCI_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x183FF6B0)
#define MEGIEBCBOCI_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0x183FF6D0)
#define MEGIEBCBOCI_KLNBEHCHGIG_OFFSET UNITYSDK_OFFSET(0x183FF740)

inline static constexpr unsigned int MEGIEBCBOCI_TypeDefinitionIndex = 82956;

	class MEGIEBCBOCI : public ::System::Object
	{
	public:
		::System::Object* _ErrorPacket_k__BackingField; // 0x10
		::POJNGHHJCNC* _SettleResult_k__BackingField; // 0x18
		::System::UInt32 _Retcode_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::Object* a2, ::POJNGHHJCNC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::POJNGHHJCNC*))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_GET_RETCODE_OFFSET))(this);
		}

		::System::Object* get_ErrorPacket()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_GET_ERRORPACKET_OFFSET))(this);
		}

		::POJNGHHJCNC* get_SettleResult()
		{
			return ((::POJNGHHJCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_GET_SETTLERESULT_OFFSET))(this);
		}

		::System::Boolean EJDJJDNMCEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_EJDJJDNMCEL_OFFSET))(this);
		}

		static ::MEGIEBCBOCI* KLNBEHCHGIG(::POJNGHHJCNC* a1)
		{
			return ((::MEGIEBCBOCI*(*)(::POJNGHHJCNC*))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_KLNBEHCHGIG_OFFSET))(a1);
		}

		static ::MEGIEBCBOCI* FHDMHKOMEFO(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::MEGIEBCBOCI*(*)(::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + MEGIEBCBOCI_FHDMHKOMEFO_OFFSET))(a1, a2);
		}

	};
