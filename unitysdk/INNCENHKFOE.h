#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define INNCENHKFOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A3E0)

inline static constexpr unsigned int INNCENHKFOE_TypeDefinitionIndex = 43755;

	class INNCENHKFOE : public ::System::Object
	{
	public:
		::System::String* BNOAHOPNNAC; // 0x10
		::System::String* BFDAADMGNFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNCENHKFOE_CTOR_OFFSET))(this);
		}

	};
