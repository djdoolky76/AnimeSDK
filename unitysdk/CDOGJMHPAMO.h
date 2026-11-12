#pragma once
#include "unitysdk/unitysdk.h"
class LAKLECNFDGB;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CDOGJMHPAMO_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D93B0)
#define CDOGJMHPAMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD0D9490)
#define CDOGJMHPAMO_MEPINFCFGCN_OFFSET UNITYSDK_OFFSET(0xD0D97A0)
#define CDOGJMHPAMO_OFIEADMEENE_OFFSET UNITYSDK_OFFSET(0xD0D95A0)
#define CDOGJMHPAMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0D9550)
#define CDOGJMHPAMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD0D93E0)
#define CDOGJMHPAMO_TICK_OFFSET UNITYSDK_OFFSET(0xD0D9430)

inline static constexpr unsigned int CDOGJMHPAMO_TypeDefinitionIndex = 59416;

	class CDOGJMHPAMO
	{
	public:
		::RPG::Client::Promises::Promise* FCCHOKACEBB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LAKLECNFDGB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LAKLECNFDGB*))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OFIEADMEENE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_OFIEADMEENE_OFFSET))(this);
		}

		::System::Void MEPINFCFGCN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CDOGJMHPAMO_MEPINFCFGCN_OFFSET))(this, a1, a2);
		}

	};
