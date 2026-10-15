#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::BlindBox::Trade { class PublicBlindBoxTradeOrder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDCIKKPIPKA___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C307E0)

	class HDCIKKPIPKA___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::PublicBlindBoxTradeOrder*>* result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCIKKPIPKA___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

	};
