#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FMJACPECMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x167CCF90)
#define FMJACPECMLF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x167CCFA0)

inline static constexpr unsigned int FMJACPECMLF_TypeDefinitionIndex = 68984;

	class FMJACPECMLF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJACPECMLF_CTOR_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJACPECMLF_TRIGGERACTION_OFFSET))(this);
		}

	};
