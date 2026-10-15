#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixMatrix3x2.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_FIXVEC2_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0x1DD03870)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DD03EE0)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_2_OFFSET UNITYSDK_OFFSET(0x1DD040A0)
#define RPG_GAMECORE_FIXVEC2_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD03E70)
#define RPG_GAMECORE_FIXVEC2_BCGLIELBIAP_OFFSET UNITYSDK_OFFSET(0x3C41A50)
#define RPG_GAMECORE_FIXVEC2_BFNHBKNCGJF_OFFSET UNITYSDK_OFFSET(0x1DD03770)
#define RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_1_OFFSET UNITYSDK_OFFSET(0x1DD04100)
#define RPG_GAMECORE_FIXVEC2_BIIMDAFMJNF_OFFSET UNITYSDK_OFFSET(0x1DD03F40)
#define RPG_GAMECORE_FIXVEC2_BJOCBPFKJDP_OFFSET UNITYSDK_OFFSET(0x1DD03000)
#define RPG_GAMECORE_FIXVEC2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD04260)
#define RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_1_OFFSET UNITYSDK_OFFSET(0x1DD03BA0)
#define RPG_GAMECORE_FIXVEC2_CJIGHOGJGHJ_OFFSET UNITYSDK_OFFSET(0x1DD03960)
#define RPG_GAMECORE_FIXVEC2_CONJAMJKHBI_OFFSET UNITYSDK_OFFSET(0x1DD02BF0)
#define RPG_GAMECORE_FIXVEC2_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define RPG_GAMECORE_FIXVEC2_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x10480)
#define RPG_GAMECORE_FIXVEC2_DICDJJOJKGF_OFFSET UNITYSDK_OFFSET(0x1DD037D0)
#define RPG_GAMECORE_FIXVEC2_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DD03D40)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x1DD03B20)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_2_OFFSET UNITYSDK_OFFSET(0x1DD03B60)
#define RPG_GAMECORE_FIXVEC2_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1DD03910)
#define RPG_GAMECORE_FIXVEC2_EFNAJMADAHM_OFFSET UNITYSDK_OFFSET(0x1DD03210)
#define RPG_GAMECORE_FIXVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C41520)
#define RPG_GAMECORE_FIXVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C41DF0)
#define RPG_GAMECORE_FIXVEC2_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DD03BE0)
#define RPG_GAMECORE_FIXVEC2_FGMJMGDIEGO_OFFSET UNITYSDK_OFFSET(0x1DD02680)
#define RPG_GAMECORE_FIXVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C41D70)
#define RPG_GAMECORE_FIXVEC2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x1DD03EB0)
#define RPG_GAMECORE_FIXVEC2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C41910)
#define RPG_GAMECORE_FIXVEC2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1DD03EC0)
#define RPG_GAMECORE_FIXVEC2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C41F40)
#define RPG_GAMECORE_FIXVEC2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3C41B60)
#define RPG_GAMECORE_FIXVEC2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x1DD03E90)
#define RPG_GAMECORE_FIXVEC2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1DD03ED0)
#define RPG_GAMECORE_FIXVEC2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3C41F80)
#define RPG_GAMECORE_FIXVEC2_GET_UP_OFFSET UNITYSDK_OFFSET(0x1DD03EA0)
#define RPG_GAMECORE_FIXVEC2_GET_X0Y_OFFSET UNITYSDK_OFFSET(0x3C418F0)
#define RPG_GAMECORE_FIXVEC2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1DD03E80)
#define RPG_GAMECORE_FIXVEC2_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0x1DD038C0)
#define RPG_GAMECORE_FIXVEC2_GIBCJEJNJME_OFFSET UNITYSDK_OFFSET(0x1DD02DD0)
#define RPG_GAMECORE_FIXVEC2_GMBBFMMLPND_OFFSET UNITYSDK_OFFSET(0x1DD03060)
#define RPG_GAMECORE_FIXVEC2_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1DD01BB0)
#define RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_1_OFFSET UNITYSDK_OFFSET(0x3C41FC0)
#define RPG_GAMECORE_FIXVEC2_HOMEIJOHICM_OFFSET UNITYSDK_OFFSET(0x1DD03550)
#define RPG_GAMECORE_FIXVEC2_JODKCCOIGIG_OFFSET UNITYSDK_OFFSET(0x1DD01D50)
#define RPG_GAMECORE_FIXVEC2_JOLINMBCBOI_OFFSET UNITYSDK_OFFSET(0x1DD03700)
#define RPG_GAMECORE_FIXVEC2_KKNANAIFIOM_OFFSET UNITYSDK_OFFSET(0x1DD039B0)
#define RPG_GAMECORE_FIXVEC2_LCDGJHGKEGG_OFFSET UNITYSDK_OFFSET(0x3C42050)
#define RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_1_OFFSET UNITYSDK_OFFSET(0x3C41F80)
#define RPG_GAMECORE_FIXVEC2_LOCJDHDDKCE_OFFSET UNITYSDK_OFFSET(0x1DD03190)
#define RPG_GAMECORE_FIXVEC2_MBFCNBGLODP_OFFSET UNITYSDK_OFFSET(0x1DD02720)
#define RPG_GAMECORE_FIXVEC2_MILHBHLECKI_OFFSET UNITYSDK_OFFSET(0x1DD01DD0)
#define RPG_GAMECORE_FIXVEC2_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1DD02800)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_1_OFFSET UNITYSDK_OFFSET(0x1DD02880)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_2_OFFSET UNITYSDK_OFFSET(0x1DD02960)
#define RPG_GAMECORE_FIXVEC2_NBGGOIFJODO_OFFSET UNITYSDK_OFFSET(0x1DD02840)
#define RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_1_OFFSET UNITYSDK_OFFSET(0x3C41A10)
#define RPG_GAMECORE_FIXVEC2_NEMDKBKDFDN_OFFSET UNITYSDK_OFFSET(0x1DD01FB0)
#define RPG_GAMECORE_FIXVEC2_NKAACMGNNPK_OFFSET UNITYSDK_OFFSET(0x1DD033B0)
#define RPG_GAMECORE_FIXVEC2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C41990)
#define RPG_GAMECORE_FIXVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C41C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixVec2_TypeDefinitionIndex = 9944;

	struct alignas(4) FixVec2
	{
		::RPG::GameCore::FixPoint x; // 0x10
		::RPG::GameCore::FixPoint y; // 0x18
		static ::RPG::GameCore::FixVec2* StaticGet_upVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x5950);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_downVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x5960);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_leftVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x5970);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_rightVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x5980);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_zeroVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x5990);
		}

		static ::RPG::GameCore::FixVec2* StaticGet_oneVector()
		{
			return (::RPG::GameCore::FixVec2*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x59A0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonNormalSqrt()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixVec2")->GetStaticField(0x59B0);
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
