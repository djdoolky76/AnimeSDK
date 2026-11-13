#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDKHHPPIFBC.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
class KDEFLDJHDEB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LGFHIIOJKFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCA19F0)
#define LGFHIIOJKFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA1260)
#define LGFHIIOJKFN_DIHAAPDEIDA_OFFSET UNITYSDK_OFFSET(0x1BCA1910)
#define LGFHIIOJKFN_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x1BCA1680)
#define LGFHIIOJKFN_EAHKNDDKILF_OFFSET UNITYSDK_OFFSET(0x1BCA1810)
#define LGFHIIOJKFN_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x1BCA1480)
#define LGFHIIOJKFN_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x1BCA1330)
#define LGFHIIOJKFN_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x1BCA13A0)
#define LGFHIIOJKFN_GETRECT_OFFSET UNITYSDK_OFFSET(0x1BCA1420)
#define LGFHIIOJKFN_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1BCA19D0)
#define LGFHIIOJKFN_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0x1BCA15A0)
#define LGFHIIOJKFN_JBBPGEJLGHC_OFFSET UNITYSDK_OFFSET(0x1BCA1530)
#define LGFHIIOJKFN_LLGAFJEJLEA_OFFSET UNITYSDK_OFFSET(0x1BCA18A0)
#define LGFHIIOJKFN_NGEMCJIGKAA_OFFSET UNITYSDK_OFFSET(0x1BCA1970)
#define LGFHIIOJKFN_POOAEGHOGPH_OFFSET UNITYSDK_OFFSET(0x1BCA17B0)
#define LGFHIIOJKFN_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0x1BCA19E0)

inline static constexpr unsigned int LGFHIIOJKFN_TypeDefinitionIndex = 75980;

	class LGFHIIOJKFN : public ::GDKHHPPIFBC
	{
	public:
		::System::Single GFODIIKONLG; // 0xD8
		::System::Boolean _TransformDirty_k__BackingField; // 0xDC
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 DIKOCDCMDON; // 0xE0
		::UnityEngine::Vector3 LKBCLLCFEAL; // 0xEC
		::UnityEngine::Rect MCCMJGBJBKD; // 0xF8
		static ::RPG::GameCore::BlockNodeConfig** StaticGet_IAHPNMJMPEJ()
		{
			return (::RPG::GameCore::BlockNodeConfig**)UnitySDK::FromName("", "LGFHIIOJKFN")->GetStaticField(0x62950);
		}

		::System::Void _ctor(::GEEOPFIMJEM a1, ::DGPKLNNFELK* a2, ::KDEFLDJHDEB* a3, ::System::String* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5)
		{
			return ((::System::Void(*)(::PVOID, ::GEEOPFIMJEM, ::DGPKLNNFELK*, ::KDEFLDJHDEB*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFHIIOJKFN_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_GETBOUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_GETRECT_OFFSET))(this);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::System::Void JBBPGEJLGHC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_JBBPGEJLGHC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_HHHBOFNGHCK_OFFSET))(this, a1);
		}

		::System::Single DNFGFHMNDEF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_DNFGFHMNDEF_OFFSET))(this, a1);
		}

		::System::Void POOAEGHOGPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_POOAEGHOGPH_OFFSET))(this, a1);
		}

		::System::Boolean EAHKNDDKILF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_EAHKNDDKILF_OFFSET))(this, a1, a2);
		}

		::System::Boolean LLGAFJEJLEA(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_LLGAFJEJLEA_OFFSET))(this, a1);
		}

		::UnityEngine::Rect DIHAAPDEIDA()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_DIHAAPDEIDA_OFFSET))(this);
		}

		::System::Void NGEMCJIGKAA(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_NGEMCJIGKAA_OFFSET))(this, a1);
		}

		::System::Boolean get_TransformDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_GET_TRANSFORMDIRTY_OFFSET))(this);
		}

		::System::Void set_TransformDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGFHIIOJKFN_SET_TRANSFORMDIRTY_OFFSET))(this, a1);
		}

	};
