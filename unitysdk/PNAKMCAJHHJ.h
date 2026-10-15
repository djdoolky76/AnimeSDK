#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PNAKMCAJHHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC329580)

inline static constexpr unsigned int PNAKMCAJHHJ_TypeDefinitionIndex = 82048;

	class PNAKMCAJHHJ : public ::System::Object
	{
	public:
		::System::Boolean MMKEDDICDHK; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID IFNMFPACLKL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAKMCAJHHJ_CTOR_OFFSET))(this);
		}

	};
