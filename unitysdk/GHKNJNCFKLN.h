#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBOAHKAAECG.h"
#include "unitysdk/GHKNJNCFKLN_TeleportState.h"
#include "unitysdk/RPG/MVector3.h"
class KGMBGMIGHOE;
class KHPOKIKCOFO;

#define GHKNJNCFKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A27AB0)
#define GHKNJNCFKLN_GNEIJDOMJFL_OFFSET UNITYSDK_OFFSET(0x15A28260)
#define GHKNJNCFKLN_GOEGDCEPDJJ_OFFSET UNITYSDK_OFFSET(0x15A27FA0)
#define GHKNJNCFKLN_HJJEPFOFOKI_OFFSET UNITYSDK_OFFSET(0x15A284D0)
#define GHKNJNCFKLN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15A27AC0)
#define GHKNJNCFKLN_JHOFCONKMDJ_OFFSET UNITYSDK_OFFSET(0x15A27D90)
#define GHKNJNCFKLN_JICODPDLIGK_OFFSET UNITYSDK_OFFSET(0x15A27BE0)
#define GHKNJNCFKLN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A27B30)

	class GHKNJNCFKLN : public ::CBOAHKAAECG
	{
	public:
		::System::Single LLNIGIGFCEA; // 0x28
		::GHKNJNCFKLN_TeleportState LLBADFLDEIA; // 0x2C
		// static const ::System::String* OMMGEMONIAJ; // 0x0
		// static const ::System::String* JPCINMNJDJK; // 0x0
		// static const ::System::Object KEHDPIMKPLD; // 0x0
		// static const ::System::Object MPMOMALEFPL; // 0x0
		// static const ::System::Object DLPEGGFADPG; // 0x0
		::System::Void _ctor(::KGMBGMIGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JICODPDLIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_JICODPDLIGK_OFFSET))(this);
		}

		::System::Void JHOFCONKMDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_JHOFCONKMDJ_OFFSET))(this);
		}

		::RPG::MVector3 GNEIJDOMJFL(::KGMBGMIGHOE* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::KGMBGMIGHOE*))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_GNEIJDOMJFL_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* HJJEPFOFOKI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_HJJEPFOFOKI_OFFSET))(this, a1, a2);
		}

		::System::Void GOEGDCEPDJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKNJNCFKLN_GOEGDCEPDJJ_OFFSET))(this);
		}

	};
