#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PBEMMHIOJBO;
namespace System { class String; }

#define PBEMMHIOJBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D296770)
#define PBEMMHIOJBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D296780)
#define PBEMMHIOJBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D296730)

inline static constexpr unsigned int PBEMMHIOJBO_TypeDefinitionIndex = 22710;

	class PBEMMHIOJBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ECNKCCNJNPJ; // 0x18
		::System::Boolean BHMGBPJCFBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEMMHIOJBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PBEMMHIOJBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PBEMMHIOJBO*))((::PBYTE)hIl2Cpp + PBEMMHIOJBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PBEMMHIOJBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PBEMMHIOJBO*))((::PBYTE)hIl2Cpp + PBEMMHIOJBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
