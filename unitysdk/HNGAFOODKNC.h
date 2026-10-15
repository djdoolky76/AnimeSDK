#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByHaveObstacle; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define HNGAFOODKNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D93860)
#define HNGAFOODKNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D930E0)
#define HNGAFOODKNC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D93270)

	class HNGAFOODKNC
	{
	public:
		::UnityEngine::Transform* HKJLKMCDMGB; // 0x28
		::UnityEngine::Transform* LPAHJLLOJJP; // 0x30
		::UnityEngine::Transform* IBLBKLNHKLL; // 0x38
		::UnityEngine::Transform* PBAHKJBADEO; // 0x40
		static ::System::Int32* StaticGet_GBFKGJFHEDM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HNGAFOODKNC")->GetStaticField(0xA740);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveObstacle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveObstacle*))((::PBYTE)hIl2Cpp + HNGAFOODKNC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNGAFOODKNC_CCTOR_OFFSET))();
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGAFOODKNC_EVALUATE_OFFSET))(this);
		}

	};
