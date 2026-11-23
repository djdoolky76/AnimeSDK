#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Core/ChessSeed.h"
#include "unitysdk/F5B377BE177AA795.h"
#include "unitysdk/System/ValueType.h"

class AE193B57F61D42AA;
class E5A17C5C5C4C54BE;
class F302060E5B9BB704;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B3A5E286F89C42CD_A4132D741E4797E7_OFFSET UNITYSDK_OFFSET(0x250F490)
#define B3A5E286F89C42CD_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x250F6E0)
#define B3A5E286F89C42CD_FFB1F2921D3A794F_OFFSET UNITYSDK_OFFSET(0x250F760)

inline static constexpr unsigned int B3A5E286F89C42CD_TypeDefinitionIndex = 5186;

struct alignas(8) B3A5E286F89C42CD
{
	::System::UInt32 E306E6C437580E2C; // 0x10
	::System::UInt32 ED9ED2334319A7E8; // 0x14
	::F5B377BE177AA795 AE248E2B1C0304F7; // 0x18
	::ABC::Core::ChessSeed E61547164FA044AC; // 0x20
	::F302060E5B9BB704* BFA79707CC4E2AA8; // 0x30
	::F302060E5B9BB704* F96EFF77817A6E90; // 0x38
	::System::Collections::Generic::List_1<::E5A17C5C5C4C54BE*>* F2AA720074368075; // 0x40
	::System::Collections::Generic::List_1<::AE193B57F61D42AA*>* F6A6E774DE949EAC; // 0x48
	::System::Collections::Generic::List_1<::AE193B57F61D42AA*>* B8DC8D5330A55C70; // 0x50
	::System::Boolean F51CB75B8B9CB0D6; // 0x58

	::System::Void FFB1F2921D3A794F(::System::Collections::Generic::List_1<::E5A17C5C5C4C54BE*>* ABDCC80A1D2CA670)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::E5A17C5C5C4C54BE*>*))((::PBYTE)hIl2Cpp + B3A5E286F89C42CD_FFB1F2921D3A794F_OFFSET))(this, ABDCC80A1D2CA670);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A5E286F89C42CD_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::String* A4132D741E4797E7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B3A5E286F89C42CD_A4132D741E4797E7_OFFSET))(this);
	}
};
