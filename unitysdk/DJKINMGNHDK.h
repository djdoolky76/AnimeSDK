#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DJKINMGNHDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAA720)

inline static constexpr unsigned int DJKINMGNHDK_TypeDefinitionIndex = 43953;

	class DJKINMGNHDK : public ::System::Object
	{
	public:
		// static const ::System::Object CCDBPIJCBMO; // 0x0
		// static const ::System::Object LLLDOPIJAEN; // 0x0
		// static const ::System::Object PALOLEOEEJP; // 0x0
		// static const ::System::Object LCOCHLEDECJ; // 0x0
		// static const ::System::Object GHECLGDGCEL; // 0x0
		// static const ::System::Object DGAODHDKDGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKINMGNHDK_CTOR_OFFSET))(this);
		}

	};
