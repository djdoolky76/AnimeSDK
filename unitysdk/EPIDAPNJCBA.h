#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StatusRow; }
namespace System { class String; }

#define EPIDAPNJCBA_CTOR_OFFSET UNITYSDK_OFFSET(0x155D51A0)
#define EPIDAPNJCBA_MMOJAMHCANK_OFFSET UNITYSDK_OFFSET(0x155D5130)

inline static constexpr unsigned int EPIDAPNJCBA_TypeDefinitionIndex = 81054;

	class EPIDAPNJCBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIDAPNJCBA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::StatusRow* MMOJAMHCANK(::System::String* a1)
		{
			return ((::RPG::GameCore::StatusRow*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIDAPNJCBA_MMOJAMHCANK_OFFSET))(this, a1);
		}

	};
