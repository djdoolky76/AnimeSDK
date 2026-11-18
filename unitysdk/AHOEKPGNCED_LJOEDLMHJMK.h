#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHOEKPGNCED_LJOEDLMHJMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15500250)

inline static constexpr unsigned int AHOEKPGNCED_LJOEDLMHJMK_TypeDefinitionIndex = 53469;

class AHOEKPGNCED_LJOEDLMHJMK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* OFJMAJBGEPC; // 0x10
	::System::Int32 DHNFOCPHHCE; // 0x18
	::System::Int32 MGMDLMBEDJF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_LJOEDLMHJMK__CTOR_OFFSET))(this);
	}
};
