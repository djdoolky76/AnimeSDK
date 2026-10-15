#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGCBFJCKLE.h"
class IBCDHMDKNOP;
namespace RPG::Client { class CreateEmojiBubbleParam; }
namespace RPG::GameCore { class MunicipalChatActionEmoji; }

#define BHDOAEPPDHH_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB474A90)
#define BHDOAEPPDHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4746E0)
#define BHDOAEPPDHH_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB4746F0)
#define BHDOAEPPDHH_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB474740)
#define BHDOAEPPDHH_GCGGKIILKKH_OFFSET UNITYSDK_OFFSET(0xB474790)
#define BHDOAEPPDHH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB4749E0)
#define BHDOAEPPDHH_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xB474A50)
#define BHDOAEPPDHH_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xB474850)
#define BHDOAEPPDHH_NCCOPMMJCEL_OFFSET UNITYSDK_OFFSET(0xB474AE0)
#define BHDOAEPPDHH_NLBHKOEIFAO_OFFSET UNITYSDK_OFFSET(0xB4748A0)

	class BHDOAEPPDHH : public ::MAGCBFJCKLE
	{
	public:
		::RPG::Client::CreateEmojiBubbleParam* GJMEBCMNPMK; // 0x30
		::System::Boolean HCMPFDHHNKM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single EJBDMJDDKIA; // 0x3C
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionEmoji* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionEmoji*))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MunicipalChatActionEmoji* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionEmoji*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void NLBHKOEIFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_NLBHKOEIFAO_OFFSET))(this);
		}

		::System::Void GCGGKIILKKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_GCGGKIILKKH_OFFSET))(this);
		}

		::RPG::Client::CreateEmojiBubbleParam* NCCOPMMJCEL()
		{
			return ((::RPG::Client::CreateEmojiBubbleParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHDOAEPPDHH_NCCOPMMJCEL_OFFSET))(this);
		}

	};
