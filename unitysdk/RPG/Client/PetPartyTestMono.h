#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/GEDKNEFIADK.h"
class COAHPDIDOHI;
class NNKDKMBKFHC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define RPG_CLIENT_PETPARTYTESTMONO_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xDAECEC0)
#define RPG_CLIENT_PETPARTYTESTMONO_BAGGDINEJHC_OFFSET UNITYSDK_OFFSET(0xDAECBD0)
#define RPG_CLIENT_PETPARTYTESTMONO_BAINHDAPLBO_OFFSET UNITYSDK_OFFSET(0xDAED8F0)
#define RPG_CLIENT_PETPARTYTESTMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xDAEDF40)
#define RPG_CLIENT_PETPARTYTESTMONO_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xDAED610)
#define RPG_CLIENT_PETPARTYTESTMONO_HHHPEAALBCI_OFFSET UNITYSDK_OFFSET(0xDAED420)
#define RPG_CLIENT_PETPARTYTESTMONO_IOGNOLGBHHO_OFFSET UNITYSDK_OFFSET(0xDAEDBE0)
#define RPG_CLIENT_PETPARTYTESTMONO_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xDAEC650)
#define RPG_CLIENT_PETPARTYTESTMONO_REFRESHFORMATION_OFFSET UNITYSDK_OFFSET(0xDAED980)

namespace RPG::Client
{
	class PetPartyTestMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* PartyName; // 0x18
		::System::String* LeaderUniqueName; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* Members; // 0x28
		::System::Boolean DrawGizmos; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* HBLFGDBKNBH; // 0x38
		static ::System::Reflection::FieldInfo** StaticGet_JMHFPLCFBMA()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("RPG.Client", "PetPartyTestMono")->GetStaticField(0x1BD00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::GEDKNEFIADK>* BAGGDINEJHC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::GEDKNEFIADK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_BAGGDINEJHC_OFFSET))(this);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_ACTIVATE_OFFSET))(this);
		}

		::System::Void Deactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_DEACTIVATE_OFFSET))(this);
		}

		::System::Void RefreshFormation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_REFRESHFORMATION_OFFSET))(this);
		}

		::System::Boolean HHHPEAALBCI(::RPG::GameCore::GameWorld* a1, ::NNKDKMBKFHC* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::NNKDKMBKFHC*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_HHHPEAALBCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAINHDAPLBO(::RPG::GameCore::GameWorld* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_BAINHDAPLBO_OFFSET))(this, a1, a2);
		}

		static ::COAHPDIDOHI* IOGNOLGBHHO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::COAHPDIDOHI*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETPARTYTESTMONO_IOGNOLGBHHO_OFFSET))(a1);
		}

	};
}
