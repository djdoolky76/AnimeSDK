#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AENICMHEIBH;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_JGMCOBLGGDG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x707CB0)
#define AENICMHEIBH_JGMCOBLGGDG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_JGMCOBLGGDG_TypeDefinitionIndex = 85667;

struct alignas(8) AENICMHEIBH_JGMCOBLGGDG
{
	::AENICMHEIBH* KLHPEBKNIFB; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x10];
	::System::String* AIGHBBNDJLG; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::Collections::Generic::IList_1<::System::String*>* FEDKDBBFNPA; // 0x48
	::System::Int32 DMBMOMEKJFO; // 0x50
	::System::Int32 LEHABHCOMGH; // 0x54
	::UnityEngine::Quaternion GJNLCLDFFIN; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x68
	::System::Int32 EJFGMAHJMHK; // 0x6C
	::System::Boolean NFAPOKKDAEA; // 0x70
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 CKPGOKHECCH; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_JGMCOBLGGDG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_JGMCOBLGGDG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
