#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E10662EDBE1169DC.h"
#include "unitysdk/FCD455AA94EEF232.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define E2556AB69D0C7127_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x20AF550)
#define E2556AB69D0C7127_BC5368FC0F250CF0_OFFSET UNITYSDK_OFFSET(0x167AE10)
#define E2556AB69D0C7127_BD1A5DD88DD1E645_OFFSET UNITYSDK_OFFSET(0x20AF040)
#define E2556AB69D0C7127_E698F62D7C842C84_OFFSET UNITYSDK_OFFSET(0x20AF490)
#define E2556AB69D0C7127_EF19960CF96E859F_OFFSET UNITYSDK_OFFSET(0x20AF1C0)
#define E2556AB69D0C7127_FAE99D04A702D233_OFFSET UNITYSDK_OFFSET(0x20AF7B0)
#define E2556AB69D0C7127_FDA4118AD042439E_OFFSET UNITYSDK_OFFSET(0x20AF140)
#define E2556AB69D0C7127__CTOR_OFFSET UNITYSDK_OFFSET(0x20AF980)

inline static constexpr unsigned int E2556AB69D0C7127_TypeDefinitionIndex = 8638;

class E2556AB69D0C7127 : public ::E10662EDBE1169DC
{
public:
	::System::Boolean A9C6E78EB0C74D51; // 0x30
	::System::Byte _padding0[0x7];
	::UnityEngine::GameObject* FF0861877F1685D7; // 0x38
	::UnityEngine::Transform* EF5868C5B674359B; // 0x40

	::System::Boolean A1E97155B145443C(::UnityEngine::GameObject* B919B846D6BC0B1B)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_A1E97155B145443C_OFFSET))(this, B919B846D6BC0B1B);
	}

	::System::Boolean BC5368FC0F250CF0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_BC5368FC0F250CF0_OFFSET))(this);
	}

	::System::String* E698F62D7C842C84()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_E698F62D7C842C84_OFFSET))(this);
	}

	::System::Void BD1A5DD88DD1E645(::System::Nullable_1<::FCD455AA94EEF232> B48C66E5FB2449C6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::FCD455AA94EEF232>))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_BD1A5DD88DD1E645_OFFSET))(this, B48C66E5FB2449C6);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2556AB69D0C7127__CTOR_OFFSET))(this);
	}

	::System::Void FAE99D04A702D233(::System::Boolean AC4FE45522EC89A7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_FAE99D04A702D233_OFFSET))(this, AC4FE45522EC89A7);
	}

	::System::Void EF19960CF96E859F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_EF19960CF96E859F_OFFSET))(this);
	}

	::System::Void FDA4118AD042439E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2556AB69D0C7127_FDA4118AD042439E_OFFSET))(this);
	}
};
