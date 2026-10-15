#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class String; }

#define PLDCIFCGCKH_BHIBBEJNGPC_OFFSET UNITYSDK_OFFSET(0xC2ED120)
#define PLDCIFCGCKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2ED480)
#define PLDCIFCGCKH_FMKABNDHHPH_OFFSET UNITYSDK_OFFSET(0xC2ED240)
#define PLDCIFCGCKH_FPABJIPNJJL_OFFSET UNITYSDK_OFFSET(0xC2ED310)
#define PLDCIFCGCKH_HKKBLGMLJPD_OFFSET UNITYSDK_OFFSET(0xC2ED420)
#define PLDCIFCGCKH_HODKDGEIMDK_1_OFFSET UNITYSDK_OFFSET(0xC2ECF80)
#define PLDCIFCGCKH_HODKDGEIMDK_OFFSET UNITYSDK_OFFSET(0xC2ECE60)
#define PLDCIFCGCKH_IOBNIBCOPGP_OFFSET UNITYSDK_OFFSET(0xC2ED080)
#define PLDCIFCGCKH_NPIJEDDFMMC_OFFSET UNITYSDK_OFFSET(0xC2ED1D0)
#define PLDCIFCGCKH_OIENNDOOCCF_OFFSET UNITYSDK_OFFSET(0xC2ED0D0)

inline static constexpr unsigned int PLDCIFCGCKH_TypeDefinitionIndex = 72117;

	class PLDCIFCGCKH : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint DCHOAKFKFAC; // 0x10
		::RPG::GameCore::FixPoint FOKJOKHAPEE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_CTOR_OFFSET))(this);
		}

		::System::Void HODKDGEIMDK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_HODKDGEIMDK_OFFSET))(this, a1);
		}

		::System::Void HODKDGEIMDK_1(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_HODKDGEIMDK_1_OFFSET))(this, a1);
		}

		::System::Void IOBNIBCOPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_IOBNIBCOPGP_OFFSET))(this);
		}

		::System::Void OIENNDOOCCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_OIENNDOOCCF_OFFSET))(this);
		}

		::System::Boolean BHIBBEJNGPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_BHIBBEJNGPC_OFFSET))(this);
		}

		::System::Boolean NPIJEDDFMMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_NPIJEDDFMMC_OFFSET))(this);
		}

		::System::Boolean FMKABNDHHPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_FMKABNDHHPH_OFFSET))(this);
		}

		::System::String* FPABJIPNJJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_FPABJIPNJJL_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> HKKBLGMLJPD()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::PVOID))((::PBYTE)hIl2Cpp + PLDCIFCGCKH_HKKBLGMLJPD_OFFSET))(this);
		}

	};
