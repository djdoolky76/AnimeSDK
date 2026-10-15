#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EDFANOKAAPJ;
namespace RPG::Client { class MonoEmoNpcEyeController_HEDDJOFODJJ; }
namespace RPG::Client { class MonoEmoNpcEyeController_KBDBCBBLKCB; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD814470)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ENABLERESET_OFFSET UNITYSDK_OFFSET(0xD8139C0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_FORCERESET_OFFSET UNITYSDK_OFFSET(0xD80CB80)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_BODYSIZE_OFFSET UNITYSDK_OFFSET(0xD814450)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYECTRL_OFFSET UNITYSDK_OFFSET(0xD80CAE0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xD814460)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xD814330)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_IHALHMHIOHO_OFFSET UNITYSDK_OFFSET(0xD814050)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD8138A0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD813CB0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD813B80)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD813AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoNpcEyeController_TypeDefinitionIndex = 71151;

	class MonoEmoNpcEyeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEmoNpcEyeController_HEDDJOFODJJ* LGIKBGMJCHN; // 0x18
		::RPG::Client::MonoEmoNpcEyeController_KBDBCBBLKCB* LKNPOGIAHCH; // 0x20
		::RPG::GameCore::NPCBodySize KNKPGNLJNLP; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* FBIBDFCNFAM; // 0x30
		::EDFANOKAAPJ* MDOBEIPOEON; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::NPCBodySize a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_INIT_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ForceReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_FORCERESET_OFFSET))(this);
		}

		::System::Void EnableReset(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_ENABLERESET_OFFSET))(this, a1, a2);
		}

		::System::Void IHALHMHIOHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_IHALHMHIOHO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_EyeCtrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYECTRL_OFFSET))(this);
		}

		::RPG::GameCore::NPCBodySize get_BodySize()
		{
			return ((::RPG::GameCore::NPCBodySize(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_BODYSIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_EyeTransforms()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_GET_EYETRANSFORMS_OFFSET))(this);
		}

	};
}
