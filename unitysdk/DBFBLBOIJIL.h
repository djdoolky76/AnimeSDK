#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAraTrail; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBFBLBOIJIL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1498EE50)
#define DBFBLBOIJIL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1498ED40)
#define DBFBLBOIJIL_OKNNGMFOMOF_OFFSET UNITYSDK_OFFSET(0x1498F170)
#define DBFBLBOIJIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1498ECA0)

inline static constexpr unsigned int DBFBLBOIJIL_TypeDefinitionIndex = 75804;

class DBFBLBOIJIL : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAraTrail*>** StaticGet_MNHAEDMDHFE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigAraTrail*>**)Il2CppClass::FromTypeDefinitionIndex(DBFBLBOIJIL_TypeDefinitionIndex)->GetStaticField(0x31380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFBLBOIJIL__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigAraTrail* OKNNGMFOMOF(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigAraTrail*(*)(::System::String*))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_OKNNGMFOMOF_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
