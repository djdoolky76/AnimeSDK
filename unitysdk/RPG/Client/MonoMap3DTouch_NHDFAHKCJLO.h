#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Action; }

#define RPG_CLIENT_MONOMAP3DTOUCH_NHDFAHKCJLO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xEC230)

namespace RPG::Client
{
	struct alignas(8) MonoMap3DTouch_NHDFAHKCJLO
	{
		::System::Action* OBKNANIDMKH; // 0x10
		::System::Action* PEDFLCNLIOC; // 0x18
		::System::Action* OCMKMOHFIID; // 0x20
		::System::Action* FHNEEELAEGK; // 0x28
		::System::Action* DDGDOBDOMKD; // 0x30
		::System::Action* KFJLGBHOONO; // 0x38
		::System::Action* DHHAGHKLIJI; // 0x40
		::System::Action* KBPMBBIJBKB; // 0x48
		::System::Action* HBBAGPGNFKJ; // 0x50
		::System::Action* KFOKCNMBKID; // 0x58
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_NHDFAHKCJLO_KHGIKBFDLFB_OFFSET))(this);
		}

	};
}
