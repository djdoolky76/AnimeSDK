#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"

#define EAKGBLEMBLN_LHKHKCFGEJO_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1670)
#define EAKGBLEMBLN_LHKHKCFGEJO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x202F090)
#define EAKGBLEMBLN_LHKHKCFGEJO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x202EFD0)
#define EAKGBLEMBLN_LHKHKCFGEJO_SET_VAL_OFFSET UNITYSDK_OFFSET(0x202EFC0)

	struct alignas(4) EAKGBLEMBLN_LHKHKCFGEJO
	{
		::RPG::MVector3 _Val_k__BackingField; // 0x10
		::RPG::MVector3 get_Val()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LHKHKCFGEJO_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LHKHKCFGEJO_SET_VAL_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LHKHKCFGEJO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_LHKHKCFGEJO_KHGIKBFDLFB_OFFSET))(this);
		}

	};
