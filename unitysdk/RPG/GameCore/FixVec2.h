#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixMatrix3x2.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC2_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1DCD6040)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DCD66B0)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_2_OFFSET UNITYSDK_OFFSET(0x1DCD6870)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DCD6640)
#define RPG_GAMECORE_FIXVEC2_BCGLIELBIAP_OFFSET UNITYSDK_OFFSET(0x3C42180)
#define RPG_GAMECORE_FIXVEC2_BFNHBKNCGJF_OFFSET UNITYSDK_OFFSET(0x1DCD5F40)
#define RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_1_OFFSET UNITYSDK_OFFSET(0x1DCD68D0)
#define RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_OFFSET UNITYSDK_OFFSET(0x1DCD6710)
#define RPG_GAMECORE_FIXVEC2_BJOCBPFKJDP_OFFSET UNITYSDK_OFFSET(0x1DCD57D0)
#define RPG_GAMECORE_FIXVEC2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD6A30)
#define RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_1_OFFSET UNITYSDK_OFFSET(0x1DCD6370)
#define RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x1DCD6130)
#define RPG_GAMECORE_FIXVEC2_CONJAMJKHBI_OFFSET UNITYSDK_OFFSET(0x1DCD53C0)
#define RPG_GAMECORE_FIXVEC2_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)
#define RPG_GAMECORE_FIXVEC2_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x10400)
#define RPG_GAMECORE_FIXVEC2_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1DCD5FA0)
#define RPG_GAMECORE_FIXVEC2_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DCD6510)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x1DCD62F0)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_2_OFFSET UNITYSDK_OFFSET(0x1DCD6330)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1DCD60E0)
#define RPG_GAMECORE_FIXVEC2_EFNAJMADAHM_OFFSET UNITYSDK_OFFSET(0x1DCD59E0)
#define RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C41C50)
#define RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C42520)
#define RPG_GAMECORE_FIXVEC2_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DCD63B0)
#define RPG_GAMECORE_FIXVEC2_FGMJMGDIEGO_OFFSET UNITYSDK_OFFSET(0x1DCD4E50)
#define RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C424A0)
#define RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DCD6680)
#define RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C42040)
#define RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DCD6690)
#define RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C42670)
#define RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3C42290)
#define RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1DCD6660)
#define RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DCD66A0)
#define RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C426B0)
#define RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DCD6670)
#define RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET UNITYSDK_OFFSET(0x3C42020)
#define RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DCD6650)
#define RPG_GAMECORE_FIXVEC2_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1DCD6090)
#define RPG_GAMECORE_FIXVEC2_GIBCJEJNJME_OFFSET UNITYSDK_OFFSET(0x1DCD55A0)
#define RPG_GAMECORE_FIXVEC2_GMBBFMMLPND_OFFSET UNITYSDK_OFFSET(0x1DCD5830)
#define RPG_GAMECORE_FIXVEC2_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1DCD4380)
#define RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_1_OFFSET UNITYSDK_OFFSET(0x3C426F0)
#define RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_OFFSET UNITYSDK_OFFSET(0x1DCD5D20)
#define RPG_GAMECORE_FIXVEC2_JODKCCOIGIG_OFFSET UNITYSDK_OFFSET(0x1DCD4520)
#define RPG_GAMECORE_FIXVEC2_JOLINMBCBOI_OFFSET UNITYSDK_OFFSET(0x1DCD5ED0)
#define RPG_GAMECORE_FIXVEC2_KKNANAIFIOM_OFFSET UNITYSDK_OFFSET(0x1DCD6180)
#define RPG_GAMECORE_FIXVEC2_LCDGJHGKEGG_OFFSET UNITYSDK_OFFSET(0x3C42780)
#define RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_1_OFFSET UNITYSDK_OFFSET(0x3C426B0)
#define RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_OFFSET UNITYSDK_OFFSET(0x1DCD5960)
#define RPG_GAMECORE_FIXVEC2_MBFCNBGLODP_OFFSET UNITYSDK_OFFSET(0x1DCD4EF0)
#define RPG_GAMECORE_FIXVEC2_MILHBHLECKI_OFFSET UNITYSDK_OFFSET(0x1DCD45A0)
#define RPG_GAMECORE_FIXVEC2_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1DCD4FD0)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_1_OFFSET UNITYSDK_OFFSET(0x1DCD5050)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_2_OFFSET UNITYSDK_OFFSET(0x1DCD5130)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_OFFSET UNITYSDK_OFFSET(0x1DCD5010)
#define RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_1_OFFSET UNITYSDK_OFFSET(0x3C42140)
#define RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_OFFSET UNITYSDK_OFFSET(0x1DCD4780)
#define RPG_GAMECORE_FIXVEC2_NKAACMGNNPK_OFFSET UNITYSDK_OFFSET(0x1DCD5B80)
#define RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C420C0)
#define RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C423A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec2_TypeDefinitionIndex = 9944;

	struct alignas(4) FixVec2
	{
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18
		static ::RPG::GameCore::FixVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58A0);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58B0);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58C0);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58D0);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58E0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58F0);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x58F8);
		}

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CCTOR_OFFSET))();
		}

		/*
		::RPG::GameCore::FixVec3 get_x0y()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET))(this);
		}
		*/

		::RPG::GameCore::FixPoint get_Item(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void DADCFBHGLOH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		/*
		static ::RPG::GameCore::FixVec2 HAIHHFOPBLN(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_HAIHHFOPBLN_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 JODKCCOIGIG(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_JODKCCOIGIG_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 MILHBHLECKI(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MILHBHLECKI_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 NEMDKBKDFDN(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Void NEMDKBKDFDN_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_1_OFFSET))(this, a1);
		}
		*/

		::System::Void BCGLIELBIAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BCGLIELBIAP_OFFSET))(this);
		}

		/*
		::RPG::GameCore::FixVec2 get_normalized()
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 FGMJMGDIEGO(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_FGMJMGDIEGO_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 MBFCNBGLODP(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MBFCNBGLODP_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint MLKPOHLOJKI(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_MLKPOHLOJKI_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint NBGGOIFJODO(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 NBGGOIFJODO_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 NBGGOIFJODO_2(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_2_OFFSET))(a1, a2);
		}
		*/

		::RPG::GameCore::FixPoint get_magnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_sqrMagnitude()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixPoint CONJAMJKHBI(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CONJAMJKHBI_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint GIBCJEJNJME(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GIBCJEJNJME_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint BJOCBPFKJDP(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BJOCBPFKJDP_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 GMBBFMMLPND(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GMBBFMMLPND_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint LOCJDHDDKCE(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::FixPoint LOCJDHDDKCE_1()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_1_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixVec2 EFNAJMADAHM(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EFNAJMADAHM_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 NKAACMGNNPK(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_NKAACMGNNPK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 HOMEIJOHICM(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_OFFSET))(a1, a2);
		}
		*/

		/*
		::RPG::GameCore::FixVec2 HOMEIJOHICM_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_1_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::GameCore::FixVec2 LCDGJHGKEGG(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::PVOID, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_LCDGJHGKEGG_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 JOLINMBCBOI(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_JOLINMBCBOI_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 BFNHBKNCGJF(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BFNHBKNCGJF_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 DICDJJOJKGF(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixMatrix3x2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixMatrix3x2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_DICDJJOJKGF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 ALJJDGONFDD(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 GIAOOPPHODF(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 EBLLCHBCJGG(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 CJIGHOGJGHJ(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 KKNANAIFIOM(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_KKNANAIFIOM_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 EBLLCHBCJGG_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 EBLLCHBCJGG_2(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 CJIGHOGJGHJ_1(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 BBNJCKPKPDN(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_zero()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_one()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_up()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_down()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_left()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET))();
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 get_right()
		{
			return ((::RPG::GameCore::FixVec2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET))();
		}
		*/

		/*
		static ::RPG::MVector2 BBNJCKPKPDN_1(::RPG::GameCore::FixVec2 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 BIIMDAFMJNF(::RPG::MVector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 BBNJCKPKPDN_2(::RPG::GameCore::FixVec2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_2_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixVec2 BIIMDAFMJNF_1(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_1_OFFSET))(a1);
		}
		*/

	};
}
