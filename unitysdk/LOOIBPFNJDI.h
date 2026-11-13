#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define LOOIBPFNJDI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5C08B0)
#define LOOIBPFNJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C0900)

inline static constexpr unsigned int LOOIBPFNJDI_TypeDefinitionIndex = 49468;

	class LOOIBPFNJDI : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Boolean> JGNCELNCFOM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOIBPFNJDI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOIBPFNJDI_CLEAR_OFFSET))(this);
		}

	};
