#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJCHKDLALDN;

#define MANONNCJAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C719920)

inline static constexpr unsigned int MANONNCJAPN_TypeDefinitionIndex = 36203;

	class MANONNCJAPN : public ::System::Object
	{
	public:
		::CJCHKDLALDN* IMICNEFJMJN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANONNCJAPN_CTOR_OFFSET))(this);
		}

	};
