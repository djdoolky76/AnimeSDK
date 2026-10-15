#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPlanPhaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JLMKCFFODIA;
class KFJKHEKMJKE;
namespace System { class String; }

#define JLMKCFFODIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D047860)
#define JLMKCFFODIA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D047470)

inline static constexpr unsigned int JLMKCFFODIA_TypeDefinitionIndex = 13961;

	class JLMKCFFODIA : public ::System::Object
	{
	public:
		::System::String* OOKONGHCFBP; // 0x10
		::Il2CppArray<::KFJKHEKMJKE*>* OJBEKHJBIHL; // 0x18
		::System::String* FBKAMIHGLFK; // 0x20
		::RPG::Client::TextID JEJGIFKGBCO; // 0x28
		::System::UInt32 NFIKDONNJMD; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CCHLHJCMFGM; // 0x40
		::RPG::Client::TextID AIFCBBLPHHI; // 0x50
		::System::UInt32 OPOPKLGBNKB; // 0x60
		::RPG::GameCore::LimaoNewsPlanPhaseType ABPCHBOBLNB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKCFFODIA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLMKCFFODIA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLMKCFFODIA*))((::PBYTE)hIl2Cpp + JLMKCFFODIA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
