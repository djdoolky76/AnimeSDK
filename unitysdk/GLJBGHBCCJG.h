#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLJBGHBCCJG_APOKBOMDHIB_OFFSET UNITYSDK_OFFSET(0x17A13B90)
#define GLJBGHBCCJG_DDAPKGAIKDJ_OFFSET UNITYSDK_OFFSET(0x17A13A00)
#define GLJBGHBCCJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A13970)

inline static constexpr unsigned int GLJBGHBCCJG_TypeDefinitionIndex = 42743;

class GLJBGHBCCJG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* EDHBPKEFCLJ; // 0x10
	::System::Single LDECLLHGGFM; // 0x18
	::System::Boolean MNFFDENNNOI; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Int32 ONIFEFHDKGP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJBGHBCCJG__CTOR_OFFSET))(this);
	}

	::System::Void DDAPKGAIKDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJBGHBCCJG_DDAPKGAIKDJ_OFFSET))(this);
	}

	::System::Boolean APOKBOMDHIB(::System::Single BEMODPLCCGM, ::System::Single NGNPAOLIJCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GLJBGHBCCJG_APOKBOMDHIB_OFFSET))(this, BEMODPLCCGM, NGNPAOLIJCM);
	}
};
