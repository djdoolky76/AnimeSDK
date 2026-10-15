#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IALHIKGIPOB;
namespace System { class String; }

#define IALHIKGIPOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDBD40)
#define IALHIKGIPOB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEDBD50)
#define IALHIKGIPOB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEDBD10)

inline static constexpr unsigned int IALHIKGIPOB_TypeDefinitionIndex = 24145;

	class IALHIKGIPOB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IEABENMOPFF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALHIKGIPOB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IALHIKGIPOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IALHIKGIPOB*))((::PBYTE)hIl2Cpp + IALHIKGIPOB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IALHIKGIPOB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IALHIKGIPOB*))((::PBYTE)hIl2Cpp + IALHIKGIPOB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
