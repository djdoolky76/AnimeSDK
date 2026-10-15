#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class PAIJKCEOIJP;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }
namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForSeconds; }

#define GEJLCOJMPOE_AAKCACIMLDO_OFFSET UNITYSDK_OFFSET(0x159DC2C0)
#define GEJLCOJMPOE_AIFJJJIKNAG_OFFSET UNITYSDK_OFFSET(0x159DCC30)
#define GEJLCOJMPOE_BKFELLAGHIH_OFFSET UNITYSDK_OFFSET(0x159DC460)
#define GEJLCOJMPOE_BMNPAODPNMJ_OFFSET UNITYSDK_OFFSET(0x159DCC90)
#define GEJLCOJMPOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x159DCCA0)
#define GEJLCOJMPOE_CTOR_OFFSET UNITYSDK_OFFSET(0x159DB4D0)
#define GEJLCOJMPOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159DB5F0)
#define GEJLCOJMPOE_ECJGNIJOIAP_OFFSET UNITYSDK_OFFSET(0x159DC320)
#define GEJLCOJMPOE_GJADMCGKECH_OFFSET UNITYSDK_OFFSET(0x159DC730)
#define GEJLCOJMPOE_IMPHDACHKDB_OFFSET UNITYSDK_OFFSET(0x159DC210)
#define GEJLCOJMPOE_INFNLJIDLKO_OFFSET UNITYSDK_OFFSET(0x159DBA80)
#define GEJLCOJMPOE_JGPILIKKMKN_OFFSET UNITYSDK_OFFSET(0x159DBE00)
#define GEJLCOJMPOE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x159DB810)
#define GEJLCOJMPOE_KPEGBKJNPOA_OFFSET UNITYSDK_OFFSET(0x159DC120)
#define GEJLCOJMPOE_KPLOJKPHFMM_OFFSET UNITYSDK_OFFSET(0x159DC630)
#define GEJLCOJMPOE_LGNGCBPIIDN_OFFSET UNITYSDK_OFFSET(0x159DBCA0)
#define GEJLCOJMPOE_MEKMJOMONGI_OFFSET UNITYSDK_OFFSET(0x159DCA10)
#define GEJLCOJMPOE_MNEDKKEJAOD_OFFSET UNITYSDK_OFFSET(0x159DBB60)
#define GEJLCOJMPOE_NMBCJOOFCIB_OFFSET UNITYSDK_OFFSET(0x159DBF00)
#define GEJLCOJMPOE_NPIEMKCHJNM_OFFSET UNITYSDK_OFFSET(0x159DC000)
#define GEJLCOJMPOE_OEDODIGEIEM_OFFSET UNITYSDK_OFFSET(0x159DC5A0)

	class GEJLCOJMPOE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>* CFPLLDHOHGO; // 0x10
		::RPG::Client::Prop::DestroyRootPuzzleBoard* CFKHNPGEAJA; // 0x18
		::UnityEngine::Transform* PFDKEGCACHK; // 0x20
		::System::Object* PEMABMAIIMK; // 0x28
		::Il2CppArray<::UnityEngine::GameObject*>* MPJFMNHAMCA; // 0x30
		::System::String* NNIOCPHFNNG; // 0x38
		::UnityEngine::Coroutine* CLJNFEPBDIL; // 0x40
		::RPG::Client::MonoEffect* AHLCIIKKPCB; // 0x48
		::System::Single LPJKBCGJCMC; // 0x50
		::UnityEngine::Vector3 BNAJJMBKIDK; // 0x54
		::UnityEngine::Vector3 LBPKLJHDKNF; // 0x60
		static ::System::Int32* StaticGet_IAGHNDPGICD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GEJLCOJMPOE")->GetStaticField(0x13850);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::DestroyRootPuzzleBoard* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::DestroyRootPuzzleBoard*))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEJLCOJMPOE_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void INFNLJIDLKO(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_INFNLJIDLKO_OFFSET))(this, a1);
		}

		::System::Void MNEDKKEJAOD(::RPG::Client::Prop::DestroyRootPuzzleChess* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleChess*))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_MNEDKKEJAOD_OFFSET))(this, a1);
		}

		::System::Void LGNGCBPIIDN(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::Il2CppArray<::UnityEngine::GameObject*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Il2CppArray<::UnityEngine::GameObject*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_LGNGCBPIIDN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* NMBCJOOFCIB(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_NMBCJOOFCIB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JGPILIKKMKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_JGPILIKKMKN_OFFSET))(this);
		}

		::System::Void NPIEMKCHJNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_NPIEMKCHJNM_OFFSET))(this);
		}

		::System::Void KPEGBKJNPOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_KPEGBKJNPOA_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IMPHDACHKDB(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::PAIJKCEOIJP*>*>* a1, ::UnityEngine::WaitForSeconds* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::PAIJKCEOIJP*>*>*, ::UnityEngine::WaitForSeconds*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_IMPHDACHKDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AAKCACIMLDO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_AAKCACIMLDO_OFFSET))(this, a1);
		}

		::System::Void ECJGNIJOIAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_ECJGNIJOIAP_OFFSET))(this);
		}

		::System::Void BKFELLAGHIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_BKFELLAGHIH_OFFSET))(this);
		}

		::RPG::Client::Prop::DestroyRootPuzzleChess* OEDODIGEIEM(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::Prop::DestroyRootPuzzleChess*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_OEDODIGEIEM_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* KPLOJKPHFMM(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_KPLOJKPHFMM_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 GJADMCGKECH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_GJADMCGKECH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MEKMJOMONGI(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_MEKMJOMONGI_OFFSET))(this, a1);
		}

		::System::Void AIFJJJIKNAG(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_AIFJJJIKNAG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>* BMNPAODPNMJ()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE_BMNPAODPNMJ_OFFSET))(this);
		}

	};
