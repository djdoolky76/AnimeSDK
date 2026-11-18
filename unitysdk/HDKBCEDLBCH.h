#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class DitherConfigSeparate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HDKBCEDLBCH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15D9FCA0)
#define HDKBCEDLBCH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15D9FBB0)
#define HDKBCEDLBCH_DHCAPILEHNN_OFFSET UNITYSDK_OFFSET(0x15D9F6C0)
#define HDKBCEDLBCH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15D9F9D0)

inline static constexpr unsigned int HDKBCEDLBCH_TypeDefinitionIndex = 77222;

class HDKBCEDLBCH : public ::System::Object
{
public:
	static ::MoleMole::DitherConfigSeparate** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::DitherConfigSeparate**)Il2CppClass::FromTypeDefinitionIndex(HDKBCEDLBCH_TypeDefinitionIndex)->GetStaticField(0x40B30);
	}

	static ::MoleMole::DitherConfig* DHCAPILEHNN(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::DitherConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_DHCAPILEHNN_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HDKBCEDLBCH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::DitherConfigSeparate* KGNEJKNNODJ()
	{
		return ((::MoleMole::DitherConfigSeparate*(*)())((::PBYTE)hIl2Cpp + HDKBCEDLBCH_KGNEJKNNODJ_OFFSET))();
	}
};
