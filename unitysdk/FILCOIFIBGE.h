#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define FILCOIFIBGE_CTOR_OFFSET UNITYSDK_OFFSET(0x157ACF30)
#define FILCOIFIBGE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x157ACF40)

	class FILCOIFIBGE : public ::System::Object
	{
	public:
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + FILCOIFIBGE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCOIFIBGE_TRIGGER_OFFSET))(this);
		}

	};
