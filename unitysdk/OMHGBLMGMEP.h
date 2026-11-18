#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHitData; }
namespace MoleMole::Config { class ConfigHitDatas; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMHGBLMGMEP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1294C710)
#define OMHGBLMGMEP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1294C620)
#define OMHGBLMGMEP_EIEPKNPEEJO_OFFSET UNITYSDK_OFFSET(0x1294C9A0)
#define OMHGBLMGMEP_JCKIMGDKLDP_OFFSET UNITYSDK_OFFSET(0x1294D010)
#define OMHGBLMGMEP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1294C5D0)
#define OMHGBLMGMEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1294C5C0)

inline static constexpr unsigned int OMHGBLMGMEP_TypeDefinitionIndex = 52051;

class OMHGBLMGMEP : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHitData*>** StaticGet_MPEOGHNDMEJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHitData*>**)Il2CppClass::FromTypeDefinitionIndex(OMHGBLMGMEP_TypeDefinitionIndex)->GetStaticField(0x4C930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMHGBLMGMEP__CCTOR_OFFSET))();
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMHGBLMGMEP_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void EIEPKNPEEJO(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>* OONFKHDDCCI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHitDatas*>*))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_EIEPKNPEEJO_OFFSET))(OONFKHDDCCI);
	}

	static ::MoleMole::Config::ConfigHitData* JCKIMGDKLDP(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigHitData*(*)(::System::String*))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_JCKIMGDKLDP_OFFSET))(ANGLHCBLFNK);
	}
};
