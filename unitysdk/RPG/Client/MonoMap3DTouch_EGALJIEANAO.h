#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_CTOR_OFFSET UNITYSDK_OFFSET(0xD84B5D0)
#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_FOLBFIKPNOA_OFFSET UNITYSDK_OFFSET(0xD848BD0)
#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_GFGAJNGGMCL_OFFSET UNITYSDK_OFFSET(0xD849050)
#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_HJBDCOHKOGM_OFFSET UNITYSDK_OFFSET(0xD848E70)
#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_PGLDOKENIOB_OFFSET UNITYSDK_OFFSET(0xD848B30)
#define RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD84A9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_EGALJIEANAO_TypeDefinitionIndex = 69045;

	class MonoMap3DTouch_EGALJIEANAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IDIMGIMNAGF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_CTOR_OFFSET))(this);
		}

		::System::Boolean PGLDOKENIOB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_PGLDOKENIOB_OFFSET))(this, a1);
		}

		::System::Boolean HJBDCOHKOGM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_HJBDCOHKOGM_OFFSET))(this, a1);
		}

		::System::UInt32 FOLBFIKPNOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_FOLBFIKPNOA_OFFSET))(this);
		}

		::System::Boolean GFGAJNGGMCL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_GFGAJNGGMCL_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_EGALJIEANAO_PJPFIHFAHGO_OFFSET))(this);
		}

	};
}
