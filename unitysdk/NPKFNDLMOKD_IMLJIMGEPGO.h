#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPKFNDLMOKD_IMLJIMGEPGO__CTOR_OFFSET UNITYSDK_OFFSET(0x106C9180)

inline static constexpr unsigned int NPKFNDLMOKD_IMLJIMGEPGO_TypeDefinitionIndex = 68748;

class NPKFNDLMOKD_IMLJIMGEPGO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>* KBCNOHHDPEP; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_IMLJIMGEPGO__CTOR_OFFSET))(this);
	}
};
