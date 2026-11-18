#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUISound; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JCEHBEPIPKO_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1306B4B0)
#define JCEHBEPIPKO_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1306B3B0)
#define JCEHBEPIPKO_DLFLMPFCFOO_OFFSET UNITYSDK_OFFSET(0x1306B940)
#define JCEHBEPIPKO_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x1306B8F0)

inline static constexpr unsigned int JCEHBEPIPKO_TypeDefinitionIndex = 91213;

class JCEHBEPIPKO : public ::System::Object
{
public:
	static ::MoleMole::ConfigUISound** StaticGet_MMBCFKAMKGF()
	{
		return (::MoleMole::ConfigUISound**)Il2CppClass::FromTypeDefinitionIndex(JCEHBEPIPKO_TypeDefinitionIndex)->GetStaticField(0x3B470);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + JCEHBEPIPKO_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCEHBEPIPKO_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + JCEHBEPIPKO_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigUISound* DLFLMPFCFOO()
	{
		return ((::MoleMole::ConfigUISound*(*)())((::PBYTE)hIl2Cpp + JCEHBEPIPKO_DLFLMPFCFOO_OFFSET))();
	}
};
