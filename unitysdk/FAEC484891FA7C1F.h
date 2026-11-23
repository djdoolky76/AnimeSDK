#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAEC484891FA7C1F_B367BDF194384FE3_OFFSET UNITYSDK_OFFSET(0x1F5DF80)
#define FAEC484891FA7C1F_B74AD5BC2C5997B7_OFFSET UNITYSDK_OFFSET(0x1F5DD20)
#define FAEC484891FA7C1F_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1F5E190)
#define FAEC484891FA7C1F_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1F5DDA0)
#define FAEC484891FA7C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E200)

inline static constexpr unsigned int FAEC484891FA7C1F_TypeDefinitionIndex = 7822;

class FAEC484891FA7C1F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AE3662B7E25EE689; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* F493867F61404FE0; // 0x18

	::System::Void B367BDF194384FE3(::FAEC484891FA7C1F* BC9FBD2D496B5671)
	{
		return ((::System::Void(*)(::PVOID, ::FAEC484891FA7C1F*))((::PBYTE)hIl2Cpp + FAEC484891FA7C1F_B367BDF194384FE3_OFFSET))(this, BC9FBD2D496B5671);
	}

	::System::Void B74AD5BC2C5997B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEC484891FA7C1F_B74AD5BC2C5997B7_OFFSET))(this);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEC484891FA7C1F_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* F966A2C7F7E24640)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FAEC484891FA7C1F__CTOR_OFFSET))(this, F966A2C7F7E24640);
	}

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAEC484891FA7C1F_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}
};
