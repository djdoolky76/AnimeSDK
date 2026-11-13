#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ECBCBEIADBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CF160)

inline static constexpr unsigned int ECBCBEIADBI_TypeDefinitionIndex = 75399;

	class ECBCBEIADBI : public ::System::Object
	{
	public:
		::System::String* AHCPFFKPOMG; // 0x10
		::System::String* AENODINHEMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECBCBEIADBI_CTOR_OFFSET))(this);
		}

	};
