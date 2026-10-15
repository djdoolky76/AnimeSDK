#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJIFOFPHIJO;
namespace RPG::Client::BlindBox::Pool { class BlindBoxOpenResultPet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJIFOFPHIJO___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD213920)

	class CJIFOFPHIJO___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::CJIFOFPHIJO* __4__this; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Pool::BlindBoxOpenResultPet*>* pets; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFOFPHIJO___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

	};
