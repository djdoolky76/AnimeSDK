#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHNKKOFJBA.h"
#include "unitysdk/CJEFEPMHEEH.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
class NKEGAKMNAGM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKEGAKMNAGM_LPODMNMLKPA_CMFNMGBHMLG_OFFSET UNITYSDK_OFFSET(0x1AE268A0)
#define NKEGAKMNAGM_LPODMNMLKPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE26890)

inline static constexpr unsigned int NKEGAKMNAGM_LPODMNMLKPA_TypeDefinitionIndex = 82172;

class NKEGAKMNAGM_LPODMNMLKPA : public ::System::Object
{
public:
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EOFMKOGLAFI; // 0x18
	::System::String* CNGIJADJIAB; // 0x20
	::CGHNKKOFJBA HICJKOGKLOK; // 0x28
	::MoleMole::Battle::Entity* KMHICJLIECP; // 0x48
	::System::Action_1<::DPFMDEBJEMG*>* EJGDHCIBCJH; // 0x50
	::CJEFEPMHEEH DFMKILICPFB; // 0x58
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x60
	::System::Int32 OPCELBOCIDJ; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_LPODMNMLKPA__CTOR_OFFSET))(this);
	}

	::System::Boolean CMFNMGBHMLG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_LPODMNMLKPA_CMFNMGBHMLG_OFFSET))(this);
	}
};
