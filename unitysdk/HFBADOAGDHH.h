#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/CaseBoardAvatarTextMode.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HFBADOAGDHH;
class PDJAKJNKAJJ;
namespace System { class String; }

#define HFBADOAGDHH_AGPFGMAFPHK_OFFSET UNITYSDK_OFFSET(0x1A2120B0)
#define HFBADOAGDHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2125C0)
#define HFBADOAGDHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A212440)
#define HFBADOAGDHH_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A212470)
#define HFBADOAGDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A212430)
#define HFBADOAGDHH_DCOGPCOEOHA_OFFSET UNITYSDK_OFFSET(0x1A211FA0)
#define HFBADOAGDHH_EOIBNFCCJCP_OFFSET UNITYSDK_OFFSET(0x1A211D30)
#define HFBADOAGDHH_GET_INVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A211B70)
#define HFBADOAGDHH_GET_UNKNOWN_OFFSET UNITYSDK_OFFSET(0x1A211B10)
#define HFBADOAGDHH_IAMKMOIIIMP_OFFSET UNITYSDK_OFFSET(0x1A212520)
#define HFBADOAGDHH_IHEFFDKFAOA_OFFSET UNITYSDK_OFFSET(0x1A211C90)
#define HFBADOAGDHH_KBCCKBMAMHL_OFFSET UNITYSDK_OFFSET(0x1A211E40)
#define HFBADOAGDHH_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x1A211BD0)
#define HFBADOAGDHH_MGMKPPGCGOA_OFFSET UNITYSDK_OFFSET(0x1A212320)
#define HFBADOAGDHH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1A211C20)
#define HFBADOAGDHH_NCICIBKODJD_OFFSET UNITYSDK_OFFSET(0x1A212490)
#define HFBADOAGDHH_NELKHLLEDAL_OFFSET UNITYSDK_OFFSET(0x1A211CE0)
#define HFBADOAGDHH_NLPDIMIEPMJ_OFFSET UNITYSDK_OFFSET(0x1A212210)
#define HFBADOAGDHH_NNHMPIEGPAP_OFFSET UNITYSDK_OFFSET(0x1A212100)

inline static constexpr unsigned int HFBADOAGDHH_TypeDefinitionIndex = 83552;

	class HFBADOAGDHH : public ::System::Object
	{
	public:
		::PDJAKJNKAJJ* IGHAHBNLIJA; // 0x10
		::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode OHFLLIBJOFN; // 0x18
		static ::HFBADOAGDHH** StaticGet__Unknown_k__BackingField()
		{
			return (::HFBADOAGDHH**)UnitySDK::FromName("", "HFBADOAGDHH")->GetStaticField(0x6F4D0);
		}

		static ::HFBADOAGDHH** StaticGet__Invisible_k__BackingField()
		{
			return (::HFBADOAGDHH**)UnitySDK::FromName("", "HFBADOAGDHH")->GetStaticField(0x6F4D8);
		}

		::System::Void _ctor(::PDJAKJNKAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDJAKJNKAJJ*))((::PBYTE)hIl2Cpp + HFBADOAGDHH_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::HFBADOAGDHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFBADOAGDHH*))((::PBYTE)hIl2Cpp + HFBADOAGDHH_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::HFBADOAGDHH* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::HFBADOAGDHH*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + HFBADOAGDHH_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFBADOAGDHH_CCTOR_OFFSET))();
		}

		static ::HFBADOAGDHH* get_Unknown()
		{
			return ((::HFBADOAGDHH*(*)())((::PBYTE)hIl2Cpp + HFBADOAGDHH_GET_UNKNOWN_OFFSET))();
		}

		static ::HFBADOAGDHH* get_Invisible()
		{
			return ((::HFBADOAGDHH*(*)())((::PBYTE)hIl2Cpp + HFBADOAGDHH_GET_INVISIBLE_OFFSET))();
		}

		::RPG::GameCore::FateRinCaseBoardAvatarType KMHNKEJMDAK()
		{
			return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_KMHNKEJMDAK_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* IHEFFDKFAOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_IHEFFDKFAOA_OFFSET))(this);
		}

		::System::String* NELKHLLEDAL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_NELKHLLEDAL_OFFSET))(this);
		}

		::RPG::Client::TextID EOIBNFCCJCP()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_EOIBNFCCJCP_OFFSET))(this);
		}

		::RPG::Client::TextID DCOGPCOEOHA()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_DCOGPCOEOHA_OFFSET))(this);
		}

		::System::UInt32 AGPFGMAFPHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_AGPFGMAFPHK_OFFSET))(this);
		}

		::RPG::Client::TextID NNHMPIEGPAP()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_NNHMPIEGPAP_OFFSET))(this);
		}

		::RPG::Client::TextID NLPDIMIEPMJ()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_NLPDIMIEPMJ_OFFSET))(this);
		}

		::RPG::Client::TextID MGMKPPGCGOA()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HFBADOAGDHH_MGMKPPGCGOA_OFFSET))(this);
		}

		::HFBADOAGDHH* NCICIBKODJD(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a1)
		{
			return ((::HFBADOAGDHH*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + HFBADOAGDHH_NCICIBKODJD_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID KBCCKBMAMHL(::System::UInt32 a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode a4)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarTextMode))((::PBYTE)hIl2Cpp + HFBADOAGDHH_KBCCKBMAMHL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IAMKMOIIIMP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HFBADOAGDHH_IAMKMOIIIMP_OFFSET))(a1);
		}

	};
