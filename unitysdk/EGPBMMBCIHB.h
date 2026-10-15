#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EGPBMMBCIHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1451D7F0)

inline static constexpr unsigned int EGPBMMBCIHB_TypeDefinitionIndex = 64793;

	class EGPBMMBCIHB : public ::System::Object
	{
	public:
		::System::String* CdnContent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPBMMBCIHB_CTOR_OFFSET))(this);
		}

	};
