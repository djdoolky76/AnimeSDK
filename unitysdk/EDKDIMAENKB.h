#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EDKDIMAENKB_BLINLECJGPA_OFFSET UNITYSDK_OFFSET(0x15497BB0)
#define EDKDIMAENKB_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x154977E0)
#define EDKDIMAENKB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15497980)
#define EDKDIMAENKB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15497F10)
#define EDKDIMAENKB_DNMIHEGHHGJ_OFFSET UNITYSDK_OFFSET(0x154979D0)

inline static constexpr unsigned int EDKDIMAENKB_TypeDefinitionIndex = 51032;

class EDKDIMAENKB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowNpc** StaticGet_PLNIANHJAMO()
	{
		return (::MoleMole::Config::ConfigHollowNpc**)Il2CppClass::FromTypeDefinitionIndex(EDKDIMAENKB_TypeDefinitionIndex)->GetStaticField(0x4F430);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDKDIMAENKB_CCGLEFMABEA_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowNpc* DNMIHEGHHGJ()
	{
		return ((::MoleMole::Config::ConfigHollowNpc*(*)())((::PBYTE)hIl2Cpp + EDKDIMAENKB_DNMIHEGHHGJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EDKDIMAENKB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EDKDIMAENKB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void BLINLECJGPA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EDKDIMAENKB_BLINLECJGPA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
