#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class CHFJLNEHAAF_MECJIOLGNHG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CHFJLNEHAAF_OKBAJKCGEMI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6533C0)
#define CHFJLNEHAAF_OKBAJKCGEMI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CHFJLNEHAAF_OKBAJKCGEMI_TypeDefinitionIndex = 87339;

struct alignas(8) CHFJLNEHAAF_OKBAJKCGEMI
{
	::CHFJLNEHAAF_MECJIOLGNHG* PGDOJBDJBOL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::System::String* OLOMNNBBHPJ; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> IELMICFKAAI; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CNKKDKEAEHG; // 0x40
	::System::Single DBOOIOLEPOJ; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_OKBAJKCGEMI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_OKBAJKCGEMI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
