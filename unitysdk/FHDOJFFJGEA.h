#pragma once
#include "unitysdk/unitysdk.h"
class LIMGBAHNNIK;
namespace RPG::GameCore { class TaskContext; }

#define FHDOJFFJGEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1576A1A0)
#define FHDOJFFJGEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1576A1D0)

inline static constexpr unsigned int FHDOJFFJGEA_TypeDefinitionIndex = 54955;

	class FHDOJFFJGEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LIMGBAHNNIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LIMGBAHNNIK*))((::PBYTE)hIl2Cpp + FHDOJFFJGEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDOJFFJGEA_ONTASKBEGIN_OFFSET))(this);
		}

	};
