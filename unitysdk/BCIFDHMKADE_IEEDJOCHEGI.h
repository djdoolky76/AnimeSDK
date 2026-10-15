#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIFDHMKADE_OPCKNPGJDLN.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BCIFDHMKADE;

#define BCIFDHMKADE_IEEDJOCHEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA8DD0)
#define BCIFDHMKADE_IEEDJOCHEGI_KLFECPACMFD_OFFSET UNITYSDK_OFFSET(0x15EA9820)
#define BCIFDHMKADE_IEEDJOCHEGI_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0x15EA91C0)

inline static constexpr unsigned int BCIFDHMKADE_IEEDJOCHEGI_TypeDefinitionIndex = 78640;

	class BCIFDHMKADE_IEEDJOCHEGI : public ::BCIFDHMKADE_OPCKNPGJDLN
	{
	public:
		::System::Void _ctor(::BCIFDHMKADE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_IEEDJOCHEGI_CTOR_OFFSET))(this, a1);
		}

		::System::Void OBKNANIDMKH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BCIFDHMKADE_IEEDJOCHEGI_OBKNANIDMKH_OFFSET))(this, a1);
		}

		::System::Void KLFECPACMFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_IEEDJOCHEGI_KLFECPACMFD_OFFSET))(this);
		}

	};
