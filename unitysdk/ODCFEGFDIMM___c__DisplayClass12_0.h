#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODCFEGFDIMM;
namespace System { class Action; }

#define ODCFEGFDIMM___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC68E8D0)
#define ODCFEGFDIMM___C__DISPLAYCLASS12_0___INITAUDIOPCK_B__1_OFFSET UNITYSDK_OFFSET(0xC68EC50)

inline static constexpr unsigned int ODCFEGFDIMM___c__DisplayClass12_0_TypeDefinitionIndex = 62537;

	class ODCFEGFDIMM___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::ODCFEGFDIMM* __4__this; // 0x10
		::System::Action* resolve; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __InitAudioPck_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C__DISPLAYCLASS12_0___INITAUDIOPCK_B__1_OFFSET))(this);
		}

	};
