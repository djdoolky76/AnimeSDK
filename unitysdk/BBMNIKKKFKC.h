#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBMNIKKKFKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1708BD40)
#define BBMNIKKKFKC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1708BD50)

inline static constexpr unsigned int BBMNIKKKFKC_TypeDefinitionIndex = 68987;

	class BBMNIKKKFKC : public ::System::Object
	{
	public:
		::System::Int32 DGIFAEPBCDH; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBMNIKKKFKC_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMNIKKKFKC_TRIGGERACTION_OFFSET))(this);
		}

	};
