#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NIKEBECEGKI;
namespace RPG::GameCore { class AdventureAttackDetectCircleConfig; }
namespace RPG::GameCore { class AdventureAttackDetectShapeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define HJJIMAJFJDF_AECIFFENKOG_OFFSET UNITYSDK_OFFSET(0x15D1AD60)
#define HJJIMAJFJDF_AFCKDCMFHDF_OFFSET UNITYSDK_OFFSET(0x15D19DC0)
#define HJJIMAJFJDF_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x15D19B50)
#define HJJIMAJFJDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1B400)
#define HJJIMAJFJDF_CPGIKNDHIHD_OFFSET UNITYSDK_OFFSET(0x15D1A300)
#define HJJIMAJFJDF_ENMFNPKLILB_OFFSET UNITYSDK_OFFSET(0x15D19AD0)
#define HJJIMAJFJDF_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x15D19C50)
#define HJJIMAJFJDF_HINDNHIIMEM_OFFSET UNITYSDK_OFFSET(0x15D1AF60)
#define HJJIMAJFJDF_HOCEMEKEIDK_OFFSET UNITYSDK_OFFSET(0x15D1B250)
#define HJJIMAJFJDF_NBDJDHPOHMF_OFFSET UNITYSDK_OFFSET(0x15D1A650)
#define HJJIMAJFJDF_OKJDEKLMCFB_OFFSET UNITYSDK_OFFSET(0x15D1AFE0)
#define HJJIMAJFJDF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15D19D00)

inline static constexpr unsigned int HJJIMAJFJDF_TypeDefinitionIndex = 59020;

	class HJJIMAJFJDF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::NIKEBECEGKI*>** StaticGet_KKHALCLJGNJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::NIKEBECEGKI*>**)UnitySDK::FromName("", "HJJIMAJFJDF")->GetStaticField(0x21AD0);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_PDMOHLIKPCI()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "HJJIMAJFJDF")->GetStaticField(0x21AD8);
		}

		static ::System::Collections::Generic::HashSet_1<::NIKEBECEGKI*>** StaticGet_AMBOGOJCOBA()
		{
			return (::System::Collections::Generic::HashSet_1<::NIKEBECEGKI*>**)UnitySDK::FromName("", "HJJIMAJFJDF")->GetStaticField(0x21AE0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_JEINNGHENIM()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "HJJIMAJFJDF")->GetStaticField(0x21AE8);
		}

		// static const ::System::Object CDCBGBAPKGO; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJIMAJFJDF_CCTOR_OFFSET))();
		}

		static ::System::Boolean ENMFNPKLILB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJJIMAJFJDF_ENMFNPKLILB_OFFSET))();
		}

		static ::System::Void BKJGMFOKKKN(::NIKEBECEGKI* a1)
		{
			return ((::System::Void(*)(::NIKEBECEGKI*))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_BKJGMFOKKKN_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO(::NIKEBECEGKI* a1)
		{
			return ((::System::Void(*)(::NIKEBECEGKI*))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_GNCJAGHKEPO_OFFSET))(a1);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJIMAJFJDF_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::Void AFCKDCMFHDF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_AFCKDCMFHDF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AECIFFENKOG(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_AECIFFENKOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CPGIKNDHIHD(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_CPGIKNDHIHD_OFFSET))(a1, a2);
		}

		static ::System::Void NBDJDHPOHMF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::RPG::GameCore::AdventureAttackDetectCircleConfig* a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::AdventureAttackDetectCircleConfig*))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_NBDJDHPOHMF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean OKJDEKLMCFB(::UnityEngine::Collider* a1, ::NIKEBECEGKI* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::NIKEBECEGKI*))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_OKJDEKLMCFB_OFFSET))(a1, a2);
		}

		static ::System::Void HOCEMEKEIDK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJIMAJFJDF_HOCEMEKEIDK_OFFSET))();
		}

		static ::System::Void HINDNHIIMEM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HJJIMAJFJDF_HINDNHIIMEM_OFFSET))(a1);
		}

	};
