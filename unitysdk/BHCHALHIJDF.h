#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvIsometricCameraSizeBlend; }
namespace RPG::GameCore { class TaskContext; }

#define BHCHALHIJDF_CTOR_OFFSET UNITYSDK_OFFSET(0x151E06C0)
#define BHCHALHIJDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x151E06F0)

inline static constexpr unsigned int BHCHALHIJDF_TypeDefinitionIndex = 53492;

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
