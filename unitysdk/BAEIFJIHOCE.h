#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BAEIFJIHOCE;
class FCOEMCEDLNL;
namespace System { class String; }

#define BAEIFJIHOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF18F0)
#define BAEIFJIHOCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCF1900)
#define BAEIFJIHOCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCF18C0)

inline static constexpr unsigned int BAEIFJIHOCE_TypeDefinitionIndex = 23300;

	class BAEIFJIHOCE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NCELMEKDHOM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEIFJIHOCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BAEIFJIHOCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAEIFJIHOCE*))((::PBYTE)hIl2Cpp + BAEIFJIHOCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BAEIFJIHOCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAEIFJIHOCE*))((::PBYTE)hIl2Cpp + BAEIFJIHOCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
