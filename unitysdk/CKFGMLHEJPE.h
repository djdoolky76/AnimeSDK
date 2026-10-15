#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class CKFGMLHEJPE;
namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }

#define CKFGMLHEJPE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD759CC0)
#define CKFGMLHEJPE_CTOR_OFFSET UNITYSDK_OFFSET(0xD759D50)
#define CKFGMLHEJPE_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xD759DB0)
#define CKFGMLHEJPE_HOAAFLKILJL_OFFSET UNITYSDK_OFFSET(0xD759DF0)
#define CKFGMLHEJPE_MJEKFMOJPJJ_OFFSET UNITYSDK_OFFSET(0xD759EF0)
#define CKFGMLHEJPE_OLGDCGGNABH_OFFSET UNITYSDK_OFFSET(0xD759D60)
#define CKFGMLHEJPE_PADPNJGCPBJ_OFFSET UNITYSDK_OFFSET(0xD759E90)

inline static constexpr unsigned int CKFGMLHEJPE_TypeDefinitionIndex = 72099;

	class CKFGMLHEJPE : public ::System::Object
	{
	public:
		::RPG::GameCore::AttackDamageType MDPMKJHENGC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_CTOR_OFFSET))(this);
		}

		static ::CKFGMLHEJPE* BPLPBPMEODA(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::CKFGMLHEJPE*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OLGDCGGNABH(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_OLGDCGGNABH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::String* HOAAFLKILJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_HOAAFLKILJL_OFFSET))(this);
		}

		::System::String* MJEKFMOJPJJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_MJEKFMOJPJJ_OFFSET))(this);
		}

		::RPG::GameCore::DamageTypeRow* PADPNJGCPBJ()
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFGMLHEJPE_PADPNJGCPBJ_OFFSET))(this);
		}

	};
