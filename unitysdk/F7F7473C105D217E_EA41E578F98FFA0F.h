#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F7F7473C105D217E;
class F8501012BBF1DC7B;
namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F7F7473C105D217E_EA41E578F98FFA0F_A91C4CB4C83146C8_OFFSET UNITYSDK_OFFSET(0x2290010)
#define F7F7473C105D217E_EA41E578F98FFA0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F7F7473C105D217E_EA41E578F98FFA0F_TypeDefinitionIndex = 6970;

class F7F7473C105D217E_EA41E578F98FFA0F : public ::System::Object
{
public:
	::F7F7473C105D217E* A544919C800E2923; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F8501012BBF1DC7B*>* F8CC8D8F0EFA56A6; // 0x18
	::System::ADDF5F55A85EB950<::System::UInt32>* F422651CC4956382; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7F7473C105D217E_EA41E578F98FFA0F__CTOR_OFFSET))(this);
	}

	::System::Int32 A91C4CB4C83146C8(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + F7F7473C105D217E_EA41E578F98FFA0F_A91C4CB4C83146C8_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
