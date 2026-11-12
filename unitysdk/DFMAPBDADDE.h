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

#define DFMAPBDADDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBEC170)
#define DFMAPBDADDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEC570)
#define DFMAPBDADDE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DBEC2C0)
#define DFMAPBDADDE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DBEC350)
#define DFMAPBDADDE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1DBEC390)

inline static constexpr unsigned int DFMAPBDADDE_TypeDefinitionIndex = 42984;

	class DFMAPBDADDE : public ::System::Object
	{
	public:
		::System::String* FCDAFMMLHEM; // 0x10
		::RPG::PoolList_1<::DPJMOAGICOB>* IHGCGCKCAGH; // 0x18
		::System::String* NIDFIGFJJLL; // 0x20
		::LJJLPCBDFAJ* CLOIOELOOFJ; // 0x28
		::DPJMOAGICOB KIBGNCPDHLJ; // 0x30
		::System::String* CDEEHGCEOKN; // 0x58
		::System::String* BAHLDFMIJFG; // 0x60
		::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* CLOEGAGOONL; // 0x68
		::UnityEngine::Transform* CIMHBBGGADG; // 0x70
		::UnityEngine::GameObject* HKNLMDCOCCF; // 0x78
		::UnityEngine::Vector3 POHDKIIOAJB; // 0x80
		::System::Boolean LBOEPCGMCJF; // 0x8C
		::System::Boolean DAMGODKAAKO; // 0x8D
		::System::Boolean MGBDJNCJCOL; // 0x8E
		::System::Boolean LIFNOFJAKCC; // 0x8F
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0x90
		::UnityEngine::Vector3 IOAMJMEEHMN; // 0x9C
		::UnityEngine::Quaternion KHOPAMJJINE; // 0xA8
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0xB8
		::System::Boolean BMMEKMLPJNK; // 0xC4
		::System::Boolean CCBPFKBAFPN; // 0xC5
		::System::Boolean IHJIDOPOABB; // 0xC6
		::System::Boolean CHKMCEFAKHG; // 0xC7
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
