#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::CustomRP { class SWRTPass; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_BDGJBHKFJLD_EQUALS_OFFSET UNITYSDK_OFFSET(0xF1D80)

namespace RPG::Client
{
	struct alignas(8) SimpRTXSystemBehavior_BDGJBHKFJLD
	{
		::System::Int32 HHLFNJCMNIJ; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::CustomRP::SWRTPass* HFCBBEBJCAP; // 0x18
		::System::Int32 OIHOOKMKEIP; // 0x20
		::System::Int32 JHICCHKPHEM; // 0x24
		::System::Single KEEEGLEECCN; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Texture* BEPAPPGDIEN; // 0x30
		::UnityEngine::Texture* BIKPANECDKP; // 0x38
		::System::Single EIGMMFGILLJ; // 0x40
		::System::Single CPALGIIINBO; // 0x44
		::System::Single KOAHLCAOOKJ; // 0x48
		::UnityEngine::Vector4 NJBCFCIDNGD; // 0x4C
		/*
		::System::Boolean Equals(::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_BDGJBHKFJLD_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
}
