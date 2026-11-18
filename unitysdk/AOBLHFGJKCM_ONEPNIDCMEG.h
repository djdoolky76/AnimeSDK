#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILMFMBEMMFG;
class MCNGCOMDBFF;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AOBLHFGJKCM_ONEPNIDCMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD92B30)

inline static constexpr unsigned int AOBLHFGJKCM_ONEPNIDCMEG_TypeDefinitionIndex = 28926;

class AOBLHFGJKCM_ONEPNIDCMEG : public ::System::Object
{
public:
	::System::Action_1<::ILMFMBEMMFG*>* LJMIPGJJELP; // 0x10
	::System::Collections::Generic::Stack_1<::ILMFMBEMMFG*>* BKBFFBFGOID; // 0x18
	::System::Func_3<::MCNGCOMDBFF*, ::MCNGCOMDBFF*, ::ILMFMBEMMFG*>* COKNIICCODC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBLHFGJKCM_ONEPNIDCMEG__CTOR_OFFSET))(this);
	}
};
