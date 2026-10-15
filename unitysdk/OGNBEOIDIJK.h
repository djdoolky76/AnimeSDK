#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFBFPDMBMLC;
class NOOHPODHIAA;

#define OGNBEOIDIJK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C98D210)
#define OGNBEOIDIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98D2B0)

	class OGNBEOIDIJK : public ::System::Object
	{
	public:
		::LFBFPDMBMLC* FKIBGPJNCIJ; // 0x10
		::NOOHPODHIAA* NNANJMDMAOC; // 0x18
		::System::UInt32 CEIFACBCNKE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNBEOIDIJK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNBEOIDIJK_CLEAR_OFFSET))(this);
		}

	};
