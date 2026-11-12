#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGDNGNMHBIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4EDA0)

inline static constexpr unsigned int OGDNGNMHBIN_TypeDefinitionIndex = 43099;

	class OGDNGNMHBIN : public ::System::Object
	{
	public:
		::System::Int32 LGJHFLOINHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDNGNMHBIN_CTOR_OFFSET))(this);
		}

	};
