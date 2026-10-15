#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PNAKMCAJHHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC330E20)

inline static constexpr unsigned int PNAKMCAJHHJ_TypeDefinitionIndex = 82049;

	class PNAKMCAJHHJ : public ::System::Object
	{
	public:
		::RPG::Client::TextID IFNMFPACLKL; // 0x10
		::System::Boolean MMKEDDICDHK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKMCAJHHJ_CTOR_OFFSET))(this);
		}

	};
