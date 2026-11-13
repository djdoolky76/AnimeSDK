#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KNEIIEMAHHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635410)

inline static constexpr unsigned int KNEIIEMAHHM_TypeDefinitionIndex = 43211;

	class KNEIIEMAHHM : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEIIEMAHHM_CTOR_OFFSET))(this);
		}

	};
