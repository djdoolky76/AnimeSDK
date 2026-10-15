#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJFCABOOKCA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KODNMKIMING_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C710450)
#define KODNMKIMING_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C71C870)
#define KODNMKIMING_FJCMHEKLOBD_OFFSET UNITYSDK_OFFSET(0x1C71C690)

	class KODNMKIMING : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_IMKPIEFOLHB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "KODNMKIMING")->GetStaticField(0x13450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KODNMKIMING_CCTOR_OFFSET))();
		}

		static ::AJFCABOOKCA* BPLPBPMEODA(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::AJFCABOOKCA*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + KODNMKIMING_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::AJFCABOOKCA*>* FJCMHEKLOBD(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Collections::Generic::List_1<::AJFCABOOKCA*>*(*)(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + KODNMKIMING_FJCMHEKLOBD_OFFSET))(a1, a2);
		}

	};
