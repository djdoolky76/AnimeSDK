#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertDeviceView; }
namespace System { class String; }

#define HFDAJICBIGG_BFGPMMAALEC_OFFSET UNITYSDK_OFFSET(0x16BB5520)
#define HFDAJICBIGG_CTOR_OFFSET UNITYSDK_OFFSET(0x16BB4E00)
#define HFDAJICBIGG_HKMBHMDPLGK_OFFSET UNITYSDK_OFFSET(0x16BB52C0)
#define HFDAJICBIGG_IKKBKJCELJO_OFFSET UNITYSDK_OFFSET(0x16BB51D0)
#define HFDAJICBIGG_MIKHPDIALMA_OFFSET UNITYSDK_OFFSET(0x16BB5400)
#define HFDAJICBIGG_MLIKOLKEKGL_OFFSET UNITYSDK_OFFSET(0x16BB54D0)
#define HFDAJICBIGG_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0x16BB4FC0)
#define HFDAJICBIGG_NHFEKJJJCHG_OFFSET UNITYSDK_OFFSET(0x16BB4E10)

inline static constexpr unsigned int HFDAJICBIGG_TypeDefinitionIndex = 79787;

	class HFDAJICBIGG : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HFDAJICBIGG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean NHFEKJJJCHG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + HFDAJICBIGG_NHFEKJJJCHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MNPFDFDBMNG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HFDAJICBIGG_MNPFDFDBMNG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IKKBKJCELJO(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HFDAJICBIGG_IKKBKJCELJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MIKHPDIALMA(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + HFDAJICBIGG_MIKHPDIALMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLIKOLKEKGL(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + HFDAJICBIGG_MLIKOLKEKGL_OFFSET))(this, a1, a2);
		}

		::System::Void BFGPMMAALEC(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + HFDAJICBIGG_BFGPMMAALEC_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HKMBHMDPLGK(::LPHINGPIEAJ* a1, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView* a2)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView*))((::PBYTE)hIl2Cpp + HFDAJICBIGG_HKMBHMDPLGK_OFFSET))(a1, a2);
		}

	};
