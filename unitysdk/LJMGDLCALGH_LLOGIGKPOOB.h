#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BIEHBLPBAHP;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define LJMGDLCALGH_LLOGIGKPOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E01F60)

inline static constexpr unsigned int LJMGDLCALGH_LLOGIGKPOOB_TypeDefinitionIndex = 63609;

class LJMGDLCALGH_LLOGIGKPOOB : public ::System::Object
{
public:
	::UnityEngine::Canvas* NBLLHBOAFDF; // 0x10
	::BIEHBLPBAHP* KEHECMCDLFC; // 0x18
	::System::Action_1<::UnityEngine::Vector2>* LONBHPHAHMJ; // 0x20
	::UnityEngine::RectTransform* PLBHDNDOKEJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMGDLCALGH_LLOGIGKPOOB__CTOR_OFFSET))(this);
	}
};
