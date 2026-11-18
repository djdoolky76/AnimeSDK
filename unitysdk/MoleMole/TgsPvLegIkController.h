#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace RootMotion::FinalIK { class LimbIK; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_TGSPVLEGIKCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D5EFE0)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER_GET_LIMBNODES_OFFSET UNITYSDK_OFFSET(0x10D5EF90)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x10D5EFA0)
#define MOLEMOLE_TGSPVLEGIKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5F1A0)

namespace MoleMole
{
	inline static constexpr unsigned int TgsPvLegIkController_TypeDefinitionIndex = 51030;

	class TgsPvLegIkController : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x58
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::LimbIK*>* limbs; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* _limbNodes; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_LimbNodes()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_GET_LIMBNODES_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TGSPVLEGIKCONTROLLER_AWAKE_OFFSET))(this);
		}
	};
}
