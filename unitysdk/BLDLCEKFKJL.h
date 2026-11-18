#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BLDLCEKFKJL_BLINLECJGPA_OFFSET UNITYSDK_OFFSET(0x115F8710)
#define BLDLCEKFKJL_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x115F8A70)
#define BLDLCEKFKJL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x115F86C0)
#define BLDLCEKFKJL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x115F8590)
#define BLDLCEKFKJL_LCJMMAGEKDA_OFFSET UNITYSDK_OFFSET(0x115F8C10)

inline static constexpr unsigned int BLDLCEKFKJL_TypeDefinitionIndex = 69003;

class BLDLCEKFKJL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowPlayer** StaticGet_OPNDAFJCFLC()
	{
		return (::MoleMole::Config::ConfigHollowPlayer**)Il2CppClass::FromTypeDefinitionIndex(BLDLCEKFKJL_TypeDefinitionIndex)->GetStaticField(0x401C0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDLCEKFKJL_CCGLEFMABEA_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowPlayer* LCJMMAGEKDA()
	{
		return ((::MoleMole::Config::ConfigHollowPlayer*(*)())((::PBYTE)hIl2Cpp + BLDLCEKFKJL_LCJMMAGEKDA_OFFSET))();
	}

	static ::System::Void BLINLECJGPA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BLDLCEKFKJL_BLINLECJGPA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
