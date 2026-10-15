#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/System/Object.h"
class EEPCHBPPNBK;
class KAIKBCBEEAL;

#define IOLGDGNPEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x164FA2D0)
#define IOLGDGNPEEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164FA060)
#define IOLGDGNPEEO_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0x164FA110)
#define IOLGDGNPEEO_HACODLPCOEB_OFFSET UNITYSDK_OFFSET(0x164FA1B0)
#define IOLGDGNPEEO_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x164FA210)
#define IOLGDGNPEEO_LIHJCMNPNAG_OFFSET UNITYSDK_OFFSET(0x164FA0B0)

inline static constexpr unsigned int IOLGDGNPEEO_TypeDefinitionIndex = 71468;

	class IOLGDGNPEEO : public ::System::Object
	{
	public:
		::ANOBAENCAOD GMPGDEINODK; // 0x10
		::ANFHJIOJJMG MEPFOEEGBEA; // 0x14
		::System::Single GHGGLAKNLAD; // 0x18
		::System::Single HJKJOLPBAOO; // 0x1C
		::System::Single KCLBCNGCLHJ; // 0x20
		::System::Single GDLCJLFBFPG; // 0x24
		::System::Single DMJFFCNBDMG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_DISPOSE_OFFSET))(this);
		}

		::System::Void LIHJCMNPNAG(::EEPCHBPPNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEPCHBPPNBK*))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_LIHJCMNPNAG_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::KAIKBCBEEAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAIKBCBEEAL*))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_EJDAKAECODE_OFFSET))(this, a1);
		}

		::System::Single HACODLPCOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_HACODLPCOEB_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IOLGDGNPEEO_HCCKBPDFINA_OFFSET))(this, a1);
		}

	};
