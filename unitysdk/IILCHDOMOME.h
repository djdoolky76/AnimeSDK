#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
namespace RPG::Client { class BaseLobby; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IILCHDOMOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1643C080)
#define IILCHDOMOME_CTOR_OFFSET UNITYSDK_OFFSET(0x1643AA20)
#define IILCHDOMOME_EPNGBFGIMLO_OFFSET UNITYSDK_OFFSET(0x1643BE60)
#define IILCHDOMOME_GFMAEMPLPIL_OFFSET UNITYSDK_OFFSET(0x1643AF40)
#define IILCHDOMOME_GIGAIFIFJNL_OFFSET UNITYSDK_OFFSET(0x1643C010)
#define IILCHDOMOME_HIKKFLCKLEO_OFFSET UNITYSDK_OFFSET(0x1643AAA0)
#define IILCHDOMOME_HMBBJNBBAPL_OFFSET UNITYSDK_OFFSET(0x1643B7F0)
#define IILCHDOMOME_JDACCOHIFJO_OFFSET UNITYSDK_OFFSET(0x1643BBC0)
#define IILCHDOMOME_JICINEDKGIM_OFFSET UNITYSDK_OFFSET(0x1643AA30)
#define IILCHDOMOME_KDLNFPHABCM_OFFSET UNITYSDK_OFFSET(0x1643AD00)
#define IILCHDOMOME_LDBOGNCMGPA_OFFSET UNITYSDK_OFFSET(0x1643B470)
#define IILCHDOMOME_MNBPIBLHNHO_OFFSET UNITYSDK_OFFSET(0x1643B8D0)
#define IILCHDOMOME__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET UNITYSDK_OFFSET(0x1643B730)

inline static constexpr unsigned int IILCHDOMOME_TypeDefinitionIndex = 66041;

	class IILCHDOMOME : public ::System::Object
	{
	public:
		::FJPMJPEKLJL PPKABFIKOGA; // 0x10
		static ::System::Collections::Generic::Dictionary_2<::FJPMJPEKLJL, ::System::String*>** StaticGet_FGDCJJIPIIA()
		{
			return (::System::Collections::Generic::Dictionary_2<::FJPMJPEKLJL, ::System::String*>**)UnitySDK::FromName("", "IILCHDOMOME")->GetStaticField(0x5FFC0);
		}

		::System::Void _ctor(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + IILCHDOMOME_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILCHDOMOME_CCTOR_OFFSET))();
		}

		::System::Void JICINEDKGIM(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + IILCHDOMOME_JICINEDKGIM_OFFSET))(this, a1);
		}

		::System::Void KDLNFPHABCM(::System::Func_1<::FMHEHLIFNGJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::FMHEHLIFNGJ*>*))((::PBYTE)hIl2Cpp + IILCHDOMOME_KDLNFPHABCM_OFFSET))(this, a1);
		}

		::System::Boolean GFMAEMPLPIL(::System::UInt64 a1, ::System::Func_1<::FMHEHLIFNGJ*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Func_1<::FMHEHLIFNGJ*>*))((::PBYTE)hIl2Cpp + IILCHDOMOME_GFMAEMPLPIL_OFFSET))(this, a1, a2);
		}

		::System::Void LDBOGNCMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME_LDBOGNCMGPA_OFFSET))(this);
		}

		::System::Void HMBBJNBBAPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCHDOMOME_HMBBJNBBAPL_OFFSET))(this);
		}

		static ::System::Void MNBPIBLHNHO(::System::UInt64 a1, ::System::Func_1<::FMHEHLIFNGJ*>* a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::Func_1<::FMHEHLIFNGJ*>*))((::PBYTE)hIl2Cpp + IILCHDOMOME_MNBPIBLHNHO_OFFSET))(a1, a2);
		}

		static ::System::Void JDACCOHIFJO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILCHDOMOME_JDACCOHIFJO_OFFSET))();
		}

		static ::System::Void HIKKFLCKLEO(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + IILCHDOMOME_HIKKFLCKLEO_OFFSET))(a1);
		}

		static ::System::Boolean EPNGBFGIMLO(::RPG::Client::BaseLobby* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BaseLobby*, ::System::String*))((::PBYTE)hIl2Cpp + IILCHDOMOME_EPNGBFGIMLO_OFFSET))(a1, a2);
		}

		static ::System::Boolean GIGAIFIFJNL(::FJPMJPEKLJL a1, ::FJPMJPEKLJL a2)
		{
			return ((::System::Boolean(*)(::FJPMJPEKLJL, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + IILCHDOMOME_GIGAIFIFJNL_OFFSET))(a1, a2);
		}

		::System::Void _TryReconnect_g__OnFetchedLobby_5_0(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + IILCHDOMOME__TRYRECONNECT_G__ONFETCHEDLOBBY_5_0_OFFSET))(this, a1);
		}

	};
