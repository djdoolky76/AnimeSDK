#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PPAAHJMDPAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJGPCLPIMCK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1268B020)
#define KJGPCLPIMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1268AFA0)

inline static constexpr unsigned int KJGPCLPIMCK_TypeDefinitionIndex = 42024;

class KJGPCLPIMCK : public ::System::Object
{
public:
	::PPAAHJMDPAO* KOLCCIGOOHD; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JBEBBNGCJAL; // 0x18
	::System::Single PFPNPKNBNFI; // 0x20
	::System::Boolean JLAGALIPMII; // 0x24
	::System::Boolean MDBADEIBHDI; // 0x25
	::System::Byte _padding0[0x2];
	::System::Int32 DJKBAHHKCEE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGPCLPIMCK__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJGPCLPIMCK_NPOLNFDBOOD_OFFSET))(this);
	}
};
