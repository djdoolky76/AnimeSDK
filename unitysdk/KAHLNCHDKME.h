#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KAHLNCHDKME_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19488BD0)
#define KAHLNCHDKME_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19488AE0)
#define KAHLNCHDKME_LNAPDEPBNIJ_OFFSET UNITYSDK_OFFSET(0x19488E00)

inline static constexpr unsigned int KAHLNCHDKME_TypeDefinitionIndex = 59477;

class KAHLNCHDKME : public ::System::Object
{
public:
	static ::MoleMole::ConfigUINewMap** StaticGet_KPAOKCFILIB()
	{
		return (::MoleMole::ConfigUINewMap**)Il2CppClass::FromTypeDefinitionIndex(KAHLNCHDKME_TypeDefinitionIndex)->GetStaticField(0x38130);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KAHLNCHDKME_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KAHLNCHDKME_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigUINewMap* LNAPDEPBNIJ()
	{
		return ((::MoleMole::ConfigUINewMap*(*)())((::PBYTE)hIl2Cpp + KAHLNCHDKME_LNAPDEPBNIJ_OFFSET))();
	}
};
