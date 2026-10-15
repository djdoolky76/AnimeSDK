#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define OLNFHEPHLKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF0C140)
#define OLNFHEPHLKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF0C170)

inline static constexpr unsigned int OLNFHEPHLKG_TypeDefinitionIndex = 58530;

	class OLNFHEPHLKG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBillboardInfo*))((::PBYTE)hIl2Cpp + OLNFHEPHLKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNFHEPHLKG_ONTASKBEGIN_OFFSET))(this);
		}

	};
