#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCOMENGIDGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638C10)

inline static constexpr unsigned int LCOMENGIDGK_TypeDefinitionIndex = 44769;

	class LCOMENGIDGK : public ::System::Object
	{
	public:
		::System::Int32 HCDEOKNIGKG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOMENGIDGK_CTOR_OFFSET))(this);
		}

	};
