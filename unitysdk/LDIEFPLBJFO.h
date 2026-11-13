#pragma once
#include "unitysdk/unitysdk.h"
class IOHAJALDJAD;
namespace RPG::GameCore { class TaskContext; }

#define LDIEFPLBJFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7E970)
#define LDIEFPLBJFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AC7E9A0)

inline static constexpr unsigned int LDIEFPLBJFO_TypeDefinitionIndex = 55999;

	class LDIEFPLBJFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IOHAJALDJAD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IOHAJALDJAD*))((::PBYTE)hIl2Cpp + LDIEFPLBJFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDIEFPLBJFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
