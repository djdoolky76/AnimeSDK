#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class B07D27203C69A8A5; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_A0DFA02D3337CE7E_OFFSET UNITYSDK_OFFSET(0x28CC580)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x28CB890)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_ABAB66F9DCDE5EF0_OFFSET UNITYSDK_OFFSET(0x28CB3D0)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_B300F610D9A9C2A2_OFFSET UNITYSDK_OFFSET(0x28CC210)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_B820870C5B766E92_OFFSET UNITYSDK_OFFSET(0x28CC070)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_BE925B2D4C3A1AD2_OFFSET UNITYSDK_OFFSET(0x28CC520)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28CBA80)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_E2CB606EAE1A724A_OFFSET UNITYSDK_OFFSET(0x28CB460)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_F37136EF032D6718_OFFSET UNITYSDK_OFFSET(0x28CB510)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_F6D5932763C0EFA8_OFFSET UNITYSDK_OFFSET(0x28CC1B0)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_FB932A031DDF5932_OFFSET UNITYSDK_OFFSET(0x28CBE90)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_FC30768810C66336_OFFSET UNITYSDK_OFFSET(0x28CC360)
#define TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x28CC6D0)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int MonoDayNightDoor_TypeDefinitionIndex = 16304;

	class MonoDayNightDoor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean useListMode; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* dayObj; // 0x28
		::UnityEngine::GameObject* nightObj; // 0x30
		::System::Boolean dayColliderEnabled; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::Mesh* dayMesh; // 0x40
		::System::Boolean nightColliderEnabled; // 0x48
		::System::Byte _padding2[0x7];
		::UnityEngine::Mesh* nightMesh; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* dayObjects; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* nightObjects; // 0x60
		::UnityEngine::B07D27203C69A8A5* A4E1B0CDFD70B502; // 0x68

		::System::Void ABAB66F9DCDE5EF0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_ABAB66F9DCDE5EF0_OFFSET))(this);
		}

		::System::Void BE925B2D4C3A1AD2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_BE925B2D4C3A1AD2_OFFSET))(this);
		}

		::System::Void FB932A031DDF5932()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_FB932A031DDF5932_OFFSET))(this);
		}

		::System::Void A0DFA02D3337CE7E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_A0DFA02D3337CE7E_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E2CB606EAE1A724A()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_E2CB606EAE1A724A_OFFSET))(this);
		}

		static ::System::Void FC30768810C66336(::System::Collections::Generic::List_1<::System::Object*>* B9B26B23B27A46C7, ::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_FC30768810C66336_OFFSET))(B9B26B23B27A46C7, FFA00246E8ABA57B);
		}

		static ::System::Void F37136EF032D6718(::UnityEngine::GameObject* A86A90C31A146E9C, ::System::Boolean F016A988C7A6224C, ::UnityEngine::Mesh* EEB4F8F4B2B9F6E2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_F37136EF032D6718_OFFSET))(A86A90C31A146E9C, F016A988C7A6224C, EEB4F8F4B2B9F6E2);
		}

		static ::System::Void B820870C5B766E92(::System::Collections::Generic::List_1<::System::Object*>* B9B26B23B27A46C7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_B820870C5B766E92_OFFSET))(B9B26B23B27A46C7);
		}

		::System::Void F6D5932763C0EFA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_F6D5932763C0EFA8_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void B300F610D9A9C2A2(::System::Boolean E145D9B23033FD1F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_MONODAYNIGHTDOOR_B300F610D9A9C2A2_OFFSET))(this, E145D9B23033FD1F);
		}
	};
}
