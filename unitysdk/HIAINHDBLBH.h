#pragma once
#include "unitysdk/unitysdk.h"
class DAFKCJCPINC;
namespace RPG::GameCore { class TaskContext; }

#define HIAINHDBLBH_CTOR_OFFSET UNITYSDK_OFFSET(0x19028D00)
#define HIAINHDBLBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19028D30)

inline static constexpr unsigned int HIAINHDBLBH_TypeDefinitionIndex = 54026;

	class HIAINHDBLBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DAFKCJCPINC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DAFKCJCPINC*))((::PBYTE)hIl2Cpp + HIAINHDBLBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAINHDBLBH_ONTASKBEGIN_OFFSET))(this);
		}

	};
