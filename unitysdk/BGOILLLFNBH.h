#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IDEFMHBFDKL;
class OHIFOGLGAKI;
class PIINMLJJIAF;
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGOILLLFNBH_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xB469E20)
#define BGOILLLFNBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB46BEC0)
#define BGOILLLFNBH_CMOOFJOLBAF_OFFSET UNITYSDK_OFFSET(0xB46BCF0)
#define BGOILLLFNBH_COPKIGDEEIN_OFFSET UNITYSDK_OFFSET(0xB46BB30)
#define BGOILLLFNBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB469BA0)
#define BGOILLLFNBH_DMBEPACJNPO_OFFSET UNITYSDK_OFFSET(0xB46B970)
#define BGOILLLFNBH_FPDBLBFEICB_OFFSET UNITYSDK_OFFSET(0xB46ACA0)
#define BGOILLLFNBH_GBEBHDAKHAL_OFFSET UNITYSDK_OFFSET(0xB469EC0)
#define BGOILLLFNBH_PFFFGEDFLPK_OFFSET UNITYSDK_OFFSET(0xB46BA50)

	class BGOILLLFNBH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::PIINMLJJIAF*>* JOICGHIMGDN; // 0x10
		::OHIFOGLGAKI* EHJGKDIFINJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::IDEFMHBFDKL*, ::PIINMLJJIAF*>* CKINPNIALOA; // 0x20
		::System::Collections::Generic::Dictionary_2<::IDEFMHBFDKL*, ::PIINMLJJIAF*>* ACBLKAECPNE; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::PIINMLJJIAF*>* JPMIGLBGPIP; // 0x30
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x38
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BOMDLHIEJHJ()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "BGOILLLFNBH")->GetStaticField(0x6ED20);
		}

		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGOILLLFNBH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGOILLLFNBH_CCTOR_OFFSET))();
		}

		::System::Void AKJABINEGDJ(::Il2CppArray<::PIINMLJJIAF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PIINMLJJIAF*>*))((::PBYTE)hIl2Cpp + BGOILLLFNBH_AKJABINEGDJ_OFFSET))(this, a1);
		}

		::System::Void GBEBHDAKHAL(::IDEFMHBFDKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDEFMHBFDKL*))((::PBYTE)hIl2Cpp + BGOILLLFNBH_GBEBHDAKHAL_OFFSET))(this, a1);
		}

		::System::Void FPDBLBFEICB(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC*))((::PBYTE)hIl2Cpp + BGOILLLFNBH_FPDBLBFEICB_OFFSET))(this, a1);
		}

		::System::Void DMBEPACJNPO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOILLLFNBH_DMBEPACJNPO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PFFFGEDFLPK(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BGOILLLFNBH_PFFFGEDFLPK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void COPKIGDEEIN(::IDEFMHBFDKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDEFMHBFDKL*))((::PBYTE)hIl2Cpp + BGOILLLFNBH_COPKIGDEEIN_OFFSET))(this, a1);
		}

		::System::Void CMOOFJOLBAF(::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior_LLOPNELAIGC*))((::PBYTE)hIl2Cpp + BGOILLLFNBH_CMOOFJOLBAF_OFFSET))(this, a1);
		}

	};
