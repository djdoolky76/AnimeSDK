#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HANMOFEJCIM_BLINLECJGPA_OFFSET UNITYSDK_OFFSET(0x17A326E0)
#define HANMOFEJCIM_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x17A32A70)
#define HANMOFEJCIM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x17A32650)
#define HANMOFEJCIM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x17A32B90)
#define HANMOFEJCIM_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x17A32D40)
#define HANMOFEJCIM_LMFINNMOPIL_OFFSET UNITYSDK_OFFSET(0x17A32F30)
#define HANMOFEJCIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A32640)

inline static constexpr unsigned int HANMOFEJCIM_TypeDefinitionIndex = 71545;

class HANMOFEJCIM : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_NGFHKHLKEHD()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(HANMOFEJCIM_TypeDefinitionIndex)->GetStaticField(0x30AB0);
	}
	static ::System::Boolean* StaticGet_PDCKFOJBBCI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HANMOFEJCIM_TypeDefinitionIndex)->GetStaticField(0xA4A0);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HANMOFEJCIM_TypeDefinitionIndex)->GetStaticField(0xA4A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMOFEJCIM__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HANMOFEJCIM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMOFEJCIM_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + HANMOFEJCIM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANMOFEJCIM_HDLGEDBNEIP_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboard* LMFINNMOPIL()
	{
		return ((::MoleMole::Config::ConfigHollowChessboard*(*)())((::PBYTE)hIl2Cpp + HANMOFEJCIM_LMFINNMOPIL_OFFSET))();
	}

	static ::System::Void BLINLECJGPA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HANMOFEJCIM_BLINLECJGPA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
