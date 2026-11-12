#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class DEBEAKKOHLN;
class NEOCEOCDEAF;
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginFade; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CBPBNFJLEMP_ANNAOGJMHDI_OFFSET UNITYSDK_OFFSET(0xCE1F950)
#define CBPBNFJLEMP_BMBJMCFAJKB_OFFSET UNITYSDK_OFFSET(0xCE1F630)
#define CBPBNFJLEMP_BNEKJHADLNK_OFFSET UNITYSDK_OFFSET(0xCE20400)
#define CBPBNFJLEMP_CAMFLHCHLIN_OFFSET UNITYSDK_OFFSET(0xCE20220)
#define CBPBNFJLEMP_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE22CD0)
#define CBPBNFJLEMP_CEDBLIHOJKL_OFFSET UNITYSDK_OFFSET(0xCE206A0)
#define CBPBNFJLEMP_CTOR_OFFSET UNITYSDK_OFFSET(0xCE22CC0)
#define CBPBNFJLEMP_DFDAGEDHEEL_OFFSET UNITYSDK_OFFSET(0xCE22680)
#define CBPBNFJLEMP_DGJIIEJECAF_OFFSET UNITYSDK_OFFSET(0xCE1FD30)
#define CBPBNFJLEMP_DGOIBKLBKPH_OFFSET UNITYSDK_OFFSET(0xCE22BE0)
#define CBPBNFJLEMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE1F240)
#define CBPBNFJLEMP_DMEGNGKIHAL_OFFSET UNITYSDK_OFFSET(0xCE20B80)
#define CBPBNFJLEMP_EAGJOJLODIL_OFFSET UNITYSDK_OFFSET(0xCE22BD0)
#define CBPBNFJLEMP_EAJDBALAGNN_OFFSET UNITYSDK_OFFSET(0xCE1F2B0)
#define CBPBNFJLEMP_EFBDDJNDKDP_OFFSET UNITYSDK_OFFSET(0xCE1FE70)
#define CBPBNFJLEMP_GDGHAHDADJA_OFFSET UNITYSDK_OFFSET(0xCE20EF0)
#define CBPBNFJLEMP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCE1F1F0)
#define CBPBNFJLEMP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCE21BD0)
#define CBPBNFJLEMP_JOMBAMKFKCN_OFFSET UNITYSDK_OFFSET(0xCE222D0)
#define CBPBNFJLEMP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xCE21030)
#define CBPBNFJLEMP_KOCBBMNHACH_OFFSET UNITYSDK_OFFSET(0xCE21FF0)
#define CBPBNFJLEMP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCE1F120)
#define CBPBNFJLEMP_LMCIKGDCCOF_OFFSET UNITYSDK_OFFSET(0xCE1F400)
#define CBPBNFJLEMP_MABLPJAECCE_OFFSET UNITYSDK_OFFSET(0xCE21E40)
#define CBPBNFJLEMP_MNBJKIPABGB_OFFSET UNITYSDK_OFFSET(0xCE22100)
#define CBPBNFJLEMP_NDAJJCCJPBH_OFFSET UNITYSDK_OFFSET(0xCE21630)
#define CBPBNFJLEMP_OFHMKIJGLMH_OFFSET UNITYSDK_OFFSET(0xCE1FC60)
#define CBPBNFJLEMP_OGJHECMIOCA_OFFSET UNITYSDK_OFFSET(0xCE21EE0)
#define CBPBNFJLEMP_OMGBFKFEEFL_OFFSET UNITYSDK_OFFSET(0xCE226F0)
#define CBPBNFJLEMP_OOBIDAGGFAE_OFFSET UNITYSDK_OFFSET(0xCE1F440)
#define CBPBNFJLEMP_PFBCKGIPANI_OFFSET UNITYSDK_OFFSET(0xCE204E0)
#define CBPBNFJLEMP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xCE21A90)
#define CBPBNFJLEMP__FADEINIMMEDIATELY_B__5_0_OFFSET UNITYSDK_OFFSET(0xCE22D00)

