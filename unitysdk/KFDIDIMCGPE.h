#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragSource; }
namespace System { class Action; }

#define KFDIDIMCGPE_CFILENMJKCL_OFFSET UNITYSDK_OFFSET(0xB391270)
#define KFDIDIMCGPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3911A0)
#define KFDIDIMCGPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3914B0)

	class KFDIDIMCGPE : public ::System::Object
	{
	public:
		::System::Action* MBOEDFCNCJF; // 0x10
		::RPG::Client::UIDragSource* BPKKKMOCFIP; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::RPG::Client::UIDragSource* a1, ::CEEGMMCFCBG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*, ::CEEGMMCFCBG*))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CFILENMJKCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_CFILENMJKCL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDIDIMCGPE_DISPOSE_OFFSET))(this);
		}

	};
