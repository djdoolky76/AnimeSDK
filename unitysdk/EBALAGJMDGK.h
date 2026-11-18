#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EBALAGJMDGK_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x10F1A9E0)
#define EBALAGJMDGK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x10F1AA80)
#define EBALAGJMDGK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x10F1ACB0)
#define EBALAGJMDGK_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x10F1AA30)
#define EBALAGJMDGK_MHCGEOODJFO_OFFSET UNITYSDK_OFFSET(0x10F1A980)
#define EBALAGJMDGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F1A970)

inline static constexpr unsigned int EBALAGJMDGK_TypeDefinitionIndex = 42896;

class EBALAGJMDGK : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelShootGameConfig** StaticGet_FEBLFFPPDHF()
	{
		return (::MoleMole::Config::LevelShootGameConfig**)Il2CppClass::FromTypeDefinitionIndex(EBALAGJMDGK_TypeDefinitionIndex)->GetStaticField(0x3D9E0);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EBALAGJMDGK_TypeDefinitionIndex)->GetStaticField(0xE140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBALAGJMDGK__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::LevelShootGameConfig* MHCGEOODJFO()
	{
		return ((::MoleMole::Config::LevelShootGameConfig*(*)())((::PBYTE)hIl2Cpp + EBALAGJMDGK_MHCGEOODJFO_OFFSET))();
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBALAGJMDGK_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EBALAGJMDGK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBALAGJMDGK_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EBALAGJMDGK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
