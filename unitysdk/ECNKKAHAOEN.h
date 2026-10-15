#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNKKAHAOEN;
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECNKKAHAOEN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12D115E0)
#define ECNKKAHAOEN_CLMIFGMPLBN_OFFSET UNITYSDK_OFFSET(0x12D11680)
#define ECNKKAHAOEN_CTOR_OFFSET UNITYSDK_OFFSET(0x12D11670)
#define ECNKKAHAOEN_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x12D11720)
#define ECNKKAHAOEN_MDIEKGGLDOM_OFFSET UNITYSDK_OFFSET(0x12D11740)
#define ECNKKAHAOEN_NLCBLNNGOCH_OFFSET UNITYSDK_OFFSET(0x12D116D0)
#define ECNKKAHAOEN_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x12D11730)

inline static constexpr unsigned int ECNKKAHAOEN_TypeDefinitionIndex = 56934;

	class ECNKKAHAOEN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* HNAKNKGOJII; // 0x10
		::System::UInt32 _PhaseID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_CTOR_OFFSET))(this);
		}

		static ::ECNKKAHAOEN* BPLPBPMEODA(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a2)
		{
			return ((::ECNKKAHAOEN*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::RPG::GameCore::ICharacterSkillRowData* CLMIFGMPLBN(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_CLMIFGMPLBN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* NLCBLNNGOCH(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_NLCBLNNGOCH_OFFSET))(this, a1);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_GET_PHASEID_OFFSET))(this);
		}

		::System::Void set_PhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_SET_PHASEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* MDIEKGGLDOM()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNKKAHAOEN_MDIEKGGLDOM_OFFSET))(this);
		}

	};
