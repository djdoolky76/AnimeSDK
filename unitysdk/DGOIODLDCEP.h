#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define DGOIODLDCEP_CTOR_OFFSET UNITYSDK_OFFSET(0xE85B950)
#define DGOIODLDCEP_TRIGGER_OFFSET UNITYSDK_OFFSET(0xE85B960)

inline static constexpr unsigned int DGOIODLDCEP_TypeDefinitionIndex = 66247;

	class DGOIODLDCEP : public ::System::Object
	{
	public:
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + DGOIODLDCEP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOIODLDCEP_TRIGGER_OFFSET))(this);
		}

	};
