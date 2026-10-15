#pragma once
#include "unitysdk/unitysdk.h"
class IJFIHJJPHNA;
namespace Entitas { template <typename T> class IMatcher_1; }

#define AIMNKMEFBKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C55D110)
#define AIMNKMEFBKE_GETCLIENTPROXYMATCHER_OFFSET UNITYSDK_OFFSET(0x1C55D070)

inline static constexpr unsigned int AIMNKMEFBKE_TypeDefinitionIndex = 37045;

	class AIMNKMEFBKE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMNKMEFBKE_CTOR_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::IJFIHJJPHNA*>* GetClientProxyMatcher()
		{
			return ((::Entitas::IMatcher_1<::IJFIHJJPHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMNKMEFBKE_GETCLIENTPROXYMATCHER_OFFSET))(this);
		}

	};
