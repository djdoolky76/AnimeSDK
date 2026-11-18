#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPMEKIGICIL_FNELODLNFEJ_INEFHNEAOFN_OFFSET UNITYSDK_OFFSET(0x123D7880)
#define CPMEKIGICIL_FNELODLNFEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x123D7870)

inline static constexpr unsigned int CPMEKIGICIL_FNELODLNFEJ_TypeDefinitionIndex = 83467;

class CPMEKIGICIL_FNELODLNFEJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GMNKOAKLJCE; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::System::UInt32>*>* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_FNELODLNFEJ__CTOR_OFFSET))(this);
	}

	::System::Void INEFHNEAOFN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_FNELODLNFEJ_INEFHNEAOFN_OFFSET))(this, PIIPCLCCOIG);
	}
};
