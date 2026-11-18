#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEKANAFNEKG;
namespace MoleMole { class BallGameOptionsWidget02Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEKANAFNEKG_OJJOCBCBGPA_DOJFIPDMDDF_OFFSET UNITYSDK_OFFSET(0x1FEC2630)
#define AEKANAFNEKG_OJJOCBCBGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEC2620)

inline static constexpr unsigned int AEKANAFNEKG_OJJOCBCBGPA_TypeDefinitionIndex = 94994;

class AEKANAFNEKG_OJJOCBCBGPA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::BallGameOptionsWidget02Context*>* LJBPECKCCEA; // 0x10
	::AEKANAFNEKG* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_OJJOCBCBGPA__CTOR_OFFSET))(this);
	}

	::System::Void DOJFIPDMDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_OJJOCBCBGPA_DOJFIPDMDDF_OFFSET))(this);
	}
};
