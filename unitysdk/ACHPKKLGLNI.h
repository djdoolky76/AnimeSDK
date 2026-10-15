#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
class DEBEAKKOHLN;
namespace RPG::GameCore { class GameEntity; }

#define ACHPKKLGLNI_CCEFPGCAJMF_OFFSET UNITYSDK_OFFSET(0xB121CE0)
#define ACHPKKLGLNI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1224B0)
#define ACHPKKLGLNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1209B0)
#define ACHPKKLGLNI_DGKHBLNELLC_OFFSET UNITYSDK_OFFSET(0xB121C90)
#define ACHPKKLGLNI_DJALLPPIHGN_OFFSET UNITYSDK_OFFSET(0xB120FC0)
#define ACHPKKLGLNI_FBNJJEDMOMP_OFFSET UNITYSDK_OFFSET(0xB122310)
#define ACHPKKLGLNI_GET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0xB121C70)
#define ACHPKKLGLNI_GET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0xB121C50)
#define ACHPKKLGLNI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB1215B0)
#define ACHPKKLGLNI_HEIMKKDDGMB_OFFSET UNITYSDK_OFFSET(0xB121E40)
#define ACHPKKLGLNI_HJAANJBEFMI_OFFSET UNITYSDK_OFFSET(0xB122460)
#define ACHPKKLGLNI_IGGNFCABANP_OFFSET UNITYSDK_OFFSET(0xB121610)
#define ACHPKKLGLNI_JKBCFMFCPOE_OFFSET UNITYSDK_OFFSET(0xB121860)
#define ACHPKKLGLNI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB1209C0)
#define ACHPKKLGLNI_MGJBHBPKLFJ_OFFSET UNITYSDK_OFFSET(0xB120DB0)
#define ACHPKKLGLNI_MGMBHCKENNC_OFFSET UNITYSDK_OFFSET(0xB120B80)
#define ACHPKKLGLNI_MKFGIBGKEPA_OFFSET UNITYSDK_OFFSET(0xB1221B0)
#define ACHPKKLGLNI_OMAOECNNEIJ_OFFSET UNITYSDK_OFFSET(0xB120A20)
#define ACHPKKLGLNI_SET_MINIEMOSTECILINDEX_OFFSET UNITYSDK_OFFSET(0xB121C80)
#define ACHPKKLGLNI_SET_STENCILEYE_OFFSET UNITYSDK_OFFSET(0xB121C60)

inline static constexpr unsigned int ACHPKKLGLNI_TypeDefinitionIndex = 57324;

	class ACHPKKLGLNI : public ::System::Object
	{
	public:
		::DEBEAKKOHLN* DBCCOEFFKCM; // 0x10
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::System::Int32 LCHLNGCMGLJ; // 0x20
		::System::Boolean LDCPBDMLNEB; // 0x24
		::System::Boolean BLGCCOBCIOM; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int32 _MiniEmoStecilIndex_k__BackingField; // 0x28
		::System::Int32 _StencilEye_k__BackingField; // 0x2C
		static ::System::Int32* StaticGet_EHOGONEJDKL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0x11260);
		}

		static ::System::Int32* StaticGet_BPAGJJKPDNA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0x11264);
		}

		static ::System::Int32* StaticGet_FFGIDCKIIFC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0x11268);
		}

		static ::System::Int32* StaticGet_LIFLKDMGKCG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0x1126C);
		}

		static ::System::Int32* StaticGet_PCFDIEGOFGD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACHPKKLGLNI")->GetStaticField(0x11270);
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
