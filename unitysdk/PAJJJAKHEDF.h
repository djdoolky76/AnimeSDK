#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCNFFGBIMPD.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class KPEBKEODGAO;
namespace System { class Object; }

#define PAJJJAKHEDF_AFPFPECLGPG_OFFSET UNITYSDK_OFFSET(0xBFC4700)
#define PAJJJAKHEDF_BPMAIMOMBCL_OFFSET UNITYSDK_OFFSET(0xBFC4E30)
#define PAJJJAKHEDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC4FE0)
#define PAJJJAKHEDF_KDAOMMIMNPE_OFFSET UNITYSDK_OFFSET(0xBFC3FD0)
#define PAJJJAKHEDF_MILILHHDBAP_OFFSET UNITYSDK_OFFSET(0xBFC45A0)
#define PAJJJAKHEDF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBFC3F00)
#define PAJJJAKHEDF_OAKHBMMPLNO_OFFSET UNITYSDK_OFFSET(0xBFC4500)

inline static constexpr unsigned int PAJJJAKHEDF_TypeDefinitionIndex = 72297;

	class PAJJJAKHEDF : public ::OCNFFGBIMPD
	{
	public:
		::System::Nullable_1<::RPG::GameCore::FixPoint> HPKHOOCAJGE; // 0x128
		::System::Byte _padding0[0x8];
		::System::Nullable_1<::RPG::GameCore::FixPoint> JALNOJCMIAH; // 0x138
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
