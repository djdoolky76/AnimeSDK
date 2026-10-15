#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class PerFloorConflictRelativeMissionBakedData; }

#define DKKLBCHCLIB_DGDBHIHEGAN_OFFSET UNITYSDK_OFFSET(0x3C37040)
#define DKKLBCHCLIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define DKKLBCHCLIB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define DKKLBCHCLIB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DKKLBCHCLIB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DKKLBCHCLIB_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C37160)
#define DKKLBCHCLIB_HBLOEMHMJFJ_OFFSET UNITYSDK_OFFSET(0x3C37110)
#define DKKLBCHCLIB_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define DKKLBCHCLIB_KHOIKAJKOBA_OFFSET UNITYSDK_OFFSET(0x3C370D0)
#define DKKLBCHCLIB_MFNKOLACFDL_OFFSET UNITYSDK_OFFSET(0x3C37080)

inline static constexpr unsigned int DKKLBCHCLIB_TypeDefinitionIndex = 10733;

	struct alignas(8) DKKLBCHCLIB
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> DGDBHIHEGAN()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_DGDBHIHEGAN_OFFSET))(this);
		}

		::System::Void MFNKOLACFDL(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_MFNKOLACFDL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> KHOIKAJKOBA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_KHOIKAJKOBA_OFFSET))(this);
		}

		::System::Void HBLOEMHMJFJ(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::System::UInt32>))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_HBLOEMHMJFJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerFloorConflictRelativeMissionBakedData* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::PerFloorConflictRelativeMissionBakedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKLBCHCLIB_GFLKJLOFIPA_OFFSET))(this);
		}

	};
