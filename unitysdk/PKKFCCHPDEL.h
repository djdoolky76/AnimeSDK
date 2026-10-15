#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
namespace UnityEngine { class Animation; }

#define PKKFCCHPDEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BC5B0)
#define PKKFCCHPDEL_FGICCPHJGGB_OFFSET UNITYSDK_OFFSET(0xC2BC490)
#define PKKFCCHPDEL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2BC550)

inline static constexpr unsigned int PKKFCCHPDEL_TypeDefinitionIndex = 72352;

	class PKKFCCHPDEL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::System::Nullable_1<::System::Boolean> IAPJFCPEOBL; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFCCHPDEL_CTOR_OFFSET))(this);
		}

		::System::Void FGICCPHJGGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PKKFCCHPDEL_FGICCPHJGGB_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFCCHPDEL__ONBIND_OFFSET))(this);
		}

	};
