#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLPBGGCAJEI;

#define LLPBGGCAJEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E409710)
#define LLPBGGCAJEI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E409720)
#define LLPBGGCAJEI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4096E0)

inline static constexpr unsigned int LLPBGGCAJEI_TypeDefinitionIndex = 21894;

	class LLPBGGCAJEI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 NPHAJEKCBKF; // 0x18
		::System::UInt32 BIAOGIGAAGA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPBGGCAJEI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLPBGGCAJEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLPBGGCAJEI*))((::PBYTE)hIl2Cpp + LLPBGGCAJEI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LLPBGGCAJEI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLPBGGCAJEI*))((::PBYTE)hIl2Cpp + LLPBGGCAJEI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
