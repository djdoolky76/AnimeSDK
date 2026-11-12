#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace System { class String; }

#define FOFJIHPDANH_BFGPMMAALEC_OFFSET UNITYSDK_OFFSET(0x16817DE0)
#define FOFJIHPDANH_CTOR_OFFSET UNITYSDK_OFFSET(0x16817770)
#define FOFJIHPDANH_IKKBKJCELJO_OFFSET UNITYSDK_OFFSET(0x16817C70)
#define FOFJIHPDANH_MIKHPDIALMA_OFFSET UNITYSDK_OFFSET(0x16817D00)
#define FOFJIHPDANH_MLIKOLKEKGL_OFFSET UNITYSDK_OFFSET(0x16817D90)
#define FOFJIHPDANH_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0x16817980)
#define FOFJIHPDANH_NHFEKJJJCHG_OFFSET UNITYSDK_OFFSET(0x16817780)

inline static constexpr unsigned int FOFJIHPDANH_TypeDefinitionIndex = 79796;

	class FOFJIHPDANH : public ::System::Object
	{
	public:
		::MJAOHLLPLGK* FKINCGODJEP; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::MJAOHLLPLGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + FOFJIHPDANH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean NHFEKJJJCHG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + FOFJIHPDANH_NHFEKJJJCHG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MNPFDFDBMNG(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOFJIHPDANH_MNPFDFDBMNG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IKKBKJCELJO(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOFJIHPDANH_IKKBKJCELJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MIKHPDIALMA(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FOFJIHPDANH_MIKHPDIALMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLIKOLKEKGL(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOFJIHPDANH_MLIKOLKEKGL_OFFSET))(this, a1, a2);
		}

		::System::Void BFGPMMAALEC(::LPHINGPIEAJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOFJIHPDANH_BFGPMMAALEC_OFFSET))(this, a1, a2);
		}

	};
