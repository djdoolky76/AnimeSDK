#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JCJHGBANDKO_IMDNPEOGONE_LHHHGJOGOFF_OFFSET UNITYSDK_OFFSET(0x15C36BD0)
#define JCJHGBANDKO_IMDNPEOGONE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C36BC0)

inline static constexpr unsigned int JCJHGBANDKO_IMDNPEOGONE_TypeDefinitionIndex = 85312;

class JCJHGBANDKO_IMDNPEOGONE : public ::System::Object
{
public:
	::System::Single NCCDJLDKFGA; // 0x10
	::UnityEngine::Vector2 MPLDDNMCECG; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO_IMDNPEOGONE__CTOR_OFFSET))(this);
	}

	::System::Boolean LHHHGJOGOFF(::UnityEngine::Vector2 CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_IMDNPEOGONE_LHHHGJOGOFF_OFFSET))(this, CKPGOKHECCH);
	}
};
