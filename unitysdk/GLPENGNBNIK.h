#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTarget; }
namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLPENGNBNIK_BJNEKLCGFMI_OFFSET UNITYSDK_OFFSET(0x10FEA7E0)
#define GLPENGNBNIK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x10FEA560)
#define GLPENGNBNIK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x10FEA470)
#define GLPENGNBNIK_OGBHANOKEGI_OFFSET UNITYSDK_OFFSET(0x10FE9CF0)
#define GLPENGNBNIK__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE9CE0)

inline static constexpr unsigned int GLPENGNBNIK_TypeDefinitionIndex = 86953;

class GLPENGNBNIK : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAbilityTarget*>** StaticGet_AAGEEJEJCEA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAbilityTarget*>**)Il2CppClass::FromTypeDefinitionIndex(GLPENGNBNIK_TypeDefinitionIndex)->GetStaticField(0x50870);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK__CTOR_OFFSET))(this);
	}

	static ::System::Void OGBHANOKEGI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>* PEGEHMFIPFD)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>*))((::PBYTE)hIl2Cpp + GLPENGNBNIK_OGBHANOKEGI_OFFSET))(PEGEHMFIPFD);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GLPENGNBNIK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigAbilityTarget* BJNEKLCGFMI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigAbilityTarget*(*)(::System::String*))((::PBYTE)hIl2Cpp + GLPENGNBNIK_BJNEKLCGFMI_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GLPENGNBNIK_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
