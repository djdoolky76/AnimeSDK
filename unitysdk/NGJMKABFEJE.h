#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COBBNCGDBKN.h"
#include "unitysdk/System/Object.h"

#define NGJMKABFEJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960D20)

inline static constexpr unsigned int NGJMKABFEJE_TypeDefinitionIndex = 42264;

	class NGJMKABFEJE : public ::System::Object
	{
	public:
		::COBBNCGDBKN MFBICPOIEFL; // 0x10
		::COBBNCGDBKN JOGBJGIHBLO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJMKABFEJE_CTOR_OFFSET))(this);
		}

	};
