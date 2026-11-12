#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MLHMAPBJMKC;
namespace System { class String; }

#define MLHMAPBJMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DEC30)
#define MLHMAPBJMKC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3DEC40)
#define MLHMAPBJMKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3DEC00)

inline static constexpr unsigned int MLHMAPBJMKC_TypeDefinitionIndex = 20312;

	class MLHMAPBJMKC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AIIEEIKBIEK; // 0x18
		::System::String* NEHFGFCJFBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLHMAPBJMKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLHMAPBJMKC*))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLHMAPBJMKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLHMAPBJMKC*))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
