#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }

#define AHCHAMJFLEF_CTOR_OFFSET UNITYSDK_OFFSET(0xF139950)
#define AHCHAMJFLEF_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xF1398D0)

inline static constexpr unsigned int AHCHAMJFLEF_TypeDefinitionIndex = 75515;

	class AHCHAMJFLEF : public ::System::Object
	{
	public:
		::System::Boolean BEEMJOKHDKH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCHAMJFLEF_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AHCHAMJFLEF_GETCONTEXT_OFFSET))(this, a1);
		}

	};
