#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_FMHOEAPDFLL_GKCOGOCGIKO_OFFSET UNITYSDK_OFFSET(0x1882AEE0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_FMHOEAPDFLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1882AED0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportBehavior_FMHOEAPDFLL_TypeDefinitionIndex = 83915;

	class ZNetExQTETagSupportBehavior_FMHOEAPDFLL : public ::System::Object
	{
	public:
		::System::Boolean AMGAAHMANDM; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_FMHOEAPDFLL__CTOR_OFFSET))(this);
		}

		::System::Void GKCOGOCGIKO(::UnityEngine::Renderer* DLJPLHKELCO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_FMHOEAPDFLL_GKCOGOCGIKO_OFFSET))(this, DLJPLHKELCO);
		}
	};
}
