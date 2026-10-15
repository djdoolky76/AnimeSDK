#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNEBINMALON;
namespace RPG::GameCore { class ItemConfig; }

#define NPBNILHKEOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF9DD0)
#define NPBNILHKEOD_HNPPMLBBMEI_OFFSET UNITYSDK_OFFSET(0xBCF9D20)

	class NPBNILHKEOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBNILHKEOD_CTOR_OFFSET))(this);
		}

		::System::Void HNPPMLBBMEI(::PNEBINMALON* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPBNILHKEOD_HNPPMLBBMEI_OFFSET))(this, a1, a2, a3, a4);
		}

	};
