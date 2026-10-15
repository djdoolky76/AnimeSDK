#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PEMEHFIAHKI;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define PEMEHFIAHKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D5DF0)
#define PEMEHFIAHKI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D5E10)
#define PEMEHFIAHKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D5DA0)

	class PEMEHFIAHKI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MDLOPBMGFMP; // 0x18
		::RPG::GameCore::DynamicFloat* MIOOGEBNBGL; // 0x20
		::RPG::GameCore::DynamicFloat* NIEFDEJOIID; // 0x28
		::RPG::GameCore::TargetEvaluator* LMHLJEKNHOK; // 0x30
		::RPG::GameCore::PropertyModifyFunction DEOCMFOJHAM; // 0x38
		::System::Boolean DKKNBKPNJBN; // 0x3C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PropertyModifyFunction HJOALLKGNGP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMEHFIAHKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEMEHFIAHKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEMEHFIAHKI*))((::PBYTE)hIl2Cpp + PEMEHFIAHKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PEMEHFIAHKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEMEHFIAHKI*))((::PBYTE)hIl2Cpp + PEMEHFIAHKI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
