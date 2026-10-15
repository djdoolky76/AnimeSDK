#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFNALNFLBIN;
class KLEFGGIHGMI;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define KLEFGGIHGMI___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB51DC40)
#define KLEFGGIHGMI___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0xB51DC50)
#define KLEFGGIHGMI___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__1_OFFSET UNITYSDK_OFFSET(0xB51DCA0)

inline static constexpr unsigned int KLEFGGIHGMI___c__DisplayClass14_0_TypeDefinitionIndex = 73909;

	class KLEFGGIHGMI___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::CFNALNFLBIN* _IRIContext; // 0x10
		::KLEFGGIHGMI* __4__this; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* item; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __IRILoadPrefab_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__0_OFFSET))(this);
		}

		::System::Void __IRILoadPrefab_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI___C__DISPLAYCLASS14_0___IRILOADPREFAB_B__1_OFFSET))(this);
		}

	};
