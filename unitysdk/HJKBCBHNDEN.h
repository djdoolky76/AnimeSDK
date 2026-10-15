#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class Nullable; }

#define HJKBCBHNDEN_CBFHPAJNFBD_OFFSET UNITYSDK_OFFSET(0x15D288A0)
#define HJKBCBHNDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D289F0)
#define HJKBCBHNDEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D28250)
#define HJKBCBHNDEN_HCJGNIGNECM_OFFSET UNITYSDK_OFFSET(0x15D28930)
#define HJKBCBHNDEN_KJLMNFFBHJA_OFFSET UNITYSDK_OFFSET(0x15D28540)
#define HJKBCBHNDEN_LABEEGANNKM_OFFSET UNITYSDK_OFFSET(0x15D28370)
#define HJKBCBHNDEN_MIAHGIGMIPO_OFFSET UNITYSDK_OFFSET(0x15D28820)
#define HJKBCBHNDEN_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x15D280A0)
#define HJKBCBHNDEN___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0x15D28A10)

	class HJKBCBHNDEN : public ::RPG::Client::BaseModule
	{
	public:
		::System::TimeSpan DENAAJEEDFI; // 0x10
		::System::Nullable* PAKFNDDHAHD; // 0x18
		::System::Byte _padding0[0x8];
		::System::Nullable* NKONKFGEOPJ; // 0x28
		::System::Boolean HJKMFAIKAHN; // 0x2A
		::System::Boolean JNKPCLNBEEC; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_CTOR_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean LABEEGANNKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_LABEEGANNKM_OFFSET))(this);
		}

		::System::Boolean KJLMNFFBHJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_KJLMNFFBHJA_OFFSET))(this);
		}

		::System::Void MIAHGIGMIPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_MIAHGIGMIPO_OFFSET))(this);
		}

		::System::Void HCJGNIGNECM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_HCJGNIGNECM_OFFSET))(this);
		}

		::System::Boolean CBFHPAJNFBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKBCBHNDEN_CBFHPAJNFBD_OFFSET))(this);
		}

		::System::Void __DoShowExitConfirm_b__10_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJKBCBHNDEN___DOSHOWEXITCONFIRM_B__10_0_OFFSET))(this, a1);
		}

	};
