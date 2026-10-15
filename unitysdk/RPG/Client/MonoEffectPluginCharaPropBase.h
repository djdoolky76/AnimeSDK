#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTColor.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTFloat.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7D6EC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD7D6EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_EKOKNNDEJDL_OFFSET UNITYSDK_OFFSET(0xD7D6710)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GETBASECHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0xD7D64C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GGDKDFNOJKG_OFFSET UNITYSDK_OFFSET(0xD7D61C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_HMDGPAKCBOF_OFFSET UNITYSDK_OFFSET(0xD7D69A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_INIT_OFFSET UNITYSDK_OFFSET(0xD7D5FB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7D5F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_JEGHBBKENLI_1_OFFSET UNITYSDK_OFFSET(0xD7D59A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_JEGHBBKENLI_OFFSET UNITYSDK_OFFSET(0xD7D58D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_LGAJAKJAEAE_OFFSET UNITYSDK_OFFSET(0xD7D5790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MECIOGFHFHF_OFFSET UNITYSDK_OFFSET(0xD7D6530)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_10_OFFSET UNITYSDK_OFFSET(0xD7D5B10)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_11_OFFSET UNITYSDK_OFFSET(0xD7D5BB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_12_OFFSET UNITYSDK_OFFSET(0xD7D5C40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_13_OFFSET UNITYSDK_OFFSET(0xD7D5CE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_14_OFFSET UNITYSDK_OFFSET(0xD7D5D80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_15_OFFSET UNITYSDK_OFFSET(0xD7D5E40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_16_OFFSET UNITYSDK_OFFSET(0xD7D5EE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_1_OFFSET UNITYSDK_OFFSET(0xD7D5210)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_2_OFFSET UNITYSDK_OFFSET(0xD7D52C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_3_OFFSET UNITYSDK_OFFSET(0xD7D5380)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_4_OFFSET UNITYSDK_OFFSET(0xD7D5420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_5_OFFSET UNITYSDK_OFFSET(0xD7D54D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_6_OFFSET UNITYSDK_OFFSET(0xD7D5580)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_7_OFFSET UNITYSDK_OFFSET(0xD7D5620)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_8_OFFSET UNITYSDK_OFFSET(0xD7D56D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_9_OFFSET UNITYSDK_OFFSET(0xD7D5A70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0xD7D5160)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_NIJOKPEIGOK_OFFSET UNITYSDK_OFFSET(0xD7D5830)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_UNINIT_OFFSET UNITYSDK_OFFSET(0xD7D63F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropBase_TypeDefinitionIndex = 69949;

	class MonoEffectPluginCharaPropBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Boolean>* NMIOCGHFBLD; // 0x18
		::Il2CppArray<::System::Boolean>* KGDBHAKEAFD; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* LACPHHCFGNM; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* BNDBBHEOIOH; // 0x30
		::UnityEngine::MaterialPropertyBlock* DNCLJJLAFKA; // 0x38
		static ::Il2CppArray<::System::String*>** StaticGet_HBHECNBPNCL()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60020);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_PLCLBODNGLA()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60028);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_DGAHPPNFOPN()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60030);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_IDKLEFOMHBK()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60038);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_LGNPABGNIBI()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60040);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_LFNGAJHMAIO()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60048);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_OIDGKHBEBLC()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60050);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_EKAFMHFCHFP()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60058);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JBLCOBDKKMJ()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60060);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_HBAHLHFCKCB()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60068);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_LOJPKGCDOMC()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginCharaPropBase")->GetStaticField(0x60070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_CCTOR_OFFSET))();
		}

		::System::Void MFCFABPGFGB(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_1(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_2(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_3(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Color a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_4(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture2D* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture2D*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_5(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_6(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector4 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_6_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_7(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MFCFABPGFGB_8(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_8_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LGAJAKJAEAE(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_LGAJAKJAEAE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NIJOKPEIGOK(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_NIJOKPEIGOK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JEGHBBKENLI(::UnityEngine::Material* a1, ::System::Boolean a2, ::RPG::CustomRP::MaterialIDLUTColor a3, ::System::Int32 a4, ::UnityEngine::Color a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_JEGHBBKENLI_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JEGHBBKENLI_1(::UnityEngine::Material* a1, ::System::Boolean a2, ::RPG::CustomRP::MaterialIDLUTFloat a3, ::System::Int32 a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_JEGHBBKENLI_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MFCFABPGFGB_9(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_10(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_10_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_11(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_11_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_12(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_12_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_13(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_13_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_14(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_14_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_15(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_15_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MFCFABPGFGB_16(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MFCFABPGFGB_16_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_UNINIT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBaseCharacterFilter()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GETBASECHARACTERFILTER_OFFSET))(this);
		}

		::Il2CppArray<::System::Boolean>* GGDKDFNOJKG(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Object* a3)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Il2CppArray<::System::String*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GGDKDFNOJKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* EKOKNNDEJDL(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Object* a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Il2CppArray<::System::String*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_EKOKNNDEJDL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* HMDGPAKCBOF(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Object* a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Object*>*, ::Il2CppArray<::System::String*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_HMDGPAKCBOF_OFFSET))(this, a1, a2, a3);
		}

		::System::String* MECIOGFHFHF(::UnityEngine::Material* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Material*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_MECIOGFHFHF_OFFSET))(this, a1, a2);
		}

	};
}
