#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KFJAJPBELNL_BLILJDONHKD_OFFSET UNITYSDK_OFFSET(0x157E8700)
#define KFJAJPBELNL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x157E8B40)
#define KFJAJPBELNL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x157E8A50)
#define KFJAJPBELNL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x157E8D60)

inline static constexpr unsigned int KFJAJPBELNL_TypeDefinitionIndex = 66248;

class KFJAJPBELNL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigExQTE** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigExQTE**)Il2CppClass::FromTypeDefinitionIndex(KFJAJPBELNL_TypeDefinitionIndex)->GetStaticField(0x51560);
	}

	static ::System::Single BLILJDONHKD(::System::Int32 BFJDCCPPIBB)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + KFJAJPBELNL_BLILJDONHKD_OFFSET))(BFJDCCPPIBB);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KFJAJPBELNL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigExQTE* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigExQTE*(*)())((::PBYTE)hIl2Cpp + KFJAJPBELNL_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KFJAJPBELNL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
