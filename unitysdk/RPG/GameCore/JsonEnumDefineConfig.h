#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/JsonEnumCategory.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class JsonEnumConfig; }
namespace RPG::GameCore { class JsonEnumDefineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_JSONENUMDEFINECONFIG_BIFNNHOIJLN_OFFSET UNITYSDK_OFFSET(0x1D7A1200)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1040)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_DEPNDPHOJLH_OFFSET UNITYSDK_OFFSET(0x1D7A13A0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_IOBCACJJOIP_OFFSET UNITYSDK_OFFSET(0x1D7A0430)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_JFJLNGGEEPB_OFFSET UNITYSDK_OFFSET(0x1D7A1210)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_MFAJOALGJIJ_OFFSET UNITYSDK_OFFSET(0x1D7A1310)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_MIDDHOJLKDN_OFFSET UNITYSDK_OFFSET(0x1D7A01C0)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A0F60)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_OPBIAOGIABO_OFFSET UNITYSDK_OFFSET(0x1D7A1050)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_PKHMFONBHBM_1_OFFSET UNITYSDK_OFFSET(0x1D7A1260)
#define RPG_GAMECORE_JSONENUMDEFINECONFIG_PKHMFONBHBM_OFFSET UNITYSDK_OFFSET(0x1D7A07F0)

namespace RPG::GameCore
{
	class JsonEnumDefineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::JsonEnumCategory, ::RPG::GameCore::JsonEnumConfig*>* ConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::JsonEnumConfig*>* _ConfigCategoryArr; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::JsonEnumDefineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::JsonEnumDefineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Void OPBIAOGIABO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_OPBIAOGIABO_OFFSET))(this);
		}

		::System::Void BIFNNHOIJLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_BIFNNHOIJLN_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* MIDDHOJLKDN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_MIDDHOJLKDN_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple IOBCACJJOIP(::System::String* a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_IOBCACJJOIP_OFFSET))(this, a1);
		}

		::System::String* JFJLNGGEEPB(::RPG::GameCore::JsonEnumCategory a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_JFJLNGGEEPB_OFFSET))(this, a1, a2);
		}

		::System::Int32 PKHMFONBHBM(::RPG::GameCore::JsonEnumCategory a1, ::RPG::GameCore::JsonEnum* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_PKHMFONBHBM_OFFSET))(this, a1, a2);
		}

		::System::Int32 PKHMFONBHBM_1(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_PKHMFONBHBM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MFAJOALGJIJ(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_MFAJOALGJIJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean DEPNDPHOJLH(::RPG::GameCore::JsonEnumCategory a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::JsonEnumCategory, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONENUMDEFINECONFIG_DEPNDPHOJLH_OFFSET))(this, a1, a2, a3);
		}

	};
}
