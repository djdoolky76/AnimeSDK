#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/System/Object.h"
class HFCPGANBGMI;

#define AFCOJABCFKO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C879430)
#define AFCOJABCFKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C879600)

	class AFCOJABCFKO : public ::System::Object
	{
	public:
		::HGBCMFANCOE NNANJMDMAOC; // 0x10
		::HFCPGANBGMI* FKIBGPJNCIJ; // 0xA68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCOJABCFKO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCOJABCFKO_CLEAR_OFFSET))(this);
		}

	};
