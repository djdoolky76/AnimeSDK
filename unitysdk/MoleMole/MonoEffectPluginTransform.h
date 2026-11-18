#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_AJJAAMEBNLO.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/MonoEffectPluginTransform_SyncDataStruct.h"

namespace MoleMole { class MonoEffect; }
namespace MoleMole { class MonoEffectPluginTransform_EPGEKLAFHFL; }
namespace System { class Object; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_BMNIHLMGNOM_OFFSET UNITYSDK_OFFSET(0x162DDCB0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET UNITYSDK_OFFSET(0x162DD3E0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_FOIGBJPHMLC_OFFSET UNITYSDK_OFFSET(0x162DE8F0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_FPPBEKMHEBP_OFFSET UNITYSDK_OFFSET(0x162DCA10)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x162DC9B0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GHEDBEJCCHH_OFFSET UNITYSDK_OFFSET(0x162DF5C0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GNPBOABNBKC_OFFSET UNITYSDK_OFFSET(0x162DF4C0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_OAADPBNOAAP_OFFSET UNITYSDK_OFFSET(0x162DD810)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162DD620)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162DD430)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162DD220)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162DD580)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x162DD950)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET UNITYSDK_OFFSET(0x162DC9C0)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x162DDC20)
#define MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x162DDBD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginTransform_TypeDefinitionIndex = 53490;

	class MonoEffectPluginTransform : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::System::Int32* StaticGet_APDCBKHLLJD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x105B0);
		}
		static ::System::Int32* StaticGet_LFDEPOPILCP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x105B4);
		}
		static ::System::Int32* StaticGet_LHFDFBGNNIE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x105B8);
		}
		static ::System::Int32* StaticGet_PALKBKCBPDN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x105BC);
		}
		static ::System::Int32* StaticGet_EIOCINENKNK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginTransform_TypeDefinitionIndex)->GetStaticField(0x105C0);
		}
		// static const ::System::String* OIDIJHKDGOO; // 0x0
		// static const ::System::String* KLMPMADNIHO; // 0x0
		// static const ::System::String* IGKJMECIBCM; // 0x0
		// static const ::System::String* GDPPBFLIPMD; // 0x0
		// static const ::System::String* EOGNJAOPDBG; // 0x0
		// static const ::System::String* OBIIIMPFGMO; // 0x0
		// static const ::System::String* FNGFCDLKKJJ; // 0x0
		// static const ::System::String* HGIOGHKADLC; // 0x0
		// static const ::System::String* ELOPDPMBHBB; // 0x0
		// static const ::System::String* EAKMJCAOKOP; // 0x0
		// static const ::System::String* PEDGPJNAHPF; // 0x0
		::MoleMole::MonoEffectPluginTransform_AJJAAMEBNLO strategy; // 0x18
		::System::Boolean isSceneEffect; // 0x1C
		::System::Boolean tickMuted; // 0x1D
		::System::Byte _padding0[0x2];
		::Il2CppArray<::UnityEngine::Renderer*>* MIBMIBAMHDE; // 0x20
		::MoleMole::MonoEffect* monoEffect; // 0x28
		::UnityEngine::Vector3 CKMMNBDECFI; // 0x30
		::UnityEngine::Quaternion JFBCLLCLCKA; // 0x3C
		::UnityEngine::Vector3 CHBDDDODNND; // 0x4C
		::Il2CppArray<::System::Object*>* LEOAMMBHBLH; // 0x58
		::Il2CppArray<::System::Object*>* _syncDataStructs; // 0x60
		::UnityEngine::MaterialPropertyBlock* IBCPOEAELBO; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Renderer*>* get_Renderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GET_RENDERERS_OFFSET))(this);
		}

		::System::Void set_Renderers(::Il2CppArray<::UnityEngine::Renderer*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_SET_RENDERERS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoUpdateTransformList(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_DOUPDATETRANSFORMLIST_OFFSET))(this, POJEDACFDOF);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_ONVALIDATE_OFFSET))(this);
		}

		static ::System::Void BMNIHLMGNOM(::MoleMole::MonoEffectPluginTransform_SyncDataStruct& OFBDJCHNGOI, ::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::MoleMole::MonoEffectPluginTransform_SyncDataStruct&, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_BMNIHLMGNOM_OFFSET))(OFBDJCHNGOI, POJEDACFDOF);
		}

		::System::Void FOIGBJPHMLC(::MoleMole::MonoEffectPluginTransform_EPGEKLAFHFL* OFBDJCHNGOI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginTransform_EPGEKLAFHFL*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_FOIGBJPHMLC_OFFSET))(this, OFBDJCHNGOI);
		}

		::System::Void OAADPBNOAAP(::UnityEngine::MaterialPropertyBlock*& POJEDACFDOF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_OAADPBNOAAP_OFFSET))(this, POJEDACFDOF);
		}

		::System::Void FPPBEKMHEBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_FPPBEKMHEBP_OFFSET))(this);
		}

		::System::Void GNPBOABNBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GNPBOABNBKC_OFFSET))(this);
		}

		::System::Void GHEDBEJCCHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINTRANSFORM_GHEDBEJCCHH_OFFSET))(this);
		}
	};
}
