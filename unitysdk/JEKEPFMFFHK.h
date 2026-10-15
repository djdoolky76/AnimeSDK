#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JEKEPFMFFHK_CTOR_OFFSET UNITYSDK_OFFSET(0x16629D60)

inline static constexpr unsigned int JEKEPFMFFHK_TypeDefinitionIndex = 64795;

	class JEKEPFMFFHK : public ::System::Object
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKEPFMFFHK_CTOR_OFFSET))(this);
		}

	};
