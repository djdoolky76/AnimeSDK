#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DPIHIPFHAOE_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x12BDAF30)
#define DPIHIPFHAOE_CHMHIHFBENG_OFFSET UNITYSDK_OFFSET(0x12BDABD0)
#define DPIHIPFHAOE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x12BDB0D0)
#define DPIHIPFHAOE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x12BDB120)
#define DPIHIPFHAOE_LJACMOEPOEN_OFFSET UNITYSDK_OFFSET(0x12BDB250)
#define DPIHIPFHAOE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BDABC0)

inline static constexpr unsigned int DPIHIPFHAOE_TypeDefinitionIndex = 44558;

class DPIHIPFHAOE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectEntityDither** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigViewObjectEntityDither**)Il2CppClass::FromTypeDefinitionIndex(DPIHIPFHAOE_TypeDefinitionIndex)->GetStaticField(0x31620);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHIPFHAOE__CTOR_OFFSET))(this);
	}

	static ::System::Void CHMHIHFBENG(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_CHMHIHFBENG_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIHIPFHAOE_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigViewObjectEntityDither* LJACMOEPOEN()
	{
		return ((::MoleMole::Config::ConfigViewObjectEntityDither*(*)())((::PBYTE)hIl2Cpp + DPIHIPFHAOE_LJACMOEPOEN_OFFSET))();
	}
};
