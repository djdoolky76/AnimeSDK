#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class RectTransform; }

#define NEIMLBJDHKO_BOANONPGBFA_OFFSET UNITYSDK_OFFSET(0xBB5E780)
#define NEIMLBJDHKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5E800)
#define NEIMLBJDHKO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB5E720)

inline static constexpr unsigned int NEIMLBJDHKO_TypeDefinitionIndex = 71626;

	class NEIMLBJDHKO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* EGKOCBGAFPB; // 0x60
		::System::UInt32 LCJDAMMJLEI; // 0x68
		// static const ::System::Object FMDIJDNGFFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLBJDHKO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLBJDHKO__ONBIND_OFFSET))(this);
		}

		::System::Void BOANONPGBFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEIMLBJDHKO_BOANONPGBFA_OFFSET))(this, a1);
		}

	};
