#pragma once
#include "unitysdk/unitysdk.h"
class JFFKHEHMDJE;
namespace RPG::GameCore { class TaskContext; }

#define FKCGNFBLPNN_CTOR_OFFSET UNITYSDK_OFFSET(0x157DB3C0)
#define FKCGNFBLPNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157DB3F0)

inline static constexpr unsigned int FKCGNFBLPNN_TypeDefinitionIndex = 58211;

	class FKCGNFBLPNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JFFKHEHMDJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JFFKHEHMDJE*))((::PBYTE)hIl2Cpp + FKCGNFBLPNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCGNFBLPNN_ONTASKBEGIN_OFFSET))(this);
		}

	};
