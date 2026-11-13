#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NGEOCKJICCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C291600)

inline static constexpr unsigned int NGEOCKJICCJ_TypeDefinitionIndex = 44747;

	class NGEOCKJICCJ : public ::System::Object
	{
	public:
		::System::Int32 NAJNLIGMBGO; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEOCKJICCJ_CTOR_OFFSET))(this);
		}

	};
