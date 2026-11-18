#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class BFFHHODMHKH;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }

#define KKJKAKMOCJC_KGGHLKNLOFG_AOCDFHNNMAP_OFFSET UNITYSDK_OFFSET(0x18632B90)
#define KKJKAKMOCJC_KGGHLKNLOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x18632B80)

inline static constexpr unsigned int KKJKAKMOCJC_KGGHLKNLOFG_TypeDefinitionIndex = 66247;

class KKJKAKMOCJC_KGGHLKNLOFG : public ::System::Object
{
public:
	::BFFHHODMHKH* DFMKILICPFB; // 0x10
	::System::Action_2<::Foundation::AssetRequestHandle, ::BFFHHODMHKH*>* IBNICCGMILF; // 0x18
	::System::Boolean KOMBBDHBNCA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_KGGHLKNLOFG__CTOR_OFFSET))(this);
	}

	::System::Void AOCDFHNNMAP(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_KGGHLKNLOFG_AOCDFHNNMAP_OFFSET))(this, NGLKIKLLLFL, FCEIKAIDHPM);
	}
};
