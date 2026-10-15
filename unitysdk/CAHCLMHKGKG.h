#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CAHCLMHKGKG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define CAHCLMHKGKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FF010)
#define CAHCLMHKGKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FF020)
#define CAHCLMHKGKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FEFE0)

inline static constexpr unsigned int CAHCLMHKGKG_TypeDefinitionIndex = 21478;

	class CAHCLMHKGKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FiveDimSetBillboardInfo* OGAKGPFAHPM; // 0x18
		::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHCLMHKGKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CAHCLMHKGKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CAHCLMHKGKG*))((::PBYTE)hIl2Cpp + CAHCLMHKGKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CAHCLMHKGKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CAHCLMHKGKG*))((::PBYTE)hIl2Cpp + CAHCLMHKGKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
