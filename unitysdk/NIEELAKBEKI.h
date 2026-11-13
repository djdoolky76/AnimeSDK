#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class NIEELAKBEKI;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define NIEELAKBEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74F630)
#define NIEELAKBEKI_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E74F860)
#define NIEELAKBEKI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E74F640)
#define NIEELAKBEKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E74F600)

inline static constexpr unsigned int NIEELAKBEKI_TypeDefinitionIndex = 23821;

	class NIEELAKBEKI : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* ACCJKGEKHKP; // 0x18
		::System::String* FHLJGDGMMHK; // 0x20
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x28
		::RPG::GameCore::AbilityProperty FODBMMCKAEN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEELAKBEKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NIEELAKBEKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIEELAKBEKI*))((::PBYTE)hIl2Cpp + NIEELAKBEKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NIEELAKBEKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NIEELAKBEKI*))((::PBYTE)hIl2Cpp + NIEELAKBEKI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEELAKBEKI_GETDYNAMICKEY_OFFSET))(this);
		}

	};
