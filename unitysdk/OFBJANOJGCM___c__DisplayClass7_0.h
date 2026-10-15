#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCOGLIEHFB;
class OFBJANOJGCM;
namespace RPG::Client { class IAssetOperation; }

#define OFBJANOJGCM___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3C790)
#define OFBJANOJGCM___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xBE3C880)

	class OFBJANOJGCM___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::HFCOGLIEHFB* operation; // 0x10
		::OFBJANOJGCM* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBJANOJGCM___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Execute_b__0(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + OFBJANOJGCM___C__DISPLAYCLASS7_0__EXECUTE_B__0_OFFSET))(this, a1);
		}

	};
