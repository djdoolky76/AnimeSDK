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

#define NKEGAKMNAGM_FOEFIJOFIFO_JFLBNPMOAIA_OFFSET UNITYSDK_OFFSET(0x1315C9A0)
#define NKEGAKMNAGM_FOEFIJOFIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1315C990)

inline static constexpr unsigned int NKEGAKMNAGM_FOEFIJOFIFO_TypeDefinitionIndex = 82162;

class NKEGAKMNAGM_FOEFIJOFIFO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* EOFMKOGLAFI; // 0x10
	::CGHNKKOFJBA HICJKOGKLOK; // 0x18
	::System::Action_1<::DPFMDEBJEMG*>* EJGDHCIBCJH; // 0x38
	::System::String* CNGIJADJIAB; // 0x40
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x48
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x50
	::CJEFEPMHEEH DFMKILICPFB; // 0x54
	::System::Int32 OPCELBOCIDJ; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FOEFIJOFIFO__CTOR_OFFSET))(this);
	}

	::System::Boolean JFLBNPMOAIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_FOEFIJOFIFO_JFLBNPMOAIA_OFFSET))(this);
	}
};
