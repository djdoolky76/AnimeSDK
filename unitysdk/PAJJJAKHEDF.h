#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCNFFGBIMPD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KPEBKEODGAO;
namespace System { class Nullable; }
namespace System { class Object; }

#define PAJJJAKHEDF_AFPFPECLGPG_OFFSET UNITYSDK_OFFSET(0xBFCBC00)
#define PAJJJAKHEDF_BPMAIMOMBCL_OFFSET UNITYSDK_OFFSET(0xBFCC330)
#define PAJJJAKHEDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCC4D0)
#define PAJJJAKHEDF_KDAOMMIMNPE_OFFSET UNITYSDK_OFFSET(0xBFCB4D0)
#define PAJJJAKHEDF_MILILHHDBAP_OFFSET UNITYSDK_OFFSET(0xBFCBAA0)
#define PAJJJAKHEDF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBFCB400)
#define PAJJJAKHEDF_OAKHBMMPLNO_OFFSET UNITYSDK_OFFSET(0xBFCBA00)

	class PAJJJAKHEDF : public ::OCNFFGBIMPD
	{
	public:
		::System::Nullable* HPKHOOCAJGE; // 0x128
		::System::Byte _padding0[0x8];
		::System::Nullable* JALNOJCMIAH; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MILILHHDBAP(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_MILILHHDBAP_OFFSET))(this, a1);
		}

		::System::Void KDAOMMIMNPE(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_KDAOMMIMNPE_OFFSET))(this, a1);
		}

		::System::Void AFPFPECLGPG(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_AFPFPECLGPG_OFFSET))(this, a1);
		}

		::System::Void OAKHBMMPLNO(::KPEBKEODGAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEBKEODGAO*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_OAKHBMMPLNO_OFFSET))(this, a1);
		}

		::System::Void BPMAIMOMBCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAJJJAKHEDF_BPMAIMOMBCL_OFFSET))(this, a1);
		}

	};
