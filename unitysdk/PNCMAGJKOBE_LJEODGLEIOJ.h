#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNCMAGJKOBE_LJEODGLEIOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194B9200)

inline static constexpr unsigned int PNCMAGJKOBE_LJEODGLEIOJ_TypeDefinitionIndex = 42322;

class PNCMAGJKOBE_LJEODGLEIOJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySharedAnimEvents*>* HCIGGFINJOP; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCMAGJKOBE_LJEODGLEIOJ__CTOR_OFFSET))(this);
	}
};
