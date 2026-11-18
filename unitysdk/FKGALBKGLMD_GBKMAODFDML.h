#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;
class FEKNDOFCGGA;
class FKGALBKGLMD;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKGALBKGLMD_GBKMAODFDML_HNGBGDLONAD_OFFSET UNITYSDK_OFFSET(0x15E6AB10)
#define FKGALBKGLMD_GBKMAODFDML__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6A9E0)

inline static constexpr unsigned int FKGALBKGLMD_GBKMAODFDML_TypeDefinitionIndex = 47428;

class FKGALBKGLMD_GBKMAODFDML : public ::System::Object
{
public:
	::FKGALBKGLMD* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Collections::Generic::List_1<::AMNHFJOBPKL*>*, ::System::Boolean>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_GBKMAODFDML__CTOR_OFFSET))(this);
	}

	::System::Void HNGBGDLONAD(::FEKNDOFCGGA* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::FEKNDOFCGGA*))((::PBYTE)hIl2Cpp + FKGALBKGLMD_GBKMAODFDML_HNGBGDLONAD_OFFSET))(this, LJBPECKCCEA);
	}
};
