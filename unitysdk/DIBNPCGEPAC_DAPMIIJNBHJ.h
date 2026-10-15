#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
class DABGOCJPFBI;
class DIBNPCGEPAC;
class OCOAGBCDNBC;

#define DIBNPCGEPAC_DAPMIIJNBHJ_AICKNPCEEOK_OFFSET UNITYSDK_OFFSET(0x1DDA9320)
#define DIBNPCGEPAC_DAPMIIJNBHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA3090)
#define DIBNPCGEPAC_DAPMIIJNBHJ_DBHFAFJKHPM_OFFSET UNITYSDK_OFFSET(0x1DDA9450)
#define DIBNPCGEPAC_DAPMIIJNBHJ_ENTER_OFFSET UNITYSDK_OFFSET(0x1DDA89F0)
#define DIBNPCGEPAC_DAPMIIJNBHJ_EXIT_OFFSET UNITYSDK_OFFSET(0x1DDA9440)
#define DIBNPCGEPAC_DAPMIIJNBHJ_GJAOHLLJMEJ_OFFSET UNITYSDK_OFFSET(0x1DDA9020)
#define DIBNPCGEPAC_DAPMIIJNBHJ_KJEKACNGEPG_OFFSET UNITYSDK_OFFSET(0x1DDA8C00)
#define DIBNPCGEPAC_DAPMIIJNBHJ_TICK_OFFSET UNITYSDK_OFFSET(0x1DDA8C30)

inline static constexpr unsigned int DIBNPCGEPAC_DAPMIIJNBHJ_TypeDefinitionIndex = 43943;

	class DIBNPCGEPAC_DAPMIIJNBHJ : public ::System::Object
	{
	public:
		::DABGOCJPFBI* NODDCAJHNGO; // 0x10
		::System::Boolean NJPAKFCFNHH; // 0x18
		::System::Boolean FFAABGGCMEF; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 DKJJOAODKDD; // 0x1C
		::System::DateTime DKMKJPKFJIA; // 0x20
		::System::Void _ctor(::OCOAGBCDNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Enter(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_EXIT_OFFSET))(this);
		}

		::System::Void DBHFAFJKHPM(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_DBHFAFJKHPM_OFFSET))(this, a1);
		}

		::System::Void KJEKACNGEPG(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_KJEKACNGEPG_OFFSET))(this, a1);
		}

		::System::Void GJAOHLLJMEJ(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_GJAOHLLJMEJ_OFFSET))(this, a1);
		}

		::System::UInt32 AICKNPCEEOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_DAPMIIJNBHJ_AICKNPCEEOK_OFFSET))(this);
		}

	};
