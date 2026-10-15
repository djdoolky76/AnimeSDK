#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/System/Object.h"
class HFCPGANBGMI;

#define AFCOJABCFKO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C84B430)
#define AFCOJABCFKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84B600)

inline static constexpr unsigned int AFCOJABCFKO_TypeDefinitionIndex = 43444;

	class AFCOJABCFKO : public ::System::Object
	{
	public:
		::HFCPGANBGMI* FKIBGPJNCIJ; // 0x10
		::HGBCMFANCOE NNANJMDMAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCOJABCFKO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCOJABCFKO_CLEAR_OFFSET))(this);
		}

	};
