#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MNKAICOMNPK_AFKJFHBHPDD_OFFSET UNITYSDK_OFFSET(0xFA76C40)
#define MNKAICOMNPK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xFA76F10)
#define MNKAICOMNPK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xFA76E20)
#define MNKAICOMNPK_MGNKOKIHKII_OFFSET UNITYSDK_OFFSET(0xFA76720)
#define MNKAICOMNPK__CTOR_OFFSET UNITYSDK_OFFSET(0xFA76710)

inline static constexpr unsigned int MNKAICOMNPK_TypeDefinitionIndex = 38499;

class MNKAICOMNPK : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIAvatar** StaticGet_GPPLMGELPFG()
	{
		return (::MoleMole::Config::ConfigUIAvatar**)Il2CppClass::FromTypeDefinitionIndex(MNKAICOMNPK_TypeDefinitionIndex)->GetStaticField(0x51660);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNKAICOMNPK__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Color MGNKOKIHKII(::System::Int32 GGAANCEAGPM, ::System::String* EHKDNLKPOIH, ::System::String* CADNPJAOGDD)
	{
		return ((::UnityEngine::Color(*)(::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MNKAICOMNPK_MGNKOKIHKII_OFFSET))(GGAANCEAGPM, EHKDNLKPOIH, CADNPJAOGDD);
	}

	static ::MoleMole::Config::ConfigUIAvatar* AFKJFHBHPDD()
	{
		return ((::MoleMole::Config::ConfigUIAvatar*(*)())((::PBYTE)hIl2Cpp + MNKAICOMNPK_AFKJFHBHPDD_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MNKAICOMNPK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MNKAICOMNPK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
