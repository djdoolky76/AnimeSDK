#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GOOHEOIBCPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC790B0)

inline static constexpr unsigned int GOOHEOIBCPJ_TypeDefinitionIndex = 44487;

	class GOOHEOIBCPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOHEOIBCPJ_CTOR_OFFSET))(this);
		}

	};
