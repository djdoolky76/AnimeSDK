#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NJKFDOFOCLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1A5E0)

	class NJKFDOFOCLO : public ::System::Object
	{
	public:
		::System::String* KFJNMFOLGEJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFDOFOCLO_CTOR_OFFSET))(this);
		}

	};
