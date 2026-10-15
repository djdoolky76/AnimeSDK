#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class AIBOPLOBAFN;
class AttachPointSet;
class DEBEAKKOHLN;
class GELIALJDFBL;
class JHJHLNDJKNM;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client { class FollowPointMapping; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client { class MonoEffectPluginCharacterModelCapture; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define KBJOBKGAHOP_AMCCBDHEBNJ_OFFSET UNITYSDK_OFFSET(0xB3069F0)
#define KBJOBKGAHOP_BMDADJIHJLM_OFFSET UNITYSDK_OFFSET(0xB306BD0)
#define KBJOBKGAHOP_CGMKIDHCAJM_OFFSET UNITYSDK_OFFSET(0xB307510)
#define KBJOBKGAHOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB307D90)
#define KBJOBKGAHOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB302F30)
#define KBJOBKGAHOP_FBEPJCBLAJO_OFFSET UNITYSDK_OFFSET(0xB3062C0)
#define KBJOBKGAHOP_GEBDHAIMOEN_OFFSET UNITYSDK_OFFSET(0xB306660)
#define KBJOBKGAHOP_GPIDPKOBNIJ_OFFSET UNITYSDK_OFFSET(0xB307C80)
#define KBJOBKGAHOP_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB3059D0)
#define KBJOBKGAHOP_HMMDBKHEIBN_OFFSET UNITYSDK_OFFSET(0xB302FA0)
#define KBJOBKGAHOP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB302EC0)
#define KBJOBKGAHOP_IAGDJCDGPJM_OFFSET UNITYSDK_OFFSET(0xB307A90)
#define KBJOBKGAHOP_IHHNOMGOJFD_OFFSET UNITYSDK_OFFSET(0xB307D20)
#define KBJOBKGAHOP_JLAGCFPGDND_OFFSET UNITYSDK_OFFSET(0xB306A70)
#define KBJOBKGAHOP_JMNKOGDNBIB_OFFSET UNITYSDK_OFFSET(0xB303590)
#define KBJOBKGAHOP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB303310)
#define KBJOBKGAHOP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB302D20)
#define KBJOBKGAHOP_LFJBLKLHEAL_OFFSET UNITYSDK_OFFSET(0xB307D30)
#define KBJOBKGAHOP_LMPAJHCFGKB_OFFSET UNITYSDK_OFFSET(0xB3067F0)
#define KBJOBKGAHOP_LNBLJAMDPMB_OFFSET UNITYSDK_OFFSET(0xB306470)
#define KBJOBKGAHOP_MPKOCKJAGEN_OFFSET UNITYSDK_OFFSET(0xB305FE0)
#define KBJOBKGAHOP_OHNKBMFOBBC_OFFSET UNITYSDK_OFFSET(0xB307450)
#define KBJOBKGAHOP_OMEIFLGHOBI_OFFSET UNITYSDK_OFFSET(0xB306FF0)
#define KBJOBKGAHOP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB3032C0)

inline static constexpr unsigned int KBJOBKGAHOP_TypeDefinitionIndex = 70047;

	class KBJOBKGAHOP : public ::RPG::Client::BehaviorBase
	{
	public:
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x18
		::UnityEngine::GameObject* JIAPNIHGPJA; // 0x20
		::RPG::GameCore::GameEntity* NDDEIKDADAH; // 0x28
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* FEIFBICKDIJ; // 0x30
		::RPG::Client::AttachPointMapping* KFDNFOFPLII; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GPFNBKEBJII; // 0x40
		::RPG::Client::FollowPointMapping* AMIAMLBIEEN; // 0x48
		::UnityEngine::Animator* APPGGMLEPLN; // 0x50
		::UnityEngine::Transform* HKJLEHMGONC; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* GHKPEACJIAD; // 0x60
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* HFCELNDHIIH; // 0x68
		::AIBOPLOBAFN* IGABAMILIDM; // 0x70
		::System::Single ODBGLBMLOJD; // 0x78
		::System::Single HFEBKEBJLME; // 0x7C
		::System::Int32 KNHPPBIMEGF; // 0x80
		::System::Boolean HHIBIFHGOBL; // 0x84
		::System::Boolean DIMECBLLOGB; // 0x85
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_POFDHALAIMC()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("", "KBJOBKGAHOP")->GetStaticField(0x33560);
		}

		static ::System::Collections::Generic::List_1<::AttachPointSet*>** StaticGet_BGOBEFIFMJJ()
		{
			return (::System::Collections::Generic::List_1<::AttachPointSet*>**)UnitySDK::FromName("", "KBJOBKGAHOP")->GetStaticField(0x33568);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>** StaticGet_LFOKLJNOFBP()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>**)UnitySDK::FromName("", "KBJOBKGAHOP")->GetStaticField(0x33570);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_DISPOSE_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void MPKOCKJAGEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_MPKOCKJAGEN_OFFSET))(this);
		}

		::System::Void FBEPJCBLAJO(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_FBEPJCBLAJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JMNKOGDNBIB(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_JMNKOGDNBIB_OFFSET))(this, a1, a2);
		}

		::System::Void LMPAJHCFGKB(::UnityEngine::MonoBehaviour* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_LMPAJHCFGKB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* JLAGCFPGDND(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_JLAGCFPGDND_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* BMDADJIHJLM()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_BMDADJIHJLM_OFFSET))(this);
		}

		::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* OMEIFLGHOBI()
		{
			return ((::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_OMEIFLGHOBI_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GEBDHAIMOEN(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_GEBDHAIMOEN_OFFSET))(this, a1, a2);
		}

		static ::System::Void OHNKBMFOBBC(::GELIALJDFBL* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::GELIALJDFBL*, ::System::Object*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_OHNKBMFOBBC_OFFSET))(a1, a2);
		}

		static ::System::Void CGMKIDHCAJM(::JHJHLNDJKNM* a1, ::RPG::Client::AttachPointMapping* a2)
		{
			return ((::System::Void(*)(::JHJHLNDJKNM*, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_CGMKIDHCAJM_OFFSET))(a1, a2);
		}

		::System::Void LNBLJAMDPMB(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_LNBLJAMDPMB_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* AMCCBDHEBNJ()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_AMCCBDHEBNJ_OFFSET))(this);
		}

		::System::Void HMMDBKHEIBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_HMMDBKHEIBN_OFFSET))(this);
		}

		::System::Void IAGDJCDGPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_IAGDJCDGPJM_OFFSET))(this);
		}

		static ::System::Void GPIDPKOBNIJ(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_GPIDPKOBNIJ_OFFSET))(a1);
		}

		::RPG::Client::MonoEffectPluginCharacterModelCapture* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginCharacterModelCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_HPNDIIPEFLJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* IHHNOMGOJFD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_IHHNOMGOJFD_OFFSET))(this);
		}

		::UnityEngine::Transform* LFJBLKLHEAL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOBKGAHOP_LFJBLKLHEAL_OFFSET))(this);
		}

	};
