#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KOLCKBMFJMJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x126ABB80)
#define KOLCKBMFJMJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x126ABA80)
#define KOLCKBMFJMJ_DLHPJCPOFFI_OFFSET UNITYSDK_OFFSET(0x126AB8A0)

inline static constexpr unsigned int KOLCKBMFJMJ_TypeDefinitionIndex = 61746;

class KOLCKBMFJMJ : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIScripts** StaticGet_KHKLJLOPDJM()
	{
		return (::MoleMole::ConfigUIScripts**)Il2CppClass::FromTypeDefinitionIndex(KOLCKBMFJMJ_TypeDefinitionIndex)->GetStaticField(0x3B8E0);
	}

	static ::MoleMole::ConfigUIScripts* DLHPJCPOFFI()
	{
		return ((::MoleMole::ConfigUIScripts*(*)())((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_DLHPJCPOFFI_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KOLCKBMFJMJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
