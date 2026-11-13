#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIBONMCGDMH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BIBONMCGDMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F191B60)
#define BIBONMCGDMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F191B90)
#define BIBONMCGDMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F191B10)

inline static constexpr unsigned int BIBONMCGDMH_TypeDefinitionIndex = 22411;

	class BIBONMCGDMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean DMHJINGNBIH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIBONMCGDMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIBONMCGDMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIBONMCGDMH*))((::PBYTE)hIl2Cpp + BIBONMCGDMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIBONMCGDMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIBONMCGDMH*))((::PBYTE)hIl2Cpp + BIBONMCGDMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
