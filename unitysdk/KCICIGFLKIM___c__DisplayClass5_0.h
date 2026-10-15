#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCOGLIEHFB;
class KCICIGFLKIM;
namespace RPG::Client { class IAssetOperation; }

#define KCICIGFLKIM___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB331000)
#define KCICIGFLKIM___C__DISPLAYCLASS5_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xB331010)

inline static constexpr unsigned int KCICIGFLKIM___c__DisplayClass5_0_TypeDefinitionIndex = 82275;

	class KCICIGFLKIM___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::KCICIGFLKIM* __4__this; // 0x10
		::HFCOGLIEHFB* operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCICIGFLKIM___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Execute_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + KCICIGFLKIM___C__DISPLAYCLASS5_0__EXECUTE_B__0_OFFSET))(this, a1);
		}

	};
