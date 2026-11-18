#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGJEMIBOFNI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HGJEMIBOFNI_PPLAOHEOCMM_BADHGEIOOEK_OFFSET UNITYSDK_OFFSET(0x14A0E000)
#define HGJEMIBOFNI_PPLAOHEOCMM_NFBFJEOOPKL_OFFSET UNITYSDK_OFFSET(0x14A0E050)
#define HGJEMIBOFNI_PPLAOHEOCMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A0DFF0)

inline static constexpr unsigned int HGJEMIBOFNI_PPLAOHEOCMM_TypeDefinitionIndex = 73668;

class HGJEMIBOFNI_PPLAOHEOCMM : public ::System::Object
{
public:
	::HGJEMIBOFNI* KLHPEBKNIFB; // 0x10
	::System::Action* JNCGLPCKKFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_PPLAOHEOCMM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* BADHGEIOOEK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_PPLAOHEOCMM_BADHGEIOOEK_OFFSET))(this);
	}

	::System::Void NFBFJEOOPKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_PPLAOHEOCMM_NFBFJEOOPKL_OFFSET))(this);
	}
};
