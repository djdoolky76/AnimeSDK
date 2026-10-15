#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHPMGBPDP;
class JFAJIIHCBHN;
class NCPHEBGHOFC;
class OIKDEOMMOAM;

#define JEBFGDPAHDO_AALCFBOGFKP_1_OFFSET UNITYSDK_OFFSET(0x166185B0)
#define JEBFGDPAHDO_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x16618420)
#define JEBFGDPAHDO_CTOR_OFFSET UNITYSDK_OFFSET(0x16618B90)
#define JEBFGDPAHDO_EGFCFCBHJJP_1_OFFSET UNITYSDK_OFFSET(0x166182E0)
#define JEBFGDPAHDO_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x166181B0)
#define JEBFGDPAHDO_NBDHFICONCG_OFFSET UNITYSDK_OFFSET(0x16618B80)
#define JEBFGDPAHDO_OIDHKHJENJE_OFFSET UNITYSDK_OFFSET(0x166188B0)
#define JEBFGDPAHDO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16618840)

inline static constexpr unsigned int JEBFGDPAHDO_TypeDefinitionIndex = 54016;

	class JEBFGDPAHDO : public ::System::Object
	{
	public:
		::Il2CppArray<::BKHHPMGBPDP*>* LAHJMFDLJPL; // 0x10
		::System::Int32 NLLPBIOAGMB; // 0x18
		::System::Int32 COEMCOBPMKD; // 0x1C
		::System::Int32 LOBPDELAAOL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_CTOR_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::BKHHPMGBPDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHPMGBPDP*))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::NCPHEBGHOFC* EGFCFCBHJJP_1(::JFAJIIHCBHN* a1)
		{
			return ((::NCPHEBGHOFC*(*)(::PVOID, ::JFAJIIHCBHN*))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_EGFCFCBHJJP_1_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::BKHHPMGBPDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHPMGBPDP*))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP_1(::JFAJIIHCBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAJIIHCBHN*))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_AALCFBOGFKP_1_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OIDHKHJENJE(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_OIDHKHJENJE_OFFSET))(this, a1);
		}

		::System::Int32 NBDHFICONCG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBFGDPAHDO_NBDHFICONCG_OFFSET))(this);
		}

	};
