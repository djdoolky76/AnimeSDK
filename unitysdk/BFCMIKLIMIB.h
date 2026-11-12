#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class PLDCIFCGCKH;
namespace System { class String; }

#define BFCMIKLIMIB_BHIBBEJNGPC_OFFSET UNITYSDK_OFFSET(0xB7E9A60)
#define BFCMIKLIMIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9F80)
#define BFCMIKLIMIB_EIMKJGIMBNP_OFFSET UNITYSDK_OFFSET(0xB7E9EB0)
#define BFCMIKLIMIB_ENBIJOGNCCM_OFFSET UNITYSDK_OFFSET(0xB7E9670)
#define BFCMIKLIMIB_FMKABNDHHPH_OFFSET UNITYSDK_OFFSET(0xB7E9C80)
#define BFCMIKLIMIB_FPABJIPNJJL_OFFSET UNITYSDK_OFFSET(0xB7E9D40)
#define BFCMIKLIMIB_HODKDGEIMDK_1_OFFSET UNITYSDK_OFFSET(0xB7E9800)
#define BFCMIKLIMIB_HODKDGEIMDK_OFFSET UNITYSDK_OFFSET(0xB7E94B0)
#define BFCMIKLIMIB_IOBNIBCOPGP_OFFSET UNITYSDK_OFFSET(0xB7E99A0)
#define BFCMIKLIMIB_JJIPJOIOHKK_OFFSET UNITYSDK_OFFSET(0xB7E9E20)
#define BFCMIKLIMIB_NPIJEDDFMMC_OFFSET UNITYSDK_OFFSET(0xB7E9BC0)
#define BFCMIKLIMIB_OIENNDOOCCF_OFFSET UNITYSDK_OFFSET(0xB7E99F0)

inline static constexpr unsigned int BFCMIKLIMIB_TypeDefinitionIndex = 74153;

	class BFCMIKLIMIB : public ::System::Object
	{
	public:
		::System::Decimal ONOFGLFHAIE; // 0x10
		::System::Decimal FOKJOKHAPEE; // 0x20
		::System::Decimal DCHOAKFKFAC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_CTOR_OFFSET))(this);
		}

		::System::Void HODKDGEIMDK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_HODKDGEIMDK_OFFSET))(this, a1);
		}

		::System::Void HODKDGEIMDK_1(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_HODKDGEIMDK_1_OFFSET))(this, a1);
		}

		::System::Void IOBNIBCOPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_IOBNIBCOPGP_OFFSET))(this);
		}

		::System::Void OIENNDOOCCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_OIENNDOOCCF_OFFSET))(this);
		}

		::System::Boolean BHIBBEJNGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_BHIBBEJNGPC_OFFSET))(this);
		}

		::System::Boolean NPIJEDDFMMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_NPIJEDDFMMC_OFFSET))(this);
		}

		::System::Boolean FMKABNDHHPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_FMKABNDHHPH_OFFSET))(this);
		}

		::System::String* FPABJIPNJJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_FPABJIPNJJL_OFFSET))(this);
		}

		::System::Void JJIPJOIOHKK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_JJIPJOIOHKK_OFFSET))(this, a1);
		}

		::System::Void EIMKJGIMBNP(::PLDCIFCGCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLDCIFCGCKH*))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_EIMKJGIMBNP_OFFSET))(this, a1);
		}

		::System::Decimal ENBIJOGNCCM(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + BFCMIKLIMIB_ENBIJOGNCCM_OFFSET))(this, a1);
		}

	};
