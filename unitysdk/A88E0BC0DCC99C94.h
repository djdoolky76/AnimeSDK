#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Globalization { class CultureInfo; }
template <typename T> class F875E7A8F1781006;

#define A88E0BC0DCC99C94_A457BC12B6CF55CC_OFFSET UNITYSDK_OFFSET(0x3D3FAC0)
#define A88E0BC0DCC99C94_F698D4BCC10E0D2E_OFFSET UNITYSDK_OFFSET(0x3D3FAC0)
#define A88E0BC0DCC99C94__CTOR_OFFSET UNITYSDK_OFFSET(0x3D3FB30)

inline static constexpr unsigned int A88E0BC0DCC99C94_TypeDefinitionIndex = 10926;

class A88E0BC0DCC99C94 : public ::System::Object
{
public:
	::System::Globalization::CultureInfo* BC1FADB5CE43DE5F; // 0x10
	::System::Globalization::CultureInfo* E6F5E05D49FCA10A; // 0x18
	::System::Boolean BBD8677BD974DA0F; // 0x20

	::System::Void _ctor(::System::Globalization::CultureInfo* F8CFAFEE772C1EEF, ::System::Globalization::CultureInfo* B09DC91C29EF5CB7, ::System::Boolean A07F71F135E61EED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + A88E0BC0DCC99C94__CTOR_OFFSET))(this, F8CFAFEE772C1EEF, B09DC91C29EF5CB7, A07F71F135E61EED);
	}

	::F875E7A8F1781006<::System::Globalization::CultureInfo*>* F698D4BCC10E0D2E()
	{
		return ((::F875E7A8F1781006<::System::Globalization::CultureInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A88E0BC0DCC99C94_F698D4BCC10E0D2E_OFFSET))(this);
	}

	::System::Collections::IEnumerator* A457BC12B6CF55CC()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + A88E0BC0DCC99C94_A457BC12B6CF55CC_OFFSET))(this);
	}
};
