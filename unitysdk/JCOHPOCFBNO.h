#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPCEGPPIACB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCOHPOCFBNO__CTOR_OFFSET UNITYSDK_OFFSET(0x161155C0)

inline static constexpr unsigned int JCOHPOCFBNO_TypeDefinitionIndex = 9876;

class JCOHPOCFBNO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KLBBEKOIIBH; // 0x10
	::System::Collections::Generic::List_1<::GPCEGPPIACB*>* AJCHMFCGFEE; // 0x18
	::System::Int32 KEDBFHFLBHI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOHPOCFBNO__CTOR_OFFSET))(this);
	}
};
