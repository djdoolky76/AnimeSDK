#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ADDCASTER_OFFSET UNITYSDK_OFFSET(0x162D60D0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_DJECLIKJOID_OFFSET UNITYSDK_OFFSET(0x162D9160)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_HDDPAKJBEPM_OFFSET UNITYSDK_OFFSET(0x162D7B70)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_HIFKAFADANN_OFFSET UNITYSDK_OFFSET(0x162D6F40)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_IFLMMKFJEPI_OFFSET UNITYSDK_OFFSET(0x162D7500)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x162D5BE0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_LFBIMCMDHLB_OFFSET UNITYSDK_OFFSET(0x162D66E0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162D86B0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0x162D8700)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_OPMLNDJEBDB_OFFSET UNITYSDK_OFFSET(0x162D70D0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_REMOVECASTER_OFFSET UNITYSDK_OFFSET(0x162D67B0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x162D7070)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162D90D0)
#define MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162D8EF0)

namespace MoleMole::MiniGame::RabGame
{
	inline static constexpr unsigned int RabUltiStartupVFXController_TypeDefinitionIndex = 53432;

	class RabUltiStartupVFXController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_IKINOGCMPJB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10590);
		}
		static ::System::Int32* StaticGet_LMHBEGJNOJI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10594);
		}
		static ::System::Int32* StaticGet_OPLBLMGNDBB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x10598);
		}
		static ::System::Int32* StaticGet_FIEENEFHHMB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x1059C);
		}
		static ::System::Int32* StaticGet_ENFIHADDDOP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RabUltiStartupVFXController_TypeDefinitionIndex)->GetStaticField(0x105A0);
		}
		// static const ::System::Int32 NPIBPCIDNDN = 0x10; // 0x0
		::System::Boolean IHLDIOOCHEM; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::AnimationCurve* KOMNGLDIOEK; // 0x20
		::UnityEngine::AnimationCurve* BIBAHDJLCPC; // 0x28
		::System::Single JOHKIHIBLEA; // 0x30
		::System::Single DPPPPAIONHK; // 0x34
		::System::Single IGAPFMCDCED; // 0x38
		::System::Single DHPDFEFFCIO; // 0x3C
		::System::Single KPLLAEGBGFN; // 0x40
		::System::Byte _padding1[0x4];
		::System::String* LEIHFGJNGKH; // 0x48
		::System::String* BCBMKLLMCOG; // 0x50
		::System::String* PCKFFNFNPAI; // 0x58
		::System::String* MMPIIOOJKJB; // 0x60
		::MoleMole::Battle::Entity* GMPAJBPEAPG; // 0x68
		::System::UInt32 KEOCINPGKEH; // 0x70
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* PAGANICNJKI; // 0x78
		::UnityEngine::MaterialPropertyBlock* FAKODOKICHI; // 0x80
		::UnityEngine::Camera* ICODNFEEPGM; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* AEPLGPHOPOM; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PPAGILLAOCN; // 0x98
		::Il2CppArray<::UnityEngine::Vector4>* EKLKFEOAOKD; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_INITIALIZE_OFFSET))(this);
		}

		::System::Void AddCaster(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::UInt32 KHLLANBNJDD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ADDCASTER_OFFSET))(this, KECKGDFIALJ, KHLLANBNJDD);
		}

		::System::Void RemoveCaster(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::UInt32 KHLLANBNJDD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_REMOVECASTER_OFFSET))(this, KECKGDFIALJ, KHLLANBNJDD);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void LFBIMCMDHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_LFBIMCMDHLB_OFFSET))(this);
		}

		::System::Void DJECLIKJOID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_DJECLIKJOID_OFFSET))(this);
		}

		::System::Void HDDPAKJBEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_HDDPAKJBEPM_OFFSET))(this);
		}

		::System::Void IFLMMKFJEPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_IFLMMKFJEPI_OFFSET))(this);
		}

		::System::Void OPMLNDJEBDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_OPMLNDJEBDB_OFFSET))(this);
		}

		::System::Void HIFKAFADANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_RABGAME_RABULTISTARTUPVFXCONTROLLER_HIFKAFADANN_OFFSET))(this);
		}
	};
}
