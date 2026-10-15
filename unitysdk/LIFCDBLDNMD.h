#pragma once
#include "unitysdk/unitysdk.h"
class BPABHBPFOHO;
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LIFCDBLDNMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C98E0)
#define LIFCDBLDNMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C9A60)
#define LIFCDBLDNMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C9C60)

inline static constexpr unsigned int LIFCDBLDNMD_TypeDefinitionIndex = 53899;

	class LIFCDBLDNMD
	{
	public:
		::GELIALJDFBL* FAECEMIGBBH; // 0x28
		::KFELGAIGHAP* DLJHJKLMADI; // 0x30
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BPABHBPFOHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BPABHBPFOHO*))((::PBYTE)hIl2Cpp + LIFCDBLDNMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFCDBLDNMD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFCDBLDNMD_ONTASKBEGIN_OFFSET))(this);
		}

	};
