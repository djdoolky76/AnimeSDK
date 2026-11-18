#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKCNMHNKALM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0xF79E3E0)
#define BKCNMHNKALM_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0xF79E330)
#define BKCNMHNKALM_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0xF79E160)
#define BKCNMHNKALM_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0xF79E280)
#define BKCNMHNKALM_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0xF79E430)
#define BKCNMHNKALM__CTOR_OFFSET UNITYSDK_OFFSET(0xF79E0A0)

inline static constexpr unsigned int BKCNMHNKALM_TypeDefinitionIndex = 75998;

class BKCNMHNKALM : public ::System::Object
{
public:
	// static const ::System::Int32 BEPMDFENBMH = 0x20; // 0x0
	::System::Collections::Generic::List_1<::System::Action*>* AKGADLNFGGC; // 0x10
	::System::UInt32 KDOKMHKLHJG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCNMHNKALM__CTOR_OFFSET))(this);
	}

	::System::Void FLHNGDLANDC(::System::UInt32 EFMODEHHJJG, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + BKCNMHNKALM_FLHNGDLANDC_OFFSET))(this, EFMODEHHJJG, GJBHEJGENMI);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCNMHNKALM_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::UInt32 EFMODEHHJJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKCNMHNKALM_DKDJDEJHABH_OFFSET))(this, EFMODEHHJJG);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCNMHNKALM_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::System::UInt32 EFMODEHHJJG, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + BKCNMHNKALM_KKFNPONHGEM_OFFSET))(this, EFMODEHHJJG, GJBHEJGENMI);
	}
};
