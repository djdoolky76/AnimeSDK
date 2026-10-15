#pragma once
#include "unitysdk/unitysdk.h"
class DPCPNMNFKKK;
namespace RPG::GameCore { class TaskContext; }

#define AGBOCDFKLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF25B50)
#define AGBOCDFKLBJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF25B80)

inline static constexpr unsigned int AGBOCDFKLBJ_TypeDefinitionIndex = 52999;

	class AGBOCDFKLBJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DPCPNMNFKKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DPCPNMNFKKK*))((::PBYTE)hIl2Cpp + AGBOCDFKLBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBOCDFKLBJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
