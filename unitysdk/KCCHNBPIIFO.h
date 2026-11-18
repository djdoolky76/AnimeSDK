#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuffMisc; }
namespace MoleMole::Config { class ConfigFrozenBuff; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KCCHNBPIIFO_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1763A8C0)
#define KCCHNBPIIFO_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1763AE30)
#define KCCHNBPIIFO_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1763AD40)
#define KCCHNBPIIFO_HKJPIEHIDBI_OFFSET UNITYSDK_OFFSET(0x1763AAA0)
#define KCCHNBPIIFO_JPCFEPGKIPM_OFFSET UNITYSDK_OFFSET(0x1763B040)
#define KCCHNBPIIFO_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1763A8B0)

inline static constexpr unsigned int KCCHNBPIIFO_TypeDefinitionIndex = 51636;

class KCCHNBPIIFO : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBuffMisc** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigBuffMisc**)Il2CppClass::FromTypeDefinitionIndex(KCCHNBPIIFO_TypeDefinitionIndex)->GetStaticField(0x45B70);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigBuffMisc* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBuffMisc*))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::Config::ConfigBuffMisc* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigBuffMisc*(*)())((::PBYTE)hIl2Cpp + KCCHNBPIIFO_COPIDBEMEIE_OFFSET))();
	}

	static ::MoleMole::Config::ConfigFrozenBuff* HKJPIEHIDBI(::MoleMole::Config::EVariantElement NNPGBCPDJCB)
	{
		return ((::MoleMole::Config::ConfigFrozenBuff*(*)(::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_HKJPIEHIDBI_OFFSET))(NNPGBCPDJCB);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Single JPCFEPGKIPM(::MoleMole::Config::DamageElementType HELLOIIPKGF, ::MoleMole::Config::EVariantElement CCAGLDOOPGP)
	{
		return ((::System::Single(*)(::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement))((::PBYTE)hIl2Cpp + KCCHNBPIIFO_JPCFEPGKIPM_OFFSET))(HELLOIIPKGF, CCAGLDOOPGP);
	}
};
