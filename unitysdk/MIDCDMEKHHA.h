#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIDCDMEKHHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92BD20)

	class MIDCDMEKHHA : public ::System::Object
	{
	public:
		::System::Int32 BIIAGCMODGC; // 0x10
		::System::Int32 DPIIOOCFKKG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDCDMEKHHA_CTOR_OFFSET))(this);
		}

	};
