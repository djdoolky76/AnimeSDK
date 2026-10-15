#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define DOPGONOIPBC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x11FEF640)
#define DOPGONOIPBC_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0x11FEF5A0)
#define DOPGONOIPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FEF730)
#define DOPGONOIPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEF720)

inline static constexpr unsigned int DOPGONOIPBC_TypeDefinitionIndex = 57123;

	class DOPGONOIPBC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>** StaticGet_CEHKIFGGMGI()
		{
			return (::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>**)UnitySDK::FromName("", "DOPGONOIPBC")->GetStaticField(0x6F6B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPGONOIPBC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOPGONOIPBC_CCTOR_OFFSET))();
		}

		static ::System::Void AONEONHEHNA(::UnityEngine::AI::NavMeshPath* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + DOPGONOIPBC_AONEONHEHNA_OFFSET))(a1);
		}

		static ::UnityEngine::AI::NavMeshPath* ACMKLFOMPFC()
		{
			return ((::UnityEngine::AI::NavMeshPath*(*)())((::PBYTE)hIl2Cpp + DOPGONOIPBC_ACMKLFOMPFC_OFFSET))();
		}

	};
