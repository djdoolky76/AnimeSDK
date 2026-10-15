#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace System { class String; }

#define HOEBFMGBMIA_ACFFLBFJEBH_OFFSET UNITYSDK_OFFSET(0x15DA5660)
#define HOEBFMGBMIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA46E0)
#define HOEBFMGBMIA_EPJDKAHOLLJ_OFFSET UNITYSDK_OFFSET(0x15DA5580)
#define HOEBFMGBMIA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15DA4730)
#define HOEBFMGBMIA_IPFDCNMJAJG_OFFSET UNITYSDK_OFFSET(0x15DA5900)
#define HOEBFMGBMIA_KOPLNANGIHD_OFFSET UNITYSDK_OFFSET(0x15DA5130)
#define HOEBFMGBMIA_NCHBBLFEFNL_OFFSET UNITYSDK_OFFSET(0x15DA59E0)
#define HOEBFMGBMIA_NELEKBECPMB_OFFSET UNITYSDK_OFFSET(0x15DA5820)
#define HOEBFMGBMIA_NGEIEBPEDGN_OFFSET UNITYSDK_OFFSET(0x15DA5AA0)
#define HOEBFMGBMIA_NJLBBLOJEMO_OFFSET UNITYSDK_OFFSET(0x15DA5740)
#define HOEBFMGBMIA_PACMALCADFN_OFFSET UNITYSDK_OFFSET(0x15DA5210)
#define HOEBFMGBMIA_POPNLNOJCJL_OFFSET UNITYSDK_OFFSET(0x15DA54A0)
#define HOEBFMGBMIA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15DA46F0)

inline static constexpr unsigned int HOEBFMGBMIA_TypeDefinitionIndex = 75936;

	class HOEBFMGBMIA : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x10
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_EXECUTE_OFFSET))(this);
		}

		::System::Void KOPLNANGIHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_KOPLNANGIHD_OFFSET))(this);
		}

		::System::Void PACMALCADFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_PACMALCADFN_OFFSET))(this);
		}

		::System::Void POPNLNOJCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_POPNLNOJCJL_OFFSET))(this);
		}

		::System::Void EPJDKAHOLLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_EPJDKAHOLLJ_OFFSET))(this);
		}

		::System::Void ACFFLBFJEBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_ACFFLBFJEBH_OFFSET))(this);
		}

		::System::Void NJLBBLOJEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_NJLBBLOJEMO_OFFSET))(this);
		}

		::System::Void NELEKBECPMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_NELEKBECPMB_OFFSET))(this);
		}

		::System::Void IPFDCNMJAJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_IPFDCNMJAJG_OFFSET))(this);
		}

		::System::Boolean NCHBBLFEFNL(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_NCHBBLFEFNL_OFFSET))(this, a1, a2);
		}

		static ::System::String* NGEIEBPEDGN(::GHMGGIHEHJE* a1)
		{
			return ((::System::String*(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + HOEBFMGBMIA_NGEIEBPEDGN_OFFSET))(a1);
		}

	};
