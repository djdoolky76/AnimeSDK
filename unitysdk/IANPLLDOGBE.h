#pragma once
#include "unitysdk/unitysdk.h"
class IPIMHIGNICC;
namespace RPG::GameCore { class TaskContext; }

#define IANPLLDOGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E220E0)
#define IANPLLDOGBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E22110)

inline static constexpr unsigned int IANPLLDOGBE_TypeDefinitionIndex = 52778;

	class IANPLLDOGBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IPIMHIGNICC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IPIMHIGNICC*))((::PBYTE)hIl2Cpp + IANPLLDOGBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANPLLDOGBE_ONTASKBEGIN_OFFSET))(this);
		}

	};
