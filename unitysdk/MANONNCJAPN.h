#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJCHKDLALDN;

#define MANONNCJAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC29130)

inline static constexpr unsigned int MANONNCJAPN_TypeDefinitionIndex = 37131;

	class MANONNCJAPN : public ::System::Object
	{
	public:
		::CJCHKDLALDN* IMICNEFJMJN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANONNCJAPN_CTOR_OFFSET))(this);
		}

	};
