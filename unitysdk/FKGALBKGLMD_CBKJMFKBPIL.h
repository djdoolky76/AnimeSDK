#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKGALBKGLMD_CBKJMFKBPIL_KMHAIPOEFAF_OFFSET UNITYSDK_OFFSET(0x10EBE700)
#define FKGALBKGLMD_CBKJMFKBPIL__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBE6F0)

inline static constexpr unsigned int FKGALBKGLMD_CBKJMFKBPIL_TypeDefinitionIndex = 47430;

class FKGALBKGLMD_CBKJMFKBPIL : public ::System::Object
{
public:
	::System::Action_2<::System::Collections::Generic::List_1<::AMNHFJOBPKL*>*, ::System::Boolean>* DKDBPEPKALE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGALBKGLMD_CBKJMFKBPIL__CTOR_OFFSET))(this);
	}

	::System::Void KMHAIPOEFAF(::System::Collections::Generic::List_1<::AMNHFJOBPKL*>* DJLOKMMLFJC, ::System::Boolean OKJFKOLJDBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AMNHFJOBPKL*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKGALBKGLMD_CBKJMFKBPIL_KMHAIPOEFAF_OFFSET))(this, DJLOKMMLFJC, OKJFKOLJDBJ);
	}
};
