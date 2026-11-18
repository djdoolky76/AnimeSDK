#pragma once
#include "unitysdk/unitysdk.h"

class ADJIPOGNOOM;
class AHLIJIKIOJD;
class OMDKBDFNDDP;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIAIDPIOCPP_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0x143A4D60)
#define AIAIDPIOCPP_DJJCINEHGAA_OFFSET UNITYSDK_OFFSET(0x143A4FB0)
#define AIAIDPIOCPP_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x143A4990)
#define AIAIDPIOCPP__CTOR_OFFSET UNITYSDK_OFFSET(0x143A48E0)

inline static constexpr unsigned int AIAIDPIOCPP_TypeDefinitionIndex = 88862;

class AIAIDPIOCPP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Foundation::ObjectPoolOfReusable_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*>*>* NFBOMGKLPHC; // 0x10
	::OMDKBDFNDDP* DKKDODBAJBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIAIDPIOCPP__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* OMPFLKCBFHF(::AHLIJIKIOJD* JNLBPMKIFNK, ::ADJIPOGNOOM* KDIFLDNHIMG, ::System::Int32 PCHPCLFBEAG)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::AHLIJIKIOJD*, ::ADJIPOGNOOM*, ::System::Int32))((::PBYTE)hIl2Cpp + AIAIDPIOCPP_OMPFLKCBFHF_OFFSET))(this, JNLBPMKIFNK, KDIFLDNHIMG, PCHPCLFBEAG);
	}

	::System::Void DABGFBDHOGD(::ADJIPOGNOOM* KDIFLDNHIMG, ::System::Int32 PCHPCLFBEAG, ::MoleMole::ChessStateMachine::StateMachineBaseAction* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::ADJIPOGNOOM*, ::System::Int32, ::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + AIAIDPIOCPP_DABGFBDHOGD_OFFSET))(this, KDIFLDNHIMG, PCHPCLFBEAG, GJBHEJGENMI);
	}

	::System::Void DJJCINEHGAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIAIDPIOCPP_DJJCINEHGAA_OFFSET))(this);
	}
};
