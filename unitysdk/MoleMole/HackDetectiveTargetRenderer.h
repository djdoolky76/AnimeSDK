#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_DAOGDGKHOCM_OFFSET UNITYSDK_OFFSET(0x139E94C0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x139E9B20)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_LBHNOFAOCKE_OFFSET UNITYSDK_OFFSET(0x139E9B80)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_LELPCPOGICN_OFFSET UNITYSDK_OFFSET(0x139E89B0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_OGAPHGAEMGO_OFFSET UNITYSDK_OFFSET(0x139EAA20)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x139E8960)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_SETEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x139E9450)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x139E93F0)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x139E8D50)
#define MOLEMOLE_HACKDETECTIVETARGETRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x139EA8F0)

namespace MoleMole
{
	inline static constexpr unsigned int HackDetectiveTargetRenderer_TypeDefinitionIndex = 69380;

	class HackDetectiveTargetRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_LPMKCIHIKOM()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x44BF0);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_FMMONJLPBCK()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(HackDetectiveTargetRenderer_TypeDefinitionIndex)->GetStaticField(0x44BF8);
		}
		// static const ::System::String* PJNJFACFJHP; // 0x0
		// static const ::System::Reflection::BindingFlags KHMNNDJCOPI = 0x34; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA; // 0x18
		::UnityEngine::Material* EBIDGDBLDPI; // 0x20
		::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* GAEIPOICOLD; // 0x28
		::System::Boolean HAFJLKPCCOO; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single FNIOPKPHDEH; // 0x34
		::UnityEngine::Color KJGGFINPHHF; // 0x38
		::System::Single IJOPDABDMAN; // 0x48
		::System::Single DGGDBCADFBN; // 0x4C
		::System::Single MLKLCEKJGPE; // 0x50
		::System::Single NMJENEBEBAB; // 0x54
		::System::Boolean HJONLICJCJI; // 0x58
		::System::Boolean FIOEIEDAPKK; // 0x59
		::System::Boolean EOPKGAEDCEG; // 0x5A
		::System::Boolean LAMNBHALLID; // 0x5B
		::System::Byte _padding1[0x4];
		::MoleMole::Config::ConfigHack* DFMKILICPFB; // 0x60
		::System::Int32 DMCFIJLECBJ; // 0x68
		::System::Int32 KEJFPPBLNBN; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerInteract(::System::Boolean GCKPCMEMKMM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_TRIGGERINTERACT_OFFSET))(this, GCKPCMEMKMM);
		}

		::System::Void SetEffectsVisible(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_SETEFFECTSVISIBLE_OFFSET))(this, MBJDMKCGOCK);
		}

		::System::Void Initialize(::System::Boolean HJONLICJCJI, ::System::Boolean FIOEIEDAPKK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_INITIALIZE_OFFSET))(this, HJONLICJCJI, FIOEIEDAPKK);
		}

		::System::Void DAOGDGKHOCM(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_DAOGDGKHOCM_OFFSET))(this, MBJDMKCGOCK);
		}

		static ::System::Boolean OGAPHGAEMGO(::MoleMole::Config::ConfigHack* AMJADGKJAPK, ::System::String* HAAJFLJEHNH, ::System::Boolean PDFEDOCLDHG)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHack*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_OGAPHGAEMGO_OFFSET))(AMJADGKJAPK, HAAJFLJEHNH, PDFEDOCLDHG);
		}

		::System::Void LELPCPOGICN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_LELPCPOGICN_OFFSET))(this);
		}

		::System::Void LBHNOFAOCKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKDETECTIVETARGETRENDERER_LBHNOFAOCKE_OFFSET))(this);
		}
	};
}
