#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/LJGLDDODIOD.h"
#include "unitysdk/System/ValueType.h"

class AMDOKGKKMEO;
class CCGKLCKJFPH;
class FPKMCDJIKEB;
class GHBIDFBNIKN;
class KIDLMLLKAPF;
class MDLKEKANMHL;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GHBIDFBNIKN_AGJEDFJPOAH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x682CE0)
#define GHBIDFBNIKN_AGJEDFJPOAH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GHBIDFBNIKN_AGJEDFJPOAH_TypeDefinitionIndex = 47302;

struct alignas(8) GHBIDFBNIKN_AGJEDFJPOAH
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::AMDOKGKKMEO* IHBHCHBPGNP; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::LJGLDDODIOD> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x10];
	::System::Object* FMLHNIOPKPA; // 0x48
	::System::Byte _padding2[0x10];
	::MDLKEKANMHL* EBFFJCPAPGL; // 0x60
	::FPKMCDJIKEB* KCDGPMPEPBC; // 0x68
	::System::String* INHDAAAMAAL; // 0x70
	::CCGKLCKJFPH* EBALKHIEICC; // 0x78
	::GHBIDFBNIKN* KLHPEBKNIFB; // 0x80
	::System::Collections::Generic::List_1<::MDLKEKANMHL*>* JKNCJNGEAGD; // 0x88
	::System::Collections::Generic::List_1<::KIDLMLLKAPF*>* IHAEDIEGHDJ; // 0x90
	::System::Int32 MDPILDGFNHN; // 0x98
	::System::Int32 COMDNFILAIC; // 0x9C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_AGJEDFJPOAH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_AGJEDFJPOAH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
