#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OLLAJIDHMJA_CTOR_OFFSET UNITYSDK_OFFSET(0xC80C990)

inline static constexpr unsigned int OLLAJIDHMJA_TypeDefinitionIndex = 69735;

	class OLLAJIDHMJA : public ::System::Object
	{
	public:
		::System::String* IsFavoriteStr; // 0x10
		::System::String* BuildRefID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAJIDHMJA_CTOR_OFFSET))(this);
		}

	};
