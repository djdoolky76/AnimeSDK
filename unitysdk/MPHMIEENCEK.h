#pragma once
#include "unitysdk/unitysdk.h"
class LLPBGGCAJEI;
namespace RPG::GameCore { class TaskContext; }

#define MPHMIEENCEK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FD760)
#define MPHMIEENCEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2FD790)

inline static constexpr unsigned int MPHMIEENCEK_TypeDefinitionIndex = 53807;

	class MPHMIEENCEK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLPBGGCAJEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLPBGGCAJEI*))((::PBYTE)hIl2Cpp + MPHMIEENCEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHMIEENCEK_ONTASKBEGIN_OFFSET))(this);
		}

	};
