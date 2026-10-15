#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
namespace Entitas { template <typename T> class IMatcher_1; }

#define GMIFBFGDGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6479A0)
#define GMIFBFGDGJK_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C647900)

	class GMIFBFGDGJK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIFBFGDGJK_CTOR_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::IFBFJDCECML*>* GetCoreStateTreeMatcher()
		{
			return ((::Entitas::IMatcher_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIFBFGDGJK_GETCORESTATETREEMATCHER_OFFSET))(this);
		}

	};
