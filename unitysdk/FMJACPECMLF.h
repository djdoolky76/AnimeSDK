#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FMJACPECMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1585CB60)
#define FMJACPECMLF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1585CB70)

inline static constexpr unsigned int FMJACPECMLF_TypeDefinitionIndex = 67040;

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
