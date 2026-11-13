#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NGGJFGDIDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x18E8A290)

inline static constexpr unsigned int NGGJFGDIDBE_TypeDefinitionIndex = 59381;

	class NGGJFGDIDBE : public ::System::Object
	{
	public:
		::System::String* LHOJDELAMJL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGJFGDIDBE_CTOR_OFFSET))(this);
		}

	};
