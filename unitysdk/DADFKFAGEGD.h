#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DADFKFAGEGD_AJHAMNHPLLC_OFFSET UNITYSDK_OFFSET(0x13E25EF0)
#define DADFKFAGEGD_BKPGPMHOPBH_OFFSET UNITYSDK_OFFSET(0x13E25B40)
#define DADFKFAGEGD_BODLFKADCKK_OFFSET UNITYSDK_OFFSET(0x13E268F0)
#define DADFKFAGEGD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13E261C0)
#define DADFKFAGEGD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x13E267E0)
#define DADFKFAGEGD_ONGEIFENBHM_OFFSET UNITYSDK_OFFSET(0x13E26520)
#define DADFKFAGEGD__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E25AA0)

inline static constexpr unsigned int DADFKFAGEGD_TypeDefinitionIndex = 64249;

class DADFKFAGEGD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>** StaticGet_MNHAEDMDHFE()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(DADFKFAGEGD_TypeDefinitionIndex)->GetStaticField(0x4E270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADFKFAGEGD__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::ConfigShaderCustomBase* BKPGPMHOPBH(::MoleMole::Config::ShaderCustomType ABIEPJBODMH, ::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::MoleMole::Config::ShaderCustomType, ::System::String*))((::PBYTE)hIl2Cpp + DADFKFAGEGD_BKPGPMHOPBH_OFFSET))(ABIEPJBODMH, MCOHLHMKLIP);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>* AJHAMNHPLLC(::MoleMole::Config::ShaderCustomType ABIEPJBODMH)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*(*)(::MoleMole::Config::ShaderCustomType))((::PBYTE)hIl2Cpp + DADFKFAGEGD_AJHAMNHPLLC_OFFSET))(ABIEPJBODMH);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DADFKFAGEGD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DADFKFAGEGD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void ONGEIFENBHM(::MoleMole::Config::ShaderCustomType LEJHFCNHEBB)
	{
		return ((::System::Void(*)(::MoleMole::Config::ShaderCustomType))((::PBYTE)hIl2Cpp + DADFKFAGEGD_ONGEIFENBHM_OFFSET))(LEJHFCNHEBB);
	}

	static ::System::Void BODLFKADCKK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADFKFAGEGD_BODLFKADCKK_OFFSET))();
	}
};
