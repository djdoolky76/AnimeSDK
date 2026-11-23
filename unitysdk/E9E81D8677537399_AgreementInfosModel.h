#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define E9E81D8677537399_AGREEMENTINFOSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_AgreementInfosModel_TypeDefinitionIndex = 11862;

class E9E81D8677537399_AgreementInfosModel : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* marketing_agreements; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_AGREEMENTINFOSMODEL__CTOR_OFFSET))(this);
	}
};
