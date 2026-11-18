#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FCLKKMBBOIB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x191AEF70)
#define FCLKKMBBOIB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x191AED50)
#define FCLKKMBBOIB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x191AF150)
#define FCLKKMBBOIB_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x191AF240)
#define FCLKKMBBOIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x191AED40)
#define FCLKKMBBOIB__CTOR_OFFSET UNITYSDK_OFFSET(0x191AED30)

inline static constexpr unsigned int FCLKKMBBOIB_TypeDefinitionIndex = 64059;

class FCLKKMBBOIB : public ::System::Object
{
public:
	static ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::AvatarScriptAndAnimOverrideConfig**)Il2CppClass::FromTypeDefinitionIndex(FCLKKMBBOIB_TypeDefinitionIndex)->GetStaticField(0x4F450);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLKKMBBOIB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLKKMBBOIB__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FCLKKMBBOIB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*(*)())((::PBYTE)hIl2Cpp + FCLKKMBBOIB_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FCLKKMBBOIB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*))((::PBYTE)hIl2Cpp + FCLKKMBBOIB_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}
};
