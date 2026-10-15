#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NoteComboConfig; }
namespace RPG::GameCore { class NoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECOMBOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D9940)
#define RPG_GAMECORE_NOTECOMBOCONFIG_IONAIIEOFNF_OFFSET UNITYSDK_OFFSET(0x1D8D9990)
#define RPG_GAMECORE_NOTECOMBOCONFIG_MKLHGOOEPFI_OFFSET UNITYSDK_OFFSET(0x1D8D9950)
#define RPG_GAMECORE_NOTECOMBOCONFIG_OJIGJHJKNGL_OFFSET UNITYSDK_OFFSET(0x1D8D9980)
#define RPG_GAMECORE_NOTECOMBOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D97B0)

namespace RPG::GameCore
{
	class NoteComboConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Template; // 0x10
		::System::Single DeltaBeatNum; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::NoteConfig*>* NoteList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteComboConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteComboConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* MKLHGOOEPFI()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_MKLHGOOEPFI_OFFSET))(this);
		}

		::System::Void OJIGJHJKNGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_OJIGJHJKNGL_OFFSET))(this);
		}

		::System::Void IONAIIEOFNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOCONFIG_IONAIIEOFNF_OFFSET))(this);
		}

	};
}
