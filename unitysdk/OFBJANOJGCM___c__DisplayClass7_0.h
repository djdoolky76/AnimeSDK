#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCOGLIEHFB;
class OFBJANOJGCM;
namespace RPG::Client { class IAssetOperation; }

#define OFBJANOJGCM___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F51B0)
#define OFBJANOJGCM___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xC6F52A0)

inline static constexpr unsigned int OFBJANOJGCM___c__DisplayClass7_0_TypeDefinitionIndex = 85145;

	class OFBJANOJGCM___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::OFBJANOJGCM* __4__this; // 0x10
		::HFCOGLIEHFB* operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBJANOJGCM___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Execute_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + OFBJANOJGCM___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET))(this, a1);
		}

	};
