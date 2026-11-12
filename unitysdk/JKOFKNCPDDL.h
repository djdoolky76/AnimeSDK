#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace System { class String; }

#define JKOFKNCPDDL_BFGPMMAALEC_OFFSET UNITYSDK_OFFSET(0xBA55910)
#define JKOFKNCPDDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA55560)
#define JKOFKNCPDDL_IKKBKJCELJO_OFFSET UNITYSDK_OFFSET(0xBA557D0)
#define JKOFKNCPDDL_MIKHPDIALMA_OFFSET UNITYSDK_OFFSET(0xBA55840)
#define JKOFKNCPDDL_MLIKOLKEKGL_OFFSET UNITYSDK_OFFSET(0xBA558B0)
#define JKOFKNCPDDL_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0xBA555F0)
#define JKOFKNCPDDL_NHFEKJJJCHG_OFFSET UNITYSDK_OFFSET(0xBA55570)

inline static constexpr unsigned int JKOFKNCPDDL_TypeDefinitionIndex = 79795;

	class JKOFKNCPDDL : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean NHFEKJJJCHG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_NHFEKJJJCHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MNPFDFDBMNG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_MNPFDFDBMNG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IKKBKJCELJO(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_IKKBKJCELJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MIKHPDIALMA(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_MIKHPDIALMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLIKOLKEKGL(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_MLIKOLKEKGL_OFFSET))(this, a1, a2);
		}

		::System::Void BFGPMMAALEC(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + JKOFKNCPDDL_BFGPMMAALEC_OFFSET))(this, a1, a2);
		}

	};
