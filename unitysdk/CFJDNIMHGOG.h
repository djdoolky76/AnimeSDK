#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CFJDNIMHGOG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4F420)

inline static constexpr unsigned int CFJDNIMHGOG_TypeDefinitionIndex = 55592;

	class CFJDNIMHGOG : public ::System::Object
	{
	public:
		::System::String* BAAOGIMCALN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFJDNIMHGOG_CTOR_OFFSET))(this);
		}

	};
