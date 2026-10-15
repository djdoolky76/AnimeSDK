#pragma once
#include "unitysdk/unitysdk.h"
class JIGNHFBMPAD;
namespace Entitas { template <typename T> class IMatcher_1; }

#define GLAHJHCFJFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C646560)
#define GLAHJHCFJFE_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x1C646380)
#define GLAHJHCFJFE_GETCORESTATETREEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C646420)
#define GLAHJHCFJFE_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C6461A0)
#define GLAHJHCFJFE_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C646240)
#define GLAHJHCFJFE_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x1C6462E0)
#define GLAHJHCFJFE_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1C6464C0)

	class GLAHJHCFJFE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_CTOR_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetLittleGameConfigMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetPredicateMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETPREDICATEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetReplicatedMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETREPLICATEDMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetClientProxyMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETCLIENTPROXYMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetCoreStateTreeMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETCORESTATETREEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::JIGNHFBMPAD*>* GetTransformMatcher()
		{
			return ((::Entitas::IMatcher_1<::JIGNHFBMPAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLAHJHCFJFE_GETTRANSFORMMATCHER_OFFSET))(this);
		}

	};
