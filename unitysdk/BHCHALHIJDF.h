#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvIsometricCameraSizeBlend; }
namespace RPG::GameCore { class TaskContext; }

#define BHCHALHIJDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB46EA30)
#define BHCHALHIJDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB46EA60)

inline static constexpr unsigned int BHCHALHIJDF_TypeDefinitionIndex = 52386;

	class BHCHALHIJDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricCameraSizeBlend* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricCameraSizeBlend*))((::PBYTE)hIl2Cpp + BHCHALHIJDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCHALHIJDF_ONTASKBEGIN_OFFSET))(this);
		}

	};
