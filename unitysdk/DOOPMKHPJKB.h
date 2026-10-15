#pragma once
#include "unitysdk/unitysdk.h"
class LDFNFDPHFKG;
namespace RPG::GameCore { class TaskContext; }

#define DOOPMKHPJKB_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEF330)
#define DOOPMKHPJKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FEF370)
#define DOOPMKHPJKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FEF3B0)

inline static constexpr unsigned int DOOPMKHPJKB_TypeDefinitionIndex = 53868;

	class DOOPMKHPJKB
	{
	public:
		::System::Int32 APNGJPMPMOB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDFNFDPHFKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDFNFDPHFKG*))((::PBYTE)hIl2Cpp + DOOPMKHPJKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOPMKHPJKB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOPMKHPJKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
