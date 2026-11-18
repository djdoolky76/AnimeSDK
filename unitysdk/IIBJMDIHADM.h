#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IIBJMDIHADM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15EBD230)
#define IIBJMDIHADM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15EBD5D0)
#define IIBJMDIHADM_EHEMAJCJFFH_OFFSET UNITYSDK_OFFSET(0x15EBD3F0)
#define IIBJMDIHADM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBD220)

inline static constexpr unsigned int IIBJMDIHADM_TypeDefinitionIndex = 44195;

class IIBJMDIHADM : public ::System::Object
{
public:
	static ::MoleMole::ConfigBuddyUISetting** StaticGet_GNNCFGGJNIN()
	{
		return (::MoleMole::ConfigBuddyUISetting**)Il2CppClass::FromTypeDefinitionIndex(IIBJMDIHADM_TypeDefinitionIndex)->GetStaticField(0x37D00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBJMDIHADM__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IIBJMDIHADM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigBuddyUISetting* EHEMAJCJFFH()
	{
		return ((::MoleMole::ConfigBuddyUISetting*(*)())((::PBYTE)hIl2Cpp + IIBJMDIHADM_EHEMAJCJFFH_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IIBJMDIHADM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
