#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EFGJHIPLCHG_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1613FC90)
#define EFGJHIPLCHG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1613F100)
#define EFGJHIPLCHG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1613FBA0)
#define EFGJHIPLCHG_JLJCJLJIENH_OFFSET UNITYSDK_OFFSET(0x1613F6F0)
#define EFGJHIPLCHG_PEKDKDPBDMD_1_OFFSET UNITYSDK_OFFSET(0x1613F2C0)
#define EFGJHIPLCHG_PEKDKDPBDMD_OFFSET UNITYSDK_OFFSET(0x1613EBE0)

inline static constexpr unsigned int EFGJHIPLCHG_TypeDefinitionIndex = 73541;

class EFGJHIPLCHG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigEntityUnderlyingAnimEvents**)Il2CppClass::FromTypeDefinitionIndex(EFGJHIPLCHG_TypeDefinitionIndex)->GetStaticField(0x45F90);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* PEKDKDPBDMD(::MoleMole::Config::BuffGroupName EPIDDDEJJDE, ::MoleMole::Config::BuffAttackPropertType AEFOBFECABN, ::System::Int32 GBEDMEDDNOL)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_PEKDKDPBDMD_OFFSET))(EPIDDDEJJDE, AEFOBFECABN, GBEDMEDDNOL);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* PEKDKDPBDMD_1(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_PEKDKDPBDMD_1_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Config::ConfigEntityAttackProperty* JLJCJLJIENH(::MoleMole::Config::BuffGroupName EPIDDDEJJDE, ::MoleMole::Config::BuffAttackPropertType AEFOBFECABN, ::System::Int32 GBEDMEDDNOL)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_JLJCJLJIENH_OFFSET))(EPIDDDEJJDE, AEFOBFECABN, GBEDMEDDNOL);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*(*)())((::PBYTE)hIl2Cpp + EFGJHIPLCHG_COPIDBEMEIE_OFFSET))();
	}
};