inline static constexpr unsigned int CBPBNFJLEMP_TypeDefinitionIndex = 71834;

	class CBPBNFJLEMP : public ::RPG::Client::BehaviorBase
	{
	public:
		::NEOCEOCDEAF* BOMJIBEFLGN; // 0x18
		::System::Action* IMDAMEDHLLP; // 0x20
		::RPG::Client::MonoEffectPluginCharaEffectBase* AONFBPEJBMJ; // 0x28
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* ADDCNGJCJDI; // 0x38
		::UnityEngine::Animator* HFFOMKPLKED; // 0x40
		::System::Boolean HAPJKANBGAA; // 0x48
		::System::Boolean INGPLFOMNPE; // 0x49
		::System::Boolean JEMBDKHOFAP; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Single HICCGLEKDHC; // 0x4C
		static ::System::Int32* StaticGet_IHJIPPDKPGP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CBPBNFJLEMP")->GetStaticField(0x16290);
		}

		static ::System::Int32* StaticGet_EGNAOANBGLL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CBPBNFJLEMP")->GetStaticField(0x16294);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPBNFJLEMP_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Animator* EAJDBALAGNN()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_EAJDBALAGNN_OFFSET))(this);
		}

		::System::Void LMCIKGDCCOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_LMCIKGDCCOF_OFFSET))(this);
		}

		::System::Void OOBIDAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_OOBIDAGGFAE_OFFSET))(this);
		}

		::System::Void ANNAOGJMHDI(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_ANNAOGJMHDI_OFFSET))(this, a1, a2);
		}

		::System::Void EFBDDJNDKDP(::System::Action* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_EFBDDJNDKDP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DMEGNGKIHAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_DMEGNGKIHAL_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BMBJMCFAJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_BMBJMCFAJKB_OFFSET))(this);
		}

		::System::Void NDAJJCCJPBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_NDAJJCCJPBH_OFFSET))(this);
		}

		::System::Void MABLPJAECCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_MABLPJAECCE_OFFSET))(this, a1);
		}

		::System::Void OGJHECMIOCA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_OGJHECMIOCA_OFFSET))(this, a1);
		}

		::System::Void MNBJKIPABGB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_MNBJKIPABGB_OFFSET))(this, a1);
		}

		::System::Void KOCBBMNHACH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_KOCBBMNHACH_OFFSET))(this, a1);
		}

		::System::Void JOMBAMKFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_JOMBAMKFKCN_OFFSET))(this, a1);
		}

		::System::Void DFDAGEDHEEL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_DFDAGEDHEEL_OFFSET))(this, a1);
		}

		::System::Void DGJIIEJECAF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_DGJIIEJECAF_OFFSET))(this, a1);
		}

		::System::Void OFHMKIJGLMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_OFHMKIJGLMH_OFFSET))(this);
		}

		::System::Boolean CAMFLHCHLIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_CAMFLHCHLIN_OFFSET))(this);
		}

		::System::Void CEDBLIHOJKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_CEDBLIHOJKL_OFFSET))(this, a1, a2);
		}

		::System::Void PFBCKGIPANI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_PFBCKGIPANI_OFFSET))(this, a1);
		}

		::System::Void GDGHAHDADJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_GDGHAHDADJA_OFFSET))(this, a1);
		}

		::System::Void OMGBFKFEEFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_OMGBFKFEEFL_OFFSET))(this, a1);
		}

		::System::Void BNEKJHADLNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_BNEKJHADLNK_OFFSET))(this);
		}

		::System::Single EAGJOJLODIL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_EAGJOJLODIL_OFFSET))(this);
		}

		::System::Boolean DGOIBKLBKPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_DGOIBKLBKPH_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginFade* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void _FadeInImmediately_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPBNFJLEMP__FADEINIMMEDIATELY_B__5_0_OFFSET))(this);
		}

	};
