#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLJAMAPEOJK.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class ACHPKKLGLNI;
class FMJLKHFNKNO;
class KLKMCNOECAL;
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define NDLKAOPCNKA_AAPBPCBCNDH_OFFSET UNITYSDK_OFFSET(0x16FC86A0)
#define NDLKAOPCNKA_BAHEBGFOONF_OFFSET UNITYSDK_OFFSET(0x16FC7780)
#define NDLKAOPCNKA_BEGLGHLIPDH_OFFSET UNITYSDK_OFFSET(0x16FC7D60)
#define NDLKAOPCNKA_BNIKCIKAAIO_OFFSET UNITYSDK_OFFSET(0x16FC85C0)
#define NDLKAOPCNKA_CTOR_OFFSET UNITYSDK_OFFSET(0x16FC6D70)
#define NDLKAOPCNKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FC6DB0)
#define NDLKAOPCNKA_GETMODELART_OFFSET UNITYSDK_OFFSET(0x16FC81E0)
#define NDLKAOPCNKA_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x16FC8180)
#define NDLKAOPCNKA_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x16FC8760)
#define NDLKAOPCNKA_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x16FC87C0)
#define NDLKAOPCNKA_GMLPGIAMJLC_OFFSET UNITYSDK_OFFSET(0x16FC8220)
#define NDLKAOPCNKA_HBOHLLNMPMI_OFFSET UNITYSDK_OFFSET(0x16FC8350)
#define NDLKAOPCNKA_HCBBJLGKIEB_OFFSET UNITYSDK_OFFSET(0x16FC7090)
#define NDLKAOPCNKA_IIDAPFIBAPD_OFFSET UNITYSDK_OFFSET(0x16FC7EA0)
#define NDLKAOPCNKA_JIFEFGBEPJC_OFFSET UNITYSDK_OFFSET(0x16FC76C0)
#define NDLKAOPCNKA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16FC84C0)
#define NDLKAOPCNKA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16FC71D0)
#define NDLKAOPCNKA_MCAJGLEBDMI_OFFSET UNITYSDK_OFFSET(0x16FC8610)
#define NDLKAOPCNKA_MCOFKAEJAIF_OFFSET UNITYSDK_OFFSET(0x16FC7170)
#define NDLKAOPCNKA_PJIBDPFIPLF_OFFSET UNITYSDK_OFFSET(0x16FC7960)
#define NDLKAOPCNKA_TICK_OFFSET UNITYSDK_OFFSET(0x16FC83B0)

inline static constexpr unsigned int NDLKAOPCNKA_TypeDefinitionIndex = 58212;

	class NDLKAOPCNKA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x18
		::System::Collections::Generic::List_1<::FMJLKHFNKNO*>* ABLEHIJPLLG; // 0x20
		::RPG::Client::CharacterShaderPropertyTransition* EPOBIDJNGOL; // 0x28
		::RPG::Client::CharacterEffect* HJBEGIDAMBP; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* FBFAAAABPPM; // 0x38
		::UnityEngine::GameObject* IMAKLOCDJGL; // 0x40
		::UnityEngine::Animator* APPGGMLEPLN; // 0x48
		::ACHPKKLGLNI* MFEGCLCFBBI; // 0x50
		::UnityEngine::Transform* CEFPLCJBPLB; // 0x58
		::UnityEngine::GameObject* BPPKOHFDGON; // 0x60
		::HLJAMAPEOJK GGCMOIJPNIF; // 0x68
		::System::Boolean LBFCOHCHIOP; // 0x78
		::System::Boolean FOIGIGFDDLK; // 0x79
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1, ::KLKMCNOECAL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::KLKMCNOECAL*))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetModelGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_GETMODELGO_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelArt()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_GETMODELART_OFFSET))(this);
		}

		::System::Void GMLPGIAMJLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_GMLPGIAMJLC_OFFSET))(this);
		}

		::System::Void HBOHLLNMPMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_HBOHLLNMPMI_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void JIFEFGBEPJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_JIFEFGBEPJC_OFFSET))(this);
		}

		::System::Void IIDAPFIBAPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_IIDAPFIBAPD_OFFSET))(this);
		}

		::System::Void BNIKCIKAAIO(::RPG::Client::EntityGameObjectConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_BNIKCIKAAIO_OFFSET))(this, a1);
		}

		::System::Void MCAJGLEBDMI(::RPG::Client::EntityGameObjectConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_MCAJGLEBDMI_OFFSET))(this, a1);
		}

		::System::Void BEGLGHLIPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_BEGLGHLIPDH_OFFSET))(this);
		}

		::System::Void BAHEBGFOONF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_BAHEBGFOONF_OFFSET))(this);
		}

		::System::Void MCOFKAEJAIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_MCOFKAEJAIF_OFFSET))(this);
		}

		::System::Void PJIBDPFIPLF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_PJIBDPFIPLF_OFFSET))(this, a1);
		}

		::System::Void HCBBJLGKIEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_HCBBJLGKIEB_OFFSET))(this);
		}

		::System::Void AAPBPCBCNDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_AAPBPCBCNDH_OFFSET))(this);
		}

		::RPG::GameCore::EntityLoadState get_LoadState()
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_GET_LOADSTATE_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* get_MockAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLKAOPCNKA_GET_MOCKANIMATOR_OFFSET))(this);
		}

	};
