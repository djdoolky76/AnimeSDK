#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBDDCJDENFP;
class FENHFCCKGGJ;

#define HKEMHFGCCAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15D40CC0)

inline static constexpr unsigned int HKEMHFGCCAL_TypeDefinitionIndex = 56870;

	class HKEMHFGCCAL : public ::System::Object
	{
	public:
		::FENHFCCKGGJ* MGJLINFADJK; // 0x10
		::FBDDCJDENFP* BKIFMPHBIAK; // 0x18
		::System::UInt64 MINPLHPLDHM; // 0x20
		::System::UInt32 NPHAJEKCBKF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEMHFGCCAL_CTOR_OFFSET))(this);
		}

	};
