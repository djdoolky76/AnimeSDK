#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FNGKGCPAIOK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define FNGKGCPAIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE11C0)
#define FNGKGCPAIOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE11D0)
#define FNGKGCPAIOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE1190)

inline static constexpr unsigned int FNGKGCPAIOK_TypeDefinitionIndex = 20581;

	class FNGKGCPAIOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
		::RPG::GameCore::DynamicString* LLPIGJHNPNN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKGCPAIOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNGKGCPAIOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNGKGCPAIOK*))((::PBYTE)hIl2Cpp + FNGKGCPAIOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FNGKGCPAIOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNGKGCPAIOK*))((::PBYTE)hIl2Cpp + FNGKGCPAIOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
