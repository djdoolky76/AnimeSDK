#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNBJEKACDHD_ABGELBMDOPK_OFFSET UNITYSDK_OFFSET(0xB578D50)
#define KNBJEKACDHD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5796D0)
#define KNBJEKACDHD_COEGBFGMMBC_OFFSET UNITYSDK_OFFSET(0xB578E40)
#define KNBJEKACDHD_HCDEOKNIGKG_OFFSET UNITYSDK_OFFSET(0xB579590)
#define KNBJEKACDHD_IKLDNENPLDN_OFFSET UNITYSDK_OFFSET(0xB5794F0)
#define KNBJEKACDHD_JJOMBDFMNGH_1_OFFSET UNITYSDK_OFFSET(0xB5794A0)
#define KNBJEKACDHD_JJOMBDFMNGH_OFFSET UNITYSDK_OFFSET(0xB5790C0)
#define KNBJEKACDHD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB579540)
#define KNBJEKACDHD_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xB578CB0)
#define KNBJEKACDHD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB578D00)

	class KNBJEKACDHD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>** StaticGet_IAAOPGHILDN()
		{
			return (::Il2CppArray<::RPG::GameCore::AttackDamageType>**)UnitySDK::FromName("", "KNBJEKACDHD")->GetStaticField(0x39550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBJEKACDHD_CCTOR_OFFSET))();
		}

		static ::System::Boolean LCJMKJPECAP(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_LCJMKJPECAP_OFFSET))(a1, a2);
		}

		static ::System::Void PJPFIHFAHGO(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_PJPFIHFAHGO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>* ABGELBMDOPK(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AttackDamageType>*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_ABGELBMDOPK_OFFSET))(a1);
		}

		static ::System::Void COEGBFGMMBC(::RPG::GameCore::AttackDamageType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::AttackDamageType, ::System::Object*))((::PBYTE)hIl2Cpp + KNBJEKACDHD_COEGBFGMMBC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType JJOMBDFMNGH(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::Collections::Generic::IList_1<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + KNBJEKACDHD_JJOMBDFMNGH_OFFSET))(a1);
		}

		static ::RPG::GameCore::AttackDamageType JJOMBDFMNGH_1(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_JJOMBDFMNGH_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType IKLDNENPLDN(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_IKLDNENPLDN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType KHGIKBFDLFB(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_KHGIKBFDLFB_OFFSET))(a1, a2);
		}

		static ::System::Int32 HCDEOKNIGKG(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + KNBJEKACDHD_HCDEOKNIGKG_OFFSET))(a1);
		}

	};
