#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::GameCore { class GameEntity; }

#define ACHPKKLGLNI_CCEFPGCAJMF_OFFSET UNITYSDK_OFFSET(0x18290F70)
#define ACHPKKLGLNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x18291860)
#define ACHPKKLGLNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1828FC30)
#define ACHPKKLGLNI_DGKHBLNELLC_OFFSET UNITYSDK_OFFSET(0x18290F20)
#define ACHPKKLGLNI_DJALLPPIHGN_OFFSET UNITYSDK_OFFSET(0x18290240)
#define ACHPKKLGLNI_FBNJJEDMOMP_OFFSET UNITYSDK_OFFSET(0x182915A0)
#define ACHPKKLGLNI_GET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x18290F00)
#define ACHPKKLGLNI_GET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x18290EE0)
#define ACHPKKLGLNI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x18290830)
#define ACHPKKLGLNI_HEIMKKDDGMB_OFFSET UNITYSDK_OFFSET(0x182910D0)
#define ACHPKKLGLNI_HJAANJBEFMI_OFFSET UNITYSDK_OFFSET(0x182916F0)
#define ACHPKKLGLNI_HPNPMAJFPHP_OFFSET UNITYSDK_OFFSET(0x18291740)
#define ACHPKKLGLNI_IGGNFCABANP_OFFSET UNITYSDK_OFFSET(0x18290890)
#define ACHPKKLGLNI_JKBCFMFCPOE_OFFSET UNITYSDK_OFFSET(0x18290AF0)
#define ACHPKKLGLNI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1828FC40)
#define ACHPKKLGLNI_MGJBHBPKLFJ_OFFSET UNITYSDK_OFFSET(0x18290030)
#define ACHPKKLGLNI_MGMBHCKENNC_OFFSET UNITYSDK_OFFSET(0x1828FE00)
#define ACHPKKLGLNI_MKFGIBGKEPA_OFFSET UNITYSDK_OFFSET(0x18291440)
#define ACHPKKLGLNI_OMAOECNNEIJ_OFFSET UNITYSDK_OFFSET(0x1828FCA0)
#define ACHPKKLGLNI_SET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0x18290F10)
#define ACHPKKLGLNI_SET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0x18290EF0)

inline static constexpr unsigned int ACHPKKLGLNI_TypeDefinitionIndex = 58552;

	class ACHPKKLGLNI : public ::System::Object
	{
	public:
		::DEBEAKKOHLN* DBCCOEFFKCM; // 0x10
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::System::Int32 LCHLNGCMGLJ; // 0x20
		::System::Int32 _MiniEmoStecilIndex_k__BackingField; // 0x24
		::System::Boolean BLGCCOBCIOM; // 0x28
		::System::Boolean LDCPBDMLNEB; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 _StencilEye_k__BackingField; // 0x2C
		static ::System::Int32* StaticGet_PCFDIEGOFGD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0xD070);
		}

		static ::System::Int32* StaticGet_BPAGJJKPDNA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0xD074);
		}

		static ::System::Int32* StaticGet_FFGIDCKIIFC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0xD078);
		}

		static ::System::Int32* StaticGet_LIFLKDMGKCG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0xD07C);
		}

		static ::System::Int32* StaticGet_EHOGONEJDKL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0xD080);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACHPKKLGLNI_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Int32 get_StencilEye()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_GET_STENCILEYE_OFFSET))(this);
		}

		::System::Void set_StencilEye(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_SET_STENCILEYE_OFFSET))(this, a1);
		}

		::System::Int32 get_MiniEmoStecilIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_GET_MINIEMOSTECILINDEX_OFFSET))(this);
		}

		::System::Void set_MiniEmoStecilIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_SET_MINIEMOSTECILINDEX_OFFSET))(this, a1);
		}

		::System::Boolean DGKHBLNELLC(::RPG::GameCore::EntityType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_DGKHBLNELLC_OFFSET))(this, a1);
		}

		::System::Void CCEFPGCAJMF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_CCEFPGCAJMF_OFFSET))(this, a1);
		}

		::System::Void MGJBHBPKLFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_MGJBHBPKLFJ_OFFSET))(this);
		}

		::System::Void IGGNFCABANP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_IGGNFCABANP_OFFSET))(this, a1);
		}

		::System::Void HJAANJBEFMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_HJAANJBEFMI_OFFSET))(this);
		}

		::System::Void HPNPMAJFPHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_HPNPMAJFPHP_OFFSET))(this);
		}

		::System::Void OMAOECNNEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_OMAOECNNEIJ_OFFSET))(this);
		}

		::System::Void MGMBHCKENNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_MGMBHCKENNC_OFFSET))(this);
		}

		::System::Void FBNJJEDMOMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_FBNJJEDMOMP_OFFSET))(this, a1);
		}

		::System::Void HEIMKKDDGMB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_HEIMKKDDGMB_OFFSET))(this, a1);
		}

		::System::Void MKFGIBGKEPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_MKFGIBGKEPA_OFFSET))(this);
		}

		::System::Void DJALLPPIHGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_DJALLPPIHGN_OFFSET))(this);
		}

		::System::Void JKBCFMFCPOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHPKKLGLNI_JKBCFMFCPOE_OFFSET))(this);
		}

	};
