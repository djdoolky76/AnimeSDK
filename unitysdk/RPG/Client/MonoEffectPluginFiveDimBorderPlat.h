#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
class HIOEAKHGILF;
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_CCTOR_OFFSET UNITYSDK_OFFSET(0xD7F3820)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_CTOR_OFFSET UNITYSDK_OFFSET(0xD7F37E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F2F00)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_MCFPAIEFBJP_OFFSET UNITYSDK_OFFSET(0xD7F2FF0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7F2E60)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET UNITYSDK_OFFSET(0xD7F3080)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD7F3500)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_TICK_OFFSET UNITYSDK_OFFSET(0xD7F32E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimBorderPlat_TypeDefinitionIndex = 70022;

	class MonoEffectPluginFiveDimBorderPlat : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Border; // 0x28
		::System::Single BaseDensity; // 0x30
		::System::Byte _padding0[0x4];
		::HIOEAKHGILF* KAKEIDJDNHJ; // 0x38
		::RPG::GameCore::FiveDimMoveBakedConfig* EKAALAGLBPC; // 0x40
		::System::Single PPBPOMMNICA; // 0x48
		::System::Single FGODFPJCNHG; // 0x4C
		::System::Single PDLKDJHEJIG; // 0x50
		::System::Byte _padding1[0x4];
		::DEBEAKKOHLN* DBCCOEFFKCM; // 0x58
		::System::Boolean DKMGKDEMNIL; // 0x60
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 AANPAEBECKM; // 0x64
		::System::Boolean KOKMFJFODLK; // 0x70
		::System::Byte _padding3[0x3];
		::System::Int32 BGCMNPDHGNB; // 0x74
		::System::Int32 AHMNBDIMOCN; // 0x78
		static ::System::String** StaticGet_JBGHEDIGMKN()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MonoEffectPluginFiveDimBorderPlat")->GetStaticField(0x65730);
		}

		static ::System::Int32* StaticGet_MNHCKOJILND()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoEffectPluginFiveDimBorderPlat")->GetStaticField(0x14C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_CCTOR_OFFSET))();
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void SetEntity(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_TICK_OFFSET))(this, a1);
		}

		::System::Void MCFPAIEFBJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_MCFPAIEFBJP_OFFSET))(this);
		}

		::System::Void SetShowDistanceAndUnitLength(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMBORDERPLAT_SETSHOWDISTANCEANDUNITLENGTH_OFFSET))(this, a1, a2, a3);
		}

	};
}
