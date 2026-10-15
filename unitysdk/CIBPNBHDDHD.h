#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class CIBPNBHDDHD;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define CIBPNBHDDHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE6A00)
#define CIBPNBHDDHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBE67C0)

inline static constexpr unsigned int CIBPNBHDDHD_TypeDefinitionIndex = 22722;

	class CIBPNBHDDHD : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NPBJDGCDBAE; // 0x10
		::RPG::GameCore::DynamicFloat* NDNIILALBOP; // 0x18
		::System::Boolean LCNEPFHOJKE; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single JGNLDDCGADA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBPNBHDDHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIBPNBHDDHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIBPNBHDDHD*))((::PBYTE)hIl2Cpp + CIBPNBHDDHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
