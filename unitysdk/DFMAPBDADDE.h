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

#define DFMAPBDADDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB2C550)
#define DFMAPBDADDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2C930)
#define DFMAPBDADDE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DB2C690)
#define DFMAPBDADDE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DB2C720)
#define DFMAPBDADDE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1DB2C760)

inline static constexpr unsigned int DFMAPBDADDE_TypeDefinitionIndex = 42984;

	class DFMAPBDADDE : public ::System::Object
	{
	public:
		::DPJMOAGICOB KIBGNCPDHLJ; // 0x10
		::LJJLPCBDFAJ* CLOIOELOOFJ; // 0x38
		::UnityEngine::Transform* CIMHBBGGADG; // 0x40
		::System::String* CDEEHGCEOKN; // 0x48
		::System::String* FCDAFMMLHEM; // 0x50
		::System::String* BAHLDFMIJFG; // 0x58
		::RPG::PoolList_1<::DPJMOAGICOB>* IHGCGCKCAGH; // 0x60
		::System::String* NIDFIGFJJLL; // 0x68
		::UnityEngine::GameObject* HKNLMDCOCCF; // 0x70
		::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* CLOEGAGOONL; // 0x78
		::UnityEngine::Quaternion KHOPAMJJINE; // 0x80
		::System::Boolean LIFNOFJAKCC; // 0x90
		::System::Boolean DAMGODKAAKO; // 0x91
		::System::Boolean CCBPFKBAFPN; // 0x92
		::System::Boolean LBOEPCGMCJF; // 0x93
		::UnityEngine::Vector3 IOAMJMEEHMN; // 0x94
		::UnityEngine::Vector3 POHDKIIOAJB; // 0xA0
		::UnityEngine::Vector3 LBJPPLGGBNN; // 0xAC
		::UnityEngine::Vector3 LDDBFJDDNJO; // 0xB8
		::System::Boolean IHJIDOPOABB; // 0xC4
		::System::Boolean MGBDJNCJCOL; // 0xC5
		::System::Boolean BMMEKMLPJNK; // 0xC6
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
