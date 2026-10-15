#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetVersusBar; }
namespace RPG::GameCore { class TaskContext; }

#define DIJOGMGMNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF20B460)
#define DIJOGMGMNAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF20B470)
#define DIJOGMGMNAJ_GNDNDCEBFFE_OFFSET UNITYSDK_OFFSET(0xF20B5A0)
#define DIJOGMGMNAJ_HPEBIALGDKG_OFFSET UNITYSDK_OFFSET(0xF20B8A0)
#define DIJOGMGMNAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF20B4B0)
#define DIJOGMGMNAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF20B7F0)
#define DIJOGMGMNAJ_TICK_OFFSET UNITYSDK_OFFSET(0xF20B840)

inline static constexpr unsigned int DIJOGMGMNAJ_TypeDefinitionIndex = 55591;

	class DIJOGMGMNAJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetVersusBar* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* NEHPDHONFOB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetVersusBar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetVersusBar*))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_TICK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::GameCore::FixPoint> HPEBIALGDKG(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Nullable_1<::RPG::GameCore::FixPoint>(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_HPEBIALGDKG_OFFSET))(this, a1);
		}

		::System::Void GNDNDCEBFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJOGMGMNAJ_GNDNDCEBFFE_OFFSET))(this);
		}

	};
