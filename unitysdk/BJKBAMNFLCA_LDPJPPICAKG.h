#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class BJKBAMNFLCA;
class GHHDDDLMHII;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define BJKBAMNFLCA_LDPJPPICAKG_AGGJOPAOBLO_OFFSET UNITYSDK_OFFSET(0x128ACDA0)
#define BJKBAMNFLCA_LDPJPPICAKG__CTOR_OFFSET UNITYSDK_OFFSET(0x128ACD90)

inline static constexpr unsigned int BJKBAMNFLCA_LDPJPPICAKG_TypeDefinitionIndex = 41568;

class BJKBAMNFLCA_LDPJPPICAKG : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::GHHDDDLMHII* KPNIHKEKDOC; // 0x18
	::BJKBAMNFLCA* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LDPJPPICAKG__CTOR_OFFSET))(this);
	}

	::System::Void AGGJOPAOBLO(::Foundation::AssetPath EMIKCAHJLGB, ::UnityEngine::GameObject* HEAJMIGHEHG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BJKBAMNFLCA_LDPJPPICAKG_AGGJOPAOBLO_OFFSET))(this, EMIKCAHJLGB, HEAJMIGHEHG);
	}
};
