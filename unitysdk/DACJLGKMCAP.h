#pragma once
#include "unitysdk/unitysdk.h"
class JKMBAJLFMIP;
namespace RPG::GameCore { class TaskContext; }

#define DACJLGKMCAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1993DCA0)
#define DACJLGKMCAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1993DCD0)

inline static constexpr unsigned int DACJLGKMCAP_TypeDefinitionIndex = 53566;

	class DACJLGKMCAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JKMBAJLFMIP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JKMBAJLFMIP*))((::PBYTE)hIl2Cpp + DACJLGKMCAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACJLGKMCAP_ONTASKBEGIN_OFFSET))(this);
		}

	};
