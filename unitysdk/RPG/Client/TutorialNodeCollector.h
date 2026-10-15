#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class TutorialNodeCollector_TutorialNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ALJDNJKAPAG_OFFSET UNITYSDK_OFFSET(0xE336070)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3361B0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_CLEAR_OFFSET UNITYSDK_OFFSET(0xE335CE0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE336150)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_GET_DYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xE336110)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_MJEKMAIGCBL_OFFSET UNITYSDK_OFFSET(0xE3359D0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE3354D0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_ONOTHERNODEDYNAMICKEYCLEAR_OFFSET UNITYSDK_OFFSET(0xE335B40)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0xE334C80)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0xE3349E0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_START_OFFSET UNITYSDK_OFFSET(0xE335280)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_TRYREGISTERALL_OFFSET UNITYSDK_OFFSET(0xE3356C0)
#define RPG_CLIENT_TUTORIALNODECOLLECTOR_UNREGISTERALL_OFFSET UNITYSDK_OFFSET(0xE335E20)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialNodeCollector_TypeDefinitionIndex = 68215;

	class TutorialNodeCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean AppendDynamicKey; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* _CollectNodeList; // 0x20
		::System::String* PHPHCFPJHDC; // 0x28
		::System::UInt32 OGHMKKLHGNP; // 0x30
		::System::Boolean GNPEBFHAHMK; // 0x34
		static ::System::UInt32* StaticGet_NMGGONGNANO()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "TutorialNodeCollector")->GetStaticField(0x7F70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void TryRegisterAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_TRYREGISTERALL_OFFSET))(this);
		}

		::System::Void OnOtherNodeDynamicKeyClear(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_ONOTHERNODEDYNAMICKEYCLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_CLEAR_OFFSET))(this);
		}

		::System::Void UnregisterAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_UNREGISTERALL_OFFSET))(this);
		}

		::System::Void SetDynamicKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_OFFSET))(this, a1);
		}

		::System::Void SetDynamicKey_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_SETDYNAMICKEY_1_OFFSET))(this, a1);
		}

		::System::Boolean MJEKMAIGCBL(::RPG::Client::TutorialNodeCollector_TutorialNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialNodeCollector_TutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_MJEKMAIGCBL_OFFSET))(this, a1);
		}

		::System::Boolean ALJDNJKAPAG(::RPG::Client::TutorialNodeCollector_TutorialNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialNodeCollector_TutorialNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_ALJDNJKAPAG_OFFSET))(this, a1);
		}

		::System::String* get_DynamicKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALNODECOLLECTOR_GET_DYNAMICKEY_OFFSET))(this);
		}

	};
}
