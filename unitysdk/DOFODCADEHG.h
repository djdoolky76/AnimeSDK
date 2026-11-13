#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DOFODCADEHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x191A5FC0)
#define DOFODCADEHG_CIPPMEDPIGP_OFFSET UNITYSDK_OFFSET(0x191A5570)
#define DOFODCADEHG_CTOR_OFFSET UNITYSDK_OFFSET(0x191A4E90)
#define DOFODCADEHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191A5350)
#define DOFODCADEHG_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0x191A5B80)
#define DOFODCADEHG_GHPAHMKMBKK_OFFSET UNITYSDK_OFFSET(0x191A53A0)
#define DOFODCADEHG_HDMGMDKOJKC_OFFSET UNITYSDK_OFFSET(0x191A5510)
#define DOFODCADEHG_HLCHGJAAEKE_OFFSET UNITYSDK_OFFSET(0x191A5410)
#define DOFODCADEHG_JBOJECABIMN_OFFSET UNITYSDK_OFFSET(0x191A5DA0)
#define DOFODCADEHG_KNGAAPOENNE_OFFSET UNITYSDK_OFFSET(0x191A57A0)
#define DOFODCADEHG_LHOFCEBEKGK_OFFSET UNITYSDK_OFFSET(0x191A5990)
#define DOFODCADEHG_MLMNDNIKDNL_OFFSET UNITYSDK_OFFSET(0x191A5670)
#define DOFODCADEHG_NGPEBNECDDM_OFFSET UNITYSDK_OFFSET(0x191A5EB0)
#define DOFODCADEHG_OINOLCLLOGH_OFFSET UNITYSDK_OFFSET(0x191A5F50)
#define DOFODCADEHG_PPJPFEBEHDL_OFFSET UNITYSDK_OFFSET(0x191A5E10)

inline static constexpr unsigned int DOFODCADEHG_TypeDefinitionIndex = 81760;

	class DOFODCADEHG : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* KDIJHBIADLJ; // 0x10
		::UnityEngine::GameObject* DHHIBLFADJG; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* PNKNCFGGBKA; // 0x20
		::Il2CppArray<::UnityEngine::Animator*>* NPBEGGOLJED; // 0x28
		::UnityEngine::Animator* HBLFBCHPBJH; // 0x30
		::System::Int32 EJNMGLJJEOO; // 0x38
		::System::Boolean LMPJEECAKEM; // 0x3C
		static ::System::Int32* StaticGet_ECOIODPLNOO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x156F0);
		}

		static ::System::Int32* StaticGet_KKGDGIFMJKG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x156F4);
		}

		static ::System::Int32* StaticGet_HKJDFLOAHLM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x156F8);
		}

		static ::System::Int32* StaticGet_CCNKOOHPLHA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x156FC);
		}

		static ::System::Int32* StaticGet_AEEDFBCPNHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x15700);
		}

		static ::System::Int32* StaticGet_JGLDPNJGHAI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x15704);
		}

		static ::System::Int32* StaticGet_IBEABMNNOLE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x15708);
		}

		static ::System::Int32* StaticGet_GIOLIKAKAGA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DOFODCADEHG")->GetStaticField(0x1570C);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + DOFODCADEHG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOFODCADEHG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFODCADEHG_DISPOSE_OFFSET))(this);
		}

		::System::Void GHPAHMKMBKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFODCADEHG_GHPAHMKMBKK_OFFSET))(this);
		}

		::System::Void HDMGMDKOJKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFODCADEHG_HDMGMDKOJKC_OFFSET))(this);
		}

		::System::Void CIPPMEDPIGP(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + DOFODCADEHG_CIPPMEDPIGP_OFFSET))(this, a1);
		}

		::System::Void HLCHGJAAEKE(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DOFODCADEHG_HLCHGJAAEKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ECCJCGOJDJB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFODCADEHG_ECCJCGOJDJB_OFFSET))(this, a1);
		}

		::System::Void PPJPFEBEHDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFODCADEHG_PPJPFEBEHDL_OFFSET))(this);
		}

		::System::Void NGPEBNECDDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFODCADEHG_NGPEBNECDDM_OFFSET))(this);
		}

		::System::Void KNGAAPOENNE(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DOFODCADEHG_KNGAAPOENNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LHOFCEBEKGK(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DOFODCADEHG_LHOFCEBEKGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLMNDNIKDNL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFODCADEHG_MLMNDNIKDNL_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* OINOLCLLOGH(::System::Int32 a1)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFODCADEHG_OINOLCLLOGH_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* JBOJECABIMN(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFODCADEHG_JBOJECABIMN_OFFSET))(this, a1);
		}

	};
