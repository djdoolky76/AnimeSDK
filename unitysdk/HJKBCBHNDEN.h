#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define HJKBCBHNDEN_CBFHPAJNFBD_OFFSET UNITYSDK_OFFSET(0x182197A0)
#define HJKBCBHNDEN_CTOR_OFFSET UNITYSDK_OFFSET(0x182198F0)
#define HJKBCBHNDEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18219150)
#define HJKBCBHNDEN_HCJGNIGNECM_OFFSET UNITYSDK_OFFSET(0x18219830)
#define HJKBCBHNDEN_KJLMNFFBHJA_OFFSET UNITYSDK_OFFSET(0x18219440)
#define HJKBCBHNDEN_LABEEGANNKM_OFFSET UNITYSDK_OFFSET(0x18219270)
#define HJKBCBHNDEN_MIAHGIGMIPO_OFFSET UNITYSDK_OFFSET(0x18219720)
#define HJKBCBHNDEN_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x18218FA0)
#define HJKBCBHNDEN___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0x18219910)

inline static constexpr unsigned int HJKBCBHNDEN_TypeDefinitionIndex = 65801;

	class HJKBCBHNDEN : public ::RPG::Client::BaseModule
	{
	public:
		::System::Nullable_1<::System::Boolean> NKONKFGEOPJ; // 0x10
		::System::Boolean HJKMFAIKAHN; // 0x12
		::System::Boolean JNKPCLNBEEC; // 0x13
		::System::Byte _padding0[0x4];
		::System::TimeSpan DENAAJEEDFI; // 0x18
		::System::Nullable_1<::RPG::Client::DateTimePro> PAKFNDDHAHD; // 0x20
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
