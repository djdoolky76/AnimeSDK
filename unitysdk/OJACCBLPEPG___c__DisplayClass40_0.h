#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJACCBLPEPG;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define OJACCBLPEPG___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0x194A59A0)
#define OJACCBLPEPG___C__DISPLAYCLASS40_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0x194A5C00)

inline static constexpr unsigned int OJACCBLPEPG___c__DisplayClass40_0_TypeDefinitionIndex = 61105;

	class OJACCBLPEPG___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::OJACCBLPEPG* __4__this; // 0x10
		::System::String* path; // 0x18
		::System::UInt32 groupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + OJACCBLPEPG___C__DISPLAYCLASS40_0__ASYNCLOADASSET_B__0_OFFSET))(this, a1);
		}

	};
