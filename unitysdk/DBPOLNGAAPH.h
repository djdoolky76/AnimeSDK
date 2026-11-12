#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DBPOLNGAAPH;
class FCOEMCEDLNL;

#define DBPOLNGAAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF6AF0)
#define DBPOLNGAAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EEF6B00)
#define DBPOLNGAAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EEF6AC0)

inline static constexpr unsigned int DBPOLNGAAPH_TypeDefinitionIndex = 10227;

	class DBPOLNGAAPH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PIGCMODDJLP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPOLNGAAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DBPOLNGAAPH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBPOLNGAAPH*))((::PBYTE)hIl2Cpp + DBPOLNGAAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DBPOLNGAAPH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DBPOLNGAAPH*))((::PBYTE)hIl2Cpp + DBPOLNGAAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
