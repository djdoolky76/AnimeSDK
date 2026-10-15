#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDFNFDPHFKG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define LDFNFDPHFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DFD80)
#define LDFNFDPHFKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0DFD90)
#define LDFNFDPHFKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0DFD40)

	class LDFNFDPHFKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* PODFJDMHFMK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFNFDPHFKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDFNFDPHFKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDFNFDPHFKG*))((::PBYTE)hIl2Cpp + LDFNFDPHFKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDFNFDPHFKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDFNFDPHFKG*))((::PBYTE)hIl2Cpp + LDFNFDPHFKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
