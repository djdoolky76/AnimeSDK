#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIDJIBPPNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x153AB090)

inline static constexpr unsigned int IIDJIBPPNDA_TypeDefinitionIndex = 72370;

class IIDJIBPPNDA : public ::System::Object
{
public:
	::System::String* AMEEMEPHGEL; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* FKFJANGCCLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDJIBPPNDA__CTOR_OFFSET))(this);
	}
};
