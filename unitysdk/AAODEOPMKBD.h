#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BFCILFAFLGA;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }

#define AAODEOPMKBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D79F0)
#define AAODEOPMKBD_FENDAAEBGPE_OFFSET UNITYSDK_OFFSET(0xB0D80F0)
#define AAODEOPMKBD_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xB0D7D70)
#define AAODEOPMKBD_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xB0D7DC0)
#define AAODEOPMKBD_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xB0D7E40)
#define AAODEOPMKBD_GETRECT_OFFSET UNITYSDK_OFFSET(0xB0D7EC0)
#define AAODEOPMKBD_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xB0D8040)
#define AAODEOPMKBD_GIPHHLDLOIN_OFFSET UNITYSDK_OFFSET(0xB0D8150)
#define AAODEOPMKBD_LLGAFJEJLEA_OFFSET UNITYSDK_OFFSET(0xB0D7F20)
#define AAODEOPMKBD_NOCJEBGFPNK_OFFSET UNITYSDK_OFFSET(0xB0D8060)
#define AAODEOPMKBD_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xB0D8050)

	class AAODEOPMKBD : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::BFCILFAFLGA* NNEKKDLGFMA; // 0xB8
		::RPG::GameCore::RuntimeGroupInfo* _GroupInfo_k__BackingField; // 0xC0
		::UnityEngine::Rect JAKMENOCECF; // 0xC8
		::UnityEngine::Bounds PDCCCBKGHNL; // 0xD8
		::System::Single KGMFNLGJOHO; // 0xF0
		::System::UInt32 LLDCHLHNADA; // 0xF4
		// static const ::System::Object HJDLDHLFOOE; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::BFCILFAFLGA* a3, ::System::Single a4, ::RPG::GameCore::LodTemplate* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::BFCILFAFLGA*, ::System::Single, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + AAODEOPMKBD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GETBOUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GETRECT_OFFSET))(this);
		}

		::System::Boolean LLGAFJEJLEA(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + AAODEOPMKBD_LLGAFJEJLEA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RuntimeGroupInfo* get_GroupInfo()
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GET_GROUPINFO_OFFSET))(this);
		}

		::System::Void set_GroupInfo(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + AAODEOPMKBD_SET_GROUPINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTagContainer* NOCJEBGFPNK()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_NOCJEBGFPNK_OFFSET))(this);
		}

		::System::Int32 FENDAAEBGPE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODEOPMKBD_FENDAAEBGPE_OFFSET))(this);
		}

		::System::Single GIPHHLDLOIN(::System::Int32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AAODEOPMKBD_GIPHHLDLOIN_OFFSET))(this, a1, a2);
		}

	};
