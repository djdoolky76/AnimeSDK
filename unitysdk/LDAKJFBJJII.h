#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDAKJFBJJII_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1A2ED630)
#define LDAKJFBJJII_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1A2ED810)
#define LDAKJFBJJII_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1A2EDA20)
#define LDAKJFBJJII__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED620)

inline static constexpr unsigned int LDAKJFBJJII_TypeDefinitionIndex = 81499;

class LDAKJFBJJII : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigPlayerAccessoryEffect** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigPlayerAccessoryEffect**)Il2CppClass::FromTypeDefinitionIndex(LDAKJFBJJII_TypeDefinitionIndex)->GetStaticField(0x3E580);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAKJFBJJII__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigPlayerAccessoryEffect* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigPlayerAccessoryEffect*(*)())((::PBYTE)hIl2Cpp + LDAKJFBJJII_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LDAKJFBJJII_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LDAKJFBJJII_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
