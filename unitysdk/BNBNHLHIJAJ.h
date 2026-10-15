#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BNBNHLHIJAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC3040)
#define BNBNHLHIJAJ_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xBDC2FF0)

inline static constexpr unsigned int BNBNHLHIJAJ_TypeDefinitionIndex = 55757;

	class BNBNHLHIJAJ : public ::System::Object
	{
	public:
		::System::UInt32 DOIMEMBHNNN; // 0x10
		::System::Boolean ECEPKFIIKML; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBNHLHIJAJ_CTOR_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNBNHLHIJAJ_KHNCMBEFIKI_OFFSET))(this);
		}

	};
