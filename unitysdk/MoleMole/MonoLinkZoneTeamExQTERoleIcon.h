#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/GKJHGODMNHE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/GKAMNEHCNLP.h"

namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_BLJNFECIBLH_OFFSET UNITYSDK_OFFSET(0x12B71600)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12B71BC0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_EALHIINGLFG_OFFSET UNITYSDK_OFFSET(0x12B714A0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_GBMOGIHOEAL_OFFSET UNITYSDK_OFFSET(0x12B72070)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x12B71B60)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_LMECAGKHDGE_OFFSET UNITYSDK_OFFSET(0x12B71C70)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x12B71000)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B71150)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B70F40)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B71460)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET UNITYSDK_OFFSET(0x12B71390)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex = 44166;

	class MonoLinkZoneTeamExQTERoleIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CFCPGMEEJDI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex)->GetStaticField(0x122E0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* RoleIconPsRenders; // 0x18
		::GKJHGODMNHE TeamExQTEType; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* HCCPCHAFHEH; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* HIKDOHBGHFL; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void EALHIINGLFG(::System::Collections::Generic::List_1<::GKAMNEHCNLP>* KKGGMCEOELP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GKAMNEHCNLP>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_EALHIINGLFG_OFFSET))(this, KKGGMCEOELP);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void BLJNFECIBLH(::UnityEngine::Renderer* LAEMJKCIKDI, ::System::String* FHPEOMCOMNN, ::System::Int32 PFLKNLADAOI, ::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_BLJNFECIBLH_OFFSET))(this, LAEMJKCIKDI, FHPEOMCOMNN, PFLKNLADAOI, PKMFBJMJCOO, CJPLACFCFBP);
		}

		::System::Void GBMOGIHOEAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_GBMOGIHOEAL_OFFSET))(this);
		}

		::System::Void CNHBDOMKKDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_CNHBDOMKKDE_OFFSET))(this);
		}

		::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo* LMECAGKHDGE(::System::Int32 PKMFBJMJCOO, ::System::Int32 CJPLACFCFBP, ::System::Int32 ECAFPALMHLI)
		{
			return ((::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_LMECAGKHDGE_OFFSET))(this, PKMFBJMJCOO, CJPLACFCFBP, ECAFPALMHLI);
		}
	};
}
