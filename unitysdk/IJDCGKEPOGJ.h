#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJDCGKEPOGJ;
namespace System { class String; }

#define IJDCGKEPOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF17BB0)
#define IJDCGKEPOGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF17BC0)
#define IJDCGKEPOGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF17B80)

inline static constexpr unsigned int IJDCGKEPOGJ_TypeDefinitionIndex = 23381;

	class IJDCGKEPOGJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* JDHCPILLCPA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDCGKEPOGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJDCGKEPOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJDCGKEPOGJ*))((::PBYTE)hIl2Cpp + IJDCGKEPOGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJDCGKEPOGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJDCGKEPOGJ*))((::PBYTE)hIl2Cpp + IJDCGKEPOGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
