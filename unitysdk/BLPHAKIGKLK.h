#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class Nullable; }
namespace UnityEngine { class Animator; }

#define BLPHAKIGKLK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA838A0)
#define BLPHAKIGKLK_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xBA837F0)
#define BLPHAKIGKLK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA83790)

inline static constexpr unsigned int BLPHAKIGKLK_TypeDefinitionIndex = 71604;

	class BLPHAKIGKLK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x60
		::System::Int32 LGCHPLAJBKL; // 0x68
		::System::Int32 LANBHBALFOA; // 0x6C
		::System::Nullable* OGAGNOPLEIH; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHAKIGKLK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHAKIGKLK__ONBIND_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPHAKIGKLK_JJBGNJFCHPL_OFFSET))(this, a1);
		}

	};
