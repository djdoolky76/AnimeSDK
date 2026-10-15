#pragma once
#include "unitysdk/unitysdk.h"
class OEAFCNFNPBP;
namespace RPG::GameCore { class TaskContext; }

#define GKLJHHBODGL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95A80)
#define GKLJHHBODGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A95AB0)
#define GKLJHHBODGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A95AF0)
#define GKLJHHBODGL_TICK_OFFSET UNITYSDK_OFFSET(0x15A95BA0)

inline static constexpr unsigned int GKLJHHBODGL_TypeDefinitionIndex = 53334;

	class GKLJHHBODGL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OEAFCNFNPBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OEAFCNFNPBP*))((::PBYTE)hIl2Cpp + GKLJHHBODGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJHHBODGL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLJHHBODGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKLJHHBODGL_TICK_OFFSET))(this, a1);
		}

	};
