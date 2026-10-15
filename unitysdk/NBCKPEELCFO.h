#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/System/Object.h"
class ILGDPAKJKGE;
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBCKPEELCFO_ECOIBJGJFEJ_OFFSET UNITYSDK_OFFSET(0xBABDE70)
#define NBCKPEELCFO_IBCLLIJNJIB_1_OFFSET UNITYSDK_OFFSET(0xBABDDA0)
#define NBCKPEELCFO_IBCLLIJNJIB_OFFSET UNITYSDK_OFFSET(0xBABDC50)
#define NBCKPEELCFO_ICIMHOAPNOJ_OFFSET UNITYSDK_OFFSET(0xBABE000)
#define NBCKPEELCFO_IGCBMFNANHK_OFFSET UNITYSDK_OFFSET(0xBABDF30)
#define NBCKPEELCFO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBABD8F0)
#define NBCKPEELCFO_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xBABDD10)

	class NBCKPEELCFO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::System::Object*>** StaticGet_MANLKLDGKEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::System::Object*>**)UnitySDK::FromName("", "NBCKPEELCFO")->GetStaticField(0x1D370);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBCKPEELCFO_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Boolean IBCLLIJNJIB(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_IBCLLIJNJIB_OFFSET))(a1);
		}

		static ::System::Boolean IBCLLIJNJIB_1(::Il2CppArray<::ILGDPAKJKGE*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::ILGDPAKJKGE*>*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_IBCLLIJNJIB_1_OFFSET))(a1);
		}

		static ::System::Boolean MJEGFOMAOFH(::RPG::GameCore::AlleyConditionType a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AlleyConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_MJEGFOMAOFH_OFFSET))(a1, a2);
		}

		static ::System::Boolean ECOIBJGJFEJ(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_ECOIBJGJFEJ_OFFSET))(a1);
		}

		static ::System::Boolean IGCBMFNANHK(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_IGCBMFNANHK_OFFSET))(a1);
		}

		static ::System::Boolean ICIMHOAPNOJ(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + NBCKPEELCFO_ICIMHOAPNOJ_OFFSET))(a1);
		}

	};
