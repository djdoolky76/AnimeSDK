#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKMIAOPFNGK_EEffectorSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/AMAHFAIGEIJ.h"
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EKMIAOPFNGK_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0x1550D5D0)
#define EKMIAOPFNGK_BAJLGLADHKD_OFFSET UNITYSDK_OFFSET(0x1550D890)
#define EKMIAOPFNGK_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x1550D910)
#define EKMIAOPFNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1550F620)
#define EKMIAOPFNGK_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0x1550F270)
#define EKMIAOPFNGK_HDNPLMPOEOA_OFFSET UNITYSDK_OFFSET(0x1550E420)
#define EKMIAOPFNGK_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0x1550D640)
#define EKMIAOPFNGK_LMANKJIJMIL_OFFSET UNITYSDK_OFFSET(0x1550D680)
#define EKMIAOPFNGK_MOFKDLANDGM_OFFSET UNITYSDK_OFFSET(0x1550E5D0)
#define EKMIAOPFNGK_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0x1550D5C0)
#define EKMIAOPFNGK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1550D700)

	class EKMIAOPFNGK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CHHEMDFJCEH; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* EMHKPLPNOJH; // 0x18
		::UnityEngine::Transform* DHCAEEGOLIM; // 0x20
		::UnityEngine::Transform* CJLFBMEPOPA; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* PIOADIJCHJC; // 0x30
		::System::Single KJLHNBJMPDC; // 0x38
		::UnityEngine::Vector3 FMOODJPLAHC; // 0x3C
		::System::Single GGNNHDAIEMG; // 0x48
		::EKMIAOPFNGK_EEffectorSpace GIKHKIEFLOL; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_CTOR_OFFSET))(this);
		}

		::System::Single NHONNHCIOOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* KBOJFONKFKN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_KBOJFONKFKN_OFFSET))(this);
		}

		::UnityEngine::Transform* LMANKJIJMIL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_LMANKJIJMIL_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAJLGLADHKD(::EKMIAOPFNGK_EEffectorSpace a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EKMIAOPFNGK_EEffectorSpace, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_BAJLGLADHKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CIJDJDICMMM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_CIJDJDICMMM_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDNPLMPOEOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_HDNPLMPOEOA_OFFSET))(this, a1);
		}

		::System::Void EOCEFJFIJLK(::RootMotion::IKJob::IKThreadProxyContext* a1, ::AMAHFAIGEIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::AMAHFAIGEIJ))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_EOCEFJFIJLK_OFFSET))(this, a1, a2);
		}

		::System::Boolean MOFKDLANDGM(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EKMIAOPFNGK_MOFKDLANDGM_OFFSET))(this, a1, a2);
		}

	};
