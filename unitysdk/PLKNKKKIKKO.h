#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PLKNKKKIKKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F4E30)

inline static constexpr unsigned int PLKNKKKIKKO_TypeDefinitionIndex = 36456;

	class PLKNKKKIKKO : public ::System::Object
	{
	public:
		::System::UInt32 LNKODNKMEEM; // 0x10
		::System::UInt32 KGCFBNPIFNH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKNKKKIKKO_CTOR_OFFSET))(this);
		}

	};
