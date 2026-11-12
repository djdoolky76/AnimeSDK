#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define PNBHMHOHHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC65880)

inline static constexpr unsigned int PNBHMHOHHGL_TypeDefinitionIndex = 66328;

	class PNBHMHOHHGL : public ::System::Object
	{
	public:
		::System::String* OpType; // 0x10
		::System::String* ID; // 0x18
		::PMDPEENJIHC* Base; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBHMHOHHGL_CTOR_OFFSET))(this);
		}

	};
