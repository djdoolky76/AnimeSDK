#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NoteComboTemplateNoteConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D9A30)
#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_MNDNJNAJOFC_OFFSET UNITYSDK_OFFSET(0x1D8D9A40)
#define RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D99F0)

namespace RPG::GameCore
{
	class NoteComboTemplateNoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteComboTemplateNoteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteComboTemplateNoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* MNDNJNAJOFC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECOMBOTEMPLATENOTECONFIG_MNDNJNAJOFC_OFFSET))(this);
		}

	};
}
