#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopDitherClose; }
namespace RPG::GameCore { class TaskContext; }

#define DACOGOBGGEC_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB4C40)
#define DACOGOBGGEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFB4C70)

inline static constexpr unsigned int DACOGOBGGEC_TypeDefinitionIndex = 53295;

	class DACOGOBGGEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopDitherClose* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopDitherClose*))((::PBYTE)hIl2Cpp + DACOGOBGGEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACOGOBGGEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
