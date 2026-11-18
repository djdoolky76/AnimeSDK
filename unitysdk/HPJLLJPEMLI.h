#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPGAAMBIFKB;
class JCADHFOKIHK;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class String; }

#define HPJLLJPEMLI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xEBA3E10)
#define HPJLLJPEMLI__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA3E00)

inline static constexpr unsigned int HPJLLJPEMLI_TypeDefinitionIndex = 68029;

class HPJLLJPEMLI : public ::System::Object
{
public:
	::EPGAAMBIFKB* BPDJIPAHEAL; // 0x10
	::System::String* DPHONIJGNNP; // 0x18
	::JCADHFOKIHK* GIDOKJMPCEP; // 0x20
	::MoleMole::Config::ConfigEntityAttackProperty* LDMGKJACHAG; // 0x28
	::System::UInt32 DEDIHJAOPNI; // 0x30
	::System::UInt32 ABHBKFJKINO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJLLJPEMLI__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJLLJPEMLI_NPOLNFDBOOD_OFFSET))(this);
	}
};
