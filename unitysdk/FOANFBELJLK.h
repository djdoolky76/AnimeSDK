#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FOANFBELJLK_CTOR_OFFSET UNITYSDK_OFFSET(0x158D4DA0)

inline static constexpr unsigned int FOANFBELJLK_TypeDefinitionIndex = 58617;

	class FOANFBELJLK : public ::System::Object
	{
	public:
		::System::String* NNLJDEBAKHO; // 0x10
		::System::Boolean BKCNAAMGHKJ; // 0x18
		::System::Boolean BLKJNPHHBED; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOANFBELJLK_CTOR_OFFSET))(this);
		}

	};
