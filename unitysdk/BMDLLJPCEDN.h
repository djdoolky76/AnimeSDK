#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BMDLLJPCEDN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA2B50)

inline static constexpr unsigned int BMDLLJPCEDN_TypeDefinitionIndex = 47961;

	class BMDLLJPCEDN : public ::System::Object
	{
	public:
		::System::String* BJCBMNHOAGO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDLLJPCEDN_CTOR_OFFSET))(this);
		}

	};
