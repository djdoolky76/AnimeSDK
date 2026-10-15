#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPropType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JONAOEKOCEI_CAEJNKICJLN;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JONAOEKOCEI_APOPHIOCKJD_OFFSET UNITYSDK_OFFSET(0xB2AA590)
#define JONAOEKOCEI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2AC630)
#define JONAOEKOCEI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A99F0)
#define JONAOEKOCEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2A9BC0)
#define JONAOEKOCEI_EBEJJPEHLKG_OFFSET UNITYSDK_OFFSET(0xB2AAD20)
#define JONAOEKOCEI_FDPDCNKMBBP_OFFSET UNITYSDK_OFFSET(0xB2AA320)
#define JONAOEKOCEI_IGEIDPNEPGL_OFFSET UNITYSDK_OFFSET(0xB2AA370)
#define JONAOEKOCEI_KDCFNLFAKKN_OFFSET UNITYSDK_OFFSET(0xB2AA750)
#define JONAOEKOCEI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB2A9E30)
#define JONAOEKOCEI_KNMOGIELNHH_OFFSET UNITYSDK_OFFSET(0xB2AAB50)
#define JONAOEKOCEI_LOPICLODLIG_OFFSET UNITYSDK_OFFSET(0xB2AA6F0)
#define JONAOEKOCEI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB2A9DD0)
#define JONAOEKOCEI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB2ABA00)

inline static constexpr unsigned int JONAOEKOCEI_TypeDefinitionIndex = 60181;

	class JONAOEKOCEI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* CDGPBICDJEO; // 0x10
		::RPG::GameCore::GameEntity* KDCHKNNCNLC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* BKLHLKGDFNK; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* BAIENHLAKDL; // 0x28
		::UnityEngine::GameObject* PHLIBDMIHHP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* HGCNLFIMDKL; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* KFJCCHGKIDB; // 0x40
		::JONAOEKOCEI_CAEJNKICJLN* GBBPKOEKFKP; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* GECAOGJCCBE; // 0x50
		::System::Single LJEOPKOBAGF; // 0x58
		::System::Int32 PJHBEBBPKDG; // 0x5C
		::UnityEngine::Vector3 AHAJBOAPBMC; // 0x60
		::System::Nullable_1<::UnityEngine::Vector3> PAIBLILBHKH; // 0x6C
		static ::System::String** StaticGet_ICEBBOPPAOH()
		{
			return (::System::String**)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x257E0);
		}

		static ::System::String** StaticGet_CJNOIBEOAFA()
		{
			return (::System::String**)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x257E8);
		}

		static ::System::String** StaticGet_JMPCCDNCODM()
		{
			return (::System::String**)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x257F0);
		}

		static ::System::String** StaticGet_CEODFDGHPPO()
		{
			return (::System::String**)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x257F8);
		}

		static ::System::Single* StaticGet_FFJKBNAHAFA()
		{
			return (::System::Single*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x8240);
		}

		static ::System::Int32* StaticGet_JDILJDFJBMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x8244);
		}

		static ::System::Int32* StaticGet_IKGNGKCPPLJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x8248);
		}

		static ::System::Int32* StaticGet_BBCJKGPEPAF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x824C);
		}

		static ::System::Int32* StaticGet_MMEKAEBKHGC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x8250);
		}

		static ::System::Int32* StaticGet_MLEDIEKPADF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JONAOEKOCEI")->GetStaticField(0x8254);
		}

		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JONAOEKOCEI_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JONAOEKOCEI_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JONAOEKOCEI_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FDPDCNKMBBP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JONAOEKOCEI_FDPDCNKMBBP_OFFSET))(this, a1);
		}

		::System::Void IGEIDPNEPGL(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::RPG::Client::Prop::MusicRhythmPropType a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::RPG::Client::Prop::MusicRhythmPropType, ::System::UInt32))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IGEIDPNEPGL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void APOPHIOCKJD(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JONAOEKOCEI_APOPHIOCKJD_OFFSET))(this, a1, a2);
		}

		::System::Void LOPICLODLIG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JONAOEKOCEI_LOPICLODLIG_OFFSET))(this, a1);
		}

		::System::Void KDCFNLFAKKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JONAOEKOCEI_KDCFNLFAKKN_OFFSET))(this, a1);
		}

		::System::Void KNMOGIELNHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JONAOEKOCEI_KNMOGIELNHH_OFFSET))(this, a1);
		}

		::System::Void EBEJJPEHLKG(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JONAOEKOCEI_EBEJJPEHLKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JONAOEKOCEI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
