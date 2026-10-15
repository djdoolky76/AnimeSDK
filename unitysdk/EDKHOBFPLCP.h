#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KODIMAJKOMJ.h"

#define EDKHOBFPLCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD42EB0)

inline static constexpr unsigned int EDKHOBFPLCP_TypeDefinitionIndex = 25009;

	class EDKHOBFPLCP : public ::KODIMAJKOMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKHOBFPLCP_CTOR_OFFSET))(this);
		}

	};
