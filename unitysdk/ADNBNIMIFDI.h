#pragma once
#include "unitysdk/unitysdk.h"
class GCFBDNCBFIE;
namespace RPG::GameCore { class TaskContext; }

#define ADNBNIMIFDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB147120)
#define ADNBNIMIFDI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB147150)

inline static constexpr unsigned int ADNBNIMIFDI_TypeDefinitionIndex = 52840;

	class ADNBNIMIFDI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GCFBDNCBFIE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GCFBDNCBFIE*))((::PBYTE)hIl2Cpp + ADNBNIMIFDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNBNIMIFDI_ONTASKBEGIN_OFFSET))(this);
		}

	};
