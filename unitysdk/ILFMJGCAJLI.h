#pragma once
#include "unitysdk/unitysdk.h"
class JFJOPDOIKKC;
namespace RPG::GameCore { class TaskContext; }

#define ILFMJGCAJLI_CTOR_OFFSET UNITYSDK_OFFSET(0x164A2E40)
#define ILFMJGCAJLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164A2E70)

inline static constexpr unsigned int ILFMJGCAJLI_TypeDefinitionIndex = 53940;

	class ILFMJGCAJLI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JFJOPDOIKKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JFJOPDOIKKC*))((::PBYTE)hIl2Cpp + ILFMJGCAJLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFMJGCAJLI_ONTASKBEGIN_OFFSET))(this);
		}

	};
