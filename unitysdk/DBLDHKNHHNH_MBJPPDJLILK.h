#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class DBLDHKNHHNH;
class MCLNHLPAAOH;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define DBLDHKNHHNH_MBJPPDJLILK_JEOJFDECCBD_OFFSET UNITYSDK_OFFSET(0x177788A0)
#define DBLDHKNHHNH_MBJPPDJLILK__CTOR_OFFSET UNITYSDK_OFFSET(0x17778890)

inline static constexpr unsigned int DBLDHKNHHNH_MBJPPDJLILK_TypeDefinitionIndex = 9239;

class DBLDHKNHHNH_MBJPPDJLILK : public ::System::Object
{
public:
	::DBLDHKNHHNH* KLHPEBKNIFB; // 0x10
	::System::Action_1<::MCLNHLPAAOH*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLDHKNHHNH_MBJPPDJLILK__CTOR_OFFSET))(this);
	}

	::System::Void JEOJFDECCBD(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + DBLDHKNHHNH_MBJPPDJLILK_JEOJFDECCBD_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
