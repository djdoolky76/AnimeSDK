#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DGPKLNNFELK;
class KDEFLDJHDEB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define GDKHHPPIFBC_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x15998270)
#define GDKHHPPIFBC_CTOR_OFFSET UNITYSDK_OFFSET(0x159973E0)
#define GDKHHPPIFBC_DIIKGFHGING_OFFSET UNITYSDK_OFFSET(0x15998860)
#define GDKHHPPIFBC_FKIOELDFPPI_OFFSET UNITYSDK_OFFSET(0x15998980)
#define GDKHHPPIFBC_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x15997ED0)
#define GDKHHPPIFBC_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x15998320)
#define GDKHHPPIFBC_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x15997D70)
#define GDKHHPPIFBC_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x15997DF0)
#define GDKHHPPIFBC_GETRECT_OFFSET UNITYSDK_OFFSET(0x15997E70)
#define GDKHHPPIFBC_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0x15998580)
#define GDKHHPPIFBC_GFNMMBLENNI_OFFSET UNITYSDK_OFFSET(0x159987E0)
#define GDKHHPPIFBC_GHHJKCDMOCP_OFFSET UNITYSDK_OFFSET(0x159985A0)
#define GDKHHPPIFBC_HKNLBMCIKNO_OFFSET UNITYSDK_OFFSET(0x15998740)
#define GDKHHPPIFBC_JODEACPMCEC_OFFSET UNITYSDK_OFFSET(0x15998900)
#define GDKHHPPIFBC_LKNDCKLJHJL_OFFSET UNITYSDK_OFFSET(0x159986C0)
#define GDKHHPPIFBC_OEDOMCKJPKJ_OFFSET UNITYSDK_OFFSET(0x15998660)
#define GDKHHPPIFBC_OIKAOICJCIN_OFFSET UNITYSDK_OFFSET(0x159982D0)
#define GDKHHPPIFBC_PIHOIAIAOPG_OFFSET UNITYSDK_OFFSET(0x15997360)
#define GDKHHPPIFBC_SET_ALIAS_OFFSET UNITYSDK_OFFSET(0x15998590)

inline static constexpr unsigned int GDKHHPPIFBC_TypeDefinitionIndex = 73894;

	class GDKHHPPIFBC : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::System::String* _Alias_k__BackingField; // 0xB8
		::KDEFLDJHDEB* IGMLHEBMBGC; // 0xC0
		::UnityEngine::Rect CJHPOKFPFIO; // 0xC8
		::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::DGPKLNNFELK* a3, ::KDEFLDJHDEB* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::DGPKLNNFELK*, ::KDEFLDJHDEB*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 PIHOIAIAOPG(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_PIHOIAIAOPG_OFFSET))(a1, a2);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GETBOUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GETRECT_OFFSET))(this);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::System::Boolean AliasMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_ALIASMARK_OFFSET))(this);
		}

		::System::Void OIKAOICJCIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_OIKAOICJCIN_OFFSET))(this, a1);
		}

		::System::String* GetAssetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GETASSETPATH_OFFSET))(this, a1);
		}

		::System::String* get_Alias()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GET_ALIAS_OFFSET))(this);
		}

		::System::Void set_Alias(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_SET_ALIAS_OFFSET))(this, a1);
		}

		::System::Boolean GHHJKCDMOCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GHHJKCDMOCP_OFFSET))(this);
		}

		static ::System::Boolean OEDOMCKJPKJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_OEDOMCKJPKJ_OFFSET))(a1);
		}

		::System::Boolean LKNDCKLJHJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_LKNDCKLJHJL_OFFSET))(this);
		}

		::System::Void HKNLBMCIKNO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_HKNLBMCIKNO_OFFSET))(this, a1);
		}

		::System::Boolean GFNMMBLENNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_GFNMMBLENNI_OFFSET))(this);
		}

		::System::Void DIIKGFHGING(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_DIIKGFHGING_OFFSET))(this, a1);
		}

		::System::Boolean JODEACPMCEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_JODEACPMCEC_OFFSET))(this);
		}

		::System::Void FKIOELDFPPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDKHHPPIFBC_FKIOELDFPPI_OFFSET))(this, a1);
		}

	};
