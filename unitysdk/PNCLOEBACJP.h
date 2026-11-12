#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FKFGNAHIOPO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define PNCLOEBACJP_CTOR_OFFSET UNITYSDK_OFFSET(0xCC66670)

inline static constexpr unsigned int PNCLOEBACJP_TypeDefinitionIndex = 80048;

	class PNCLOEBACJP : public ::System::Object
	{
	public:
		::FKFGNAHIOPO* FAHLGFCIDMN; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* HNKIKMOAPJC; // 0x18
		::System::Action* EMLJHOCGNCC; // 0x20
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x28
		::UnityEngine::Quaternion BMDHDNGHOFA; // 0x34
		::System::Single MCEAIMBIHGH; // 0x44
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x48
		::UnityEngine::Quaternion JMODBAACABL; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCLOEBACJP_CTOR_OFFSET))(this);
		}

	};
