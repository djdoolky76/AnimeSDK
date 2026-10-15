#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoView.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AIIBIJAKKKH;
class EMJIDLCDFMI;
class FDPALAEIHPB;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xE35A800)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_DLMDLOIBMCH_OFFSET UNITYSDK_OFFSET(0xE35B090)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_GETCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0xE35A920)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xE35A9C0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE35ACF0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PLAYUI3DANIMATION_OFFSET UNITYSDK_OFFSET(0xE35AE40)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PMMCBJLCDBI_OFFSET UNITYSDK_OFFSET(0xE35B050)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0xE35ABF0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xE35AB90)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xE35A8A0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE35ADB0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xE35A810)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGameView_TypeDefinitionIndex = 75787;

	class MonoUI3DGameView : public ::RPG::Client::LittleGame::BaseMonoView
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::AIIBIJAKKKH* HINDODOFCLK; // 0x20
		::KHPOKIKCOFO* KAKEIDJDNHJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLocalRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETLOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_GETCENTERPOSITION_OFFSET))(this);
		}

		::System::Void InitializeView(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::KHPOKIKCOFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ReleaseView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_RELEASEVIEW_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetNodeActive(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_SETNODEACTIVE_OFFSET))(this, a1, a2);
		}

		::System::Void PlayUI3DAnimation(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PLAYUI3DANIMATION_OFFSET))(this, a1, a2);
		}

		::System::Void PMMCBJLCDBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_PMMCBJLCDBI_OFFSET))(this);
		}

		::System::Void DLMDLOIBMCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEVIEW_DLMDLOIBMCH_OFFSET))(this);
		}

	};
}
