#pragma once
#include "unitysdk/unitysdk.h"
class DGLBGFADHII;
namespace RPG::GameCore { class TaskContext; }

#define ONEBGBENGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x17D76F00)
#define ONEBGBENGLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D76F30)

inline static constexpr unsigned int ONEBGBENGLD_TypeDefinitionIndex = 56885;

	class ONEBGBENGLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DGLBGFADHII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DGLBGFADHII*))((::PBYTE)hIl2Cpp + ONEBGBENGLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEBGBENGLD_ONTASKBEGIN_OFFSET))(this);
		}

	};
