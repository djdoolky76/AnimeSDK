#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class MAGNDCFCLBM;

#define ADJNAJHAOHE_GFFONDFCADD_HLPKKGJLNFF_OFFSET UNITYSDK_OFFSET(0x17CB91D0)
#define ADJNAJHAOHE_GFFONDFCADD__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB91C0)

inline static constexpr unsigned int ADJNAJHAOHE_GFFONDFCADD_TypeDefinitionIndex = 41394;

class ADJNAJHAOHE_GFFONDFCADD : public ::System::Object
{
public:
	::System::Int32 GJOKHCLJFML; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_GFFONDFCADD__CTOR_OFFSET))(this);
	}

	::System::Boolean HLPKKGJLNFF(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MAGNDCFCLBM*> JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MAGNDCFCLBM*>))((::PBYTE)hIl2Cpp + ADJNAJHAOHE_GFFONDFCADD_HLPKKGJLNFF_OFFSET))(this, JNDDJMAHNAI);
	}
};
