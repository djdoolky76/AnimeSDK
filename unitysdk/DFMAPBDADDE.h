#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPJMOAGICOB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFMAPBDADDE;
class LJJLPCBDFAJ;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DFMAPBDADDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9FA260)
#define DFMAPBDADDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FA660)
#define DFMAPBDADDE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C9FA3B0)
#define DFMAPBDADDE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C9FA440)
#define DFMAPBDADDE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1C9FA480)

inline static constexpr unsigned int DFMAPBDADDE_TypeDefinitionIndex = 42009;

	class DFMAPBDADDE : public ::System::Object
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x10
		::System::String* NIDFIGFJJLL; // 0x18
		::UnityEngine::GameObject* HKNLMDCOCCF; // 0x20
		::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* CLOEGAGOONL; // 0x28
		::RPG::PoolList_1<::DPJMOAGICOB>* IHGCGCKCAGH; // 0x30
		::System::String* BAHLDFMIJFG; // 0x38
		::UnityEngine::Transform* CIMHBBGGADG; // 0x40
		::System::String* FCDAFMMLHEM; // 0x48
		::LJJLPCBDFAJ* CLOIOELOOFJ; // 0x50
		::DPJMOAGICOB KIBGNCPDHLJ; // 0x58
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0x80
		::UnityEngine::Vector3 IOAMJMEEHMN; // 0x8C
		::System::Boolean MGBDJNCJCOL; // 0x98
		::System::Boolean LIFNOFJAKCC; // 0x99
		::System::Boolean CHKMCEFAKHG; // 0x9A
		::System::Boolean CCBPFKBAFPN; // 0x9B
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x9C
		::UnityEngine::Vector3 POHDKIIOAJB; // 0xAC
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0xB8
		::System::Boolean LBOEPCGMCJF; // 0xC4
		::System::Boolean BMMEKMLPJNK; // 0xC5
		::System::Boolean DAMGODKAAKO; // 0xC6
		::System::Boolean IHJIDOPOABB; // 0xC7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAPBDADDE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAPBDADDE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAPBDADDE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMAPBDADDE_ONRECYCLE_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::DFMAPBDADDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMAPBDADDE*))((::PBYTE)hIl2Cpp + DFMAPBDADDE_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
