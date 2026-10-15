#pragma once
#include "unitysdk/unitysdk.h"
class FHFCJKKKNLP;
class MPDIEABIDFI;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BECJPAKGDMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1630F2C0)
#define BECJPAKGDMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1630F3A0)
#define BECJPAKGDMA_FCDMJDNDEPJ_OFFSET UNITYSDK_OFFSET(0x1630FBF0)
#define BECJPAKGDMA_MEPINFCFGCN_OFFSET UNITYSDK_OFFSET(0x1630FA50)
#define BECJPAKGDMA_NJENMMGILAD_OFFSET UNITYSDK_OFFSET(0x1630FAC0)
#define BECJPAKGDMA_OFIEADMEENE_OFFSET UNITYSDK_OFFSET(0x1630F7B0)
#define BECJPAKGDMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1630F460)
#define BECJPAKGDMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1630F2F0)
#define BECJPAKGDMA_TICK_OFFSET UNITYSDK_OFFSET(0x1630F340)
#define BECJPAKGDMA__ONTASKBEGIN_B__6_1_OFFSET UNITYSDK_OFFSET(0x1630FDE0)
#define BECJPAKGDMA___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1630FDF0)

inline static constexpr unsigned int BECJPAKGDMA_TypeDefinitionIndex = 58159;

	class BECJPAKGDMA
	{
	public:
		::RPG::Client::Promises::Promise* FCCHOKACEBB; // 0x28
		::MPDIEABIDFI* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MPDIEABIDFI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MPDIEABIDFI*))((::PBYTE)hIl2Cpp + BECJPAKGDMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BECJPAKGDMA_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OFIEADMEENE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA_OFIEADMEENE_OFFSET))(this);
		}

		::System::Void MEPINFCFGCN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + BECJPAKGDMA_MEPINFCFGCN_OFFSET))(this, a1, a2);
		}

		::System::Void NJENMMGILAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA_NJENMMGILAD_OFFSET))(this);
		}

		::System::Void FCDMJDNDEPJ(::FHFCJKKKNLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHFCJKKKNLP*))((::PBYTE)hIl2Cpp + BECJPAKGDMA_FCDMJDNDEPJ_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA__ONTASKBEGIN_B__6_1_OFFSET))(this);
		}

		::System::Void __AsyncRequestFinishFinalAct_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECJPAKGDMA___ASYNCREQUESTFINISHFINALACT_B__7_0_OFFSET))(this);
		}

	};
