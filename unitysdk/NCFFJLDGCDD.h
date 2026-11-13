#pragma once
#include "unitysdk/unitysdk.h"
class ACGNFELKLLJ;
namespace RPG::GameCore { class TaskContext; }

#define NCFFJLDGCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x150F8390)
#define NCFFJLDGCDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150F83D0)
#define NCFFJLDGCDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x150F8410)

inline static constexpr unsigned int NCFFJLDGCDD_TypeDefinitionIndex = 55315;

	class NCFFJLDGCDD
	{
	public:
		::System::Int32 APNGJPMPMOB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ACGNFELKLLJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ACGNFELKLLJ*))((::PBYTE)hIl2Cpp + NCFFJLDGCDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFJLDGCDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFJLDGCDD_ONTASKBEGIN_OFFSET))(this);
		}

	};
