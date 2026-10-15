#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
namespace UnityEngine { class Animator; }

#define BLPHAKIGKLK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA80330)
#define BLPHAKIGKLK_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xBA80280)
#define BLPHAKIGKLK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA80220)

inline static constexpr unsigned int BLPHAKIGKLK_TypeDefinitionIndex = 71603;

	class BLPHAKIGKLK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x60
		::System::Int32 LANBHBALFOA; // 0x68
		::System::Nullable_1<::System::Boolean> OGAGNOPLEIH; // 0x6C
		::System::Int32 LGCHPLAJBKL; // 0x70
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
