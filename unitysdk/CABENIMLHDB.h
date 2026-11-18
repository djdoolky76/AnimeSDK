#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace MoleMole::Config { class DynamicObjectEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CABENIMLHDB_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x16937260)
#define CABENIMLHDB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16936FD0)
#define CABENIMLHDB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x169375F0)
#define CABENIMLHDB_HJBNAAILLDE_OFFSET UNITYSDK_OFFSET(0x169376E0)
#define CABENIMLHDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16936FC0)

inline static constexpr unsigned int CABENIMLHDB_TypeDefinitionIndex = 83732;

class CABENIMLHDB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicObjectEntry*>** StaticGet_PCDAMLFNJJI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicObjectEntry*>**)Il2CppClass::FromTypeDefinitionIndex(CABENIMLHDB_TypeDefinitionIndex)->GetStaticField(0x45CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABENIMLHDB__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CABENIMLHDB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>* DJGOOALFABM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicObjectRegistry*>*))((::PBYTE)hIl2Cpp + CABENIMLHDB_BBAECOMOFLL_OFFSET))(DJGOOALFABM);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CABENIMLHDB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::DynamicObjectEntry* HJBNAAILLDE(::System::String* KEGJECMIADD)
	{
		return ((::MoleMole::Config::DynamicObjectEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + CABENIMLHDB_HJBNAAILLDE_OFFSET))(KEGJECMIADD);
	}
};
