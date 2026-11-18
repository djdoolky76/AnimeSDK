#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class AGNBAGNKPJM;
class EMADFJAKIBG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AGNBAGNKPJM_OMEKCEGGJEH_FGDCLFDKFAF_OFFSET UNITYSDK_OFFSET(0x17CC9DE0)
#define AGNBAGNKPJM_OMEKCEGGJEH_NDLGFIHKNCE_OFFSET UNITYSDK_OFFSET(0x17CC9F00)
#define AGNBAGNKPJM_OMEKCEGGJEH_NGDNEKOAMKN_OFFSET UNITYSDK_OFFSET(0x17CC9E80)
#define AGNBAGNKPJM_OMEKCEGGJEH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC9DD0)

inline static constexpr unsigned int AGNBAGNKPJM_OMEKCEGGJEH_TypeDefinitionIndex = 90167;

class AGNBAGNKPJM_OMEKCEGGJEH : public ::System::Object
{
public:
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* FFMGICPLKFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x20
	::AGNBAGNKPJM* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH__CTOR_OFFSET))(this);
	}

	::System::Void FGDCLFDKFAF(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH_FGDCLFDKFAF_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void NGDNEKOAMKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH_NGDNEKOAMKN_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask NDLGFIHKNCE(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGNBAGNKPJM_OMEKCEGGJEH_NDLGFIHKNCE_OFFSET))(this, OMMEALOOOOD);
	}
};
