#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
namespace Entitas { template <typename T> class IMatcher_1; }

#define GMIFBFGDGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6195E0)
#define GMIFBFGDGJK_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C619540)

inline static constexpr unsigned int GMIFBFGDGJK_TypeDefinitionIndex = 37048;

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
