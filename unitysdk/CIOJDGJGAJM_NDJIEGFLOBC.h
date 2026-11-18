#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIOJDGJGAJM_NDJIEGFLOBC__CTOR_OFFSET UNITYSDK_OFFSET(0x159DD110)

inline static constexpr unsigned int CIOJDGJGAJM_NDJIEGFLOBC_TypeDefinitionIndex = 80594;

class CIOJDGJGAJM_NDJIEGFLOBC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* GPAOEGOJHDA; // 0x10
	::System::Int32 DOPEGEEFMLP; // 0x18

	::System::Void _ctor(::System::Int32 JFONAFOLLKC, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_NDJIEGFLOBC__CTOR_OFFSET))(this, JFONAFOLLKC, IBNICCGMILF);
	}
};
