#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HNPJNICKLOJ;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define HNPJNICKLOJ_PAAJNOFFHCB_FOFHPLOENAC_OFFSET UNITYSDK_OFFSET(0x15DCF070)
#define HNPJNICKLOJ_PAAJNOFFHCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCF060)

inline static constexpr unsigned int HNPJNICKLOJ_PAAJNOFFHCB_TypeDefinitionIndex = 40626;

class HNPJNICKLOJ_PAAJNOFFHCB : public ::System::Object
{
public:
	::HNPJNICKLOJ* KLHPEBKNIFB; // 0x10
	::System::Action* DMPEOJCCCLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPJNICKLOJ_PAAJNOFFHCB__CTOR_OFFSET))(this);
	}

	::System::Void FOFHPLOENAC(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HNPJNICKLOJ_PAAJNOFFHCB_FOFHPLOENAC_OFFSET))(this, OIIHCACKLHD, NJOAJLDJCCJ);
	}
};
