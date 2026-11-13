#pragma once
#include "unitysdk/unitysdk.h"
class BPABHBPFOHO;
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LIFCDBLDNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x172DCCD0)
#define LIFCDBLDNMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172DCE50)
#define LIFCDBLDNMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172DD050)

inline static constexpr unsigned int LIFCDBLDNMD_TypeDefinitionIndex = 55063;

	class LIFCDBLDNMD
	{
	public:
		::GELIALJDFBL* FAECEMIGBBH; // 0x28
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x30
		::KFELGAIGHAP* DLJHJKLMADI; // 0x38
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
