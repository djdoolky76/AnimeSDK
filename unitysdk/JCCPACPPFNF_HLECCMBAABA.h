#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCCPACPPFNF;
namespace MoleMole { class UIRABExpTopTipsPopWindowController_Context; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JCCPACPPFNF_HLECCMBAABA_AOJALDOBNJM_OFFSET UNITYSDK_OFFSET(0x14A4D610)
#define JCCPACPPFNF_HLECCMBAABA_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x14A4D450)
#define JCCPACPPFNF_HLECCMBAABA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14A4D6F0)
#define JCCPACPPFNF_HLECCMBAABA_NIEADFOCLEC_OFFSET UNITYSDK_OFFSET(0x14A4D530)
#define JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14A4E450)
#define JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14A4E4B0)
#define JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14A4E460)
#define JCCPACPPFNF_HLECCMBAABA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A4D220)
#define JCCPACPPFNF_HLECCMBAABA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4D210)

inline static constexpr unsigned int JCCPACPPFNF_HLECCMBAABA_TypeDefinitionIndex = 48225;

class JCCPACPPFNF_HLECCMBAABA : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::System::Single>* ACPMKMMBGNE; // 0x10
	::MoleMole::UIRABExpTopTipsPopWindowController_Context* HBMGHPEPBNC; // 0x18
	::JCCPACPPFNF* KLHPEBKNIFB; // 0x20
	::System::Int32 OCCBNBGKDJO; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C
	::System::Int32 CCACOEBPNPI; // 0x30
	::System::Single EDKLHNHADOK; // 0x34
	::System::Single IDBEJJEKGDI; // 0x38
	::System::Int32 HPFNLINGIAB; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void NIEADFOCLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_NIEADFOCLEC_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_JPCPBBAMDGJ_OFFSET))(this);
	}

	::System::Void AOJALDOBNJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_HLECCMBAABA_AOJALDOBNJM_OFFSET))(this);
	}
};
