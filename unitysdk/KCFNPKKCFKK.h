#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
#include "unitysdk/RPG/MVector2.h"
class CAHLPKGIABH;
class MDHODFHBAAO;
namespace RPG::LittleGameShare::HoyoPhysics { class PhysicsCollider2DFilterConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCFNPKKCFKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C70CC00)
#define KCFNPKKCFKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70CBF0)
#define KCFNPKKCFKK_HBKBDBGNGCO_OFFSET UNITYSDK_OFFSET(0x1C70C060)
#define KCFNPKKCFKK_JOHEBLJAFKD_OFFSET UNITYSDK_OFFSET(0x1C70BF10)
#define KCFNPKKCFKK_LJCNOHPGAMN_OFFSET UNITYSDK_OFFSET(0x1C70C910)
#define KCFNPKKCFKK_NBFPFDKJJNE_OFFSET UNITYSDK_OFFSET(0x1C70BFE0)

	class KCFNPKKCFKK : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig** StaticGet_JKBDFGBDFDD()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig**)UnitySDK::FromName("", "KCFNPKKCFKK")->GetStaticField(0x12930);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig** StaticGet_FFPMCODFHPG()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DFilterConfig**)UnitySDK::FromName("", "KCFNPKKCFKK")->GetStaticField(0x12938);
		}

		// static const ::System::Object GHAIJJDAOJG; // 0x0
		// static const ::System::Object EDPCLCAFFIC; // 0x0
		// static const ::System::Object CNDOACOACMN; // 0x0
		// static const ::System::Object BAPPEMADOGN; // 0x0
		// static const ::System::Object EOBPGKJGFLM; // 0x0
		// static const ::System::Object NEBNKADKJGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFNPKKCFKK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFNPKKCFKK_CCTOR_OFFSET))();
		}

		static ::System::Boolean JOHEBLJAFKD(::CAHLPKGIABH* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::CAHLPKGIABH*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KCFNPKKCFKK_JOHEBLJAFKD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean NBFPFDKJJNE(::HGCDFKINFPA a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::HGCDFKINFPA, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KCFNPKKCFKK_NBFPFDKJJNE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HBKBDBGNGCO(::MDHODFHBAAO* a1, ::CAHLPKGIABH* a2, ::System::Collections::Generic::List_1<::CAHLPKGIABH*>* a3, ::RPG::MVector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::MDHODFHBAAO*, ::CAHLPKGIABH*, ::System::Collections::Generic::List_1<::CAHLPKGIABH*>*, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + KCFNPKKCFKK_HBKBDBGNGCO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single LJCNOHPGAMN(::MDHODFHBAAO* a1, ::CAHLPKGIABH* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::MDHODFHBAAO*, ::CAHLPKGIABH*, ::System::Single))((::PBYTE)hIl2Cpp + KCFNPKKCFKK_LJCNOHPGAMN_OFFSET))(a1, a2, a3);
		}

	};
