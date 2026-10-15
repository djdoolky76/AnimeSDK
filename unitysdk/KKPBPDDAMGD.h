#pragma once
#include "unitysdk/unitysdk.h"
class JONKKMAJCAH;
namespace RPG::GameCore { class TaskContext; }

#define KKPBPDDAMGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4DA440)
#define KKPBPDDAMGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4DA470)

inline static constexpr unsigned int KKPBPDDAMGD_TypeDefinitionIndex = 55682;

	class KKPBPDDAMGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JONKKMAJCAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JONKKMAJCAH*))((::PBYTE)hIl2Cpp + KKPBPDDAMGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPBPDDAMGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
