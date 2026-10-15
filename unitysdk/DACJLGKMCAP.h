#pragma once
#include "unitysdk/unitysdk.h"
class JKMBAJLFMIP;
namespace RPG::GameCore { class TaskContext; }

#define DACJLGKMCAP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBC940)
#define DACJLGKMCAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFBC970)

inline static constexpr unsigned int DACJLGKMCAP_TypeDefinitionIndex = 52460;

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
