#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define DOPGONOIPBC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x11FF4A70)
#define DOPGONOIPBC_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0x11FF49D0)
#define DOPGONOIPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FF4B60)
#define DOPGONOIPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF4B50)

	class DOPGONOIPBC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>** StaticGet_CEHKIFGGMGI()
		{
			return (::System::Collections::Generic::Queue_1<::UnityEngine::AI::NavMeshPath*>**)UnitySDK::FromName("", "DOPGONOIPBC")->GetStaticField(0x6F9B0);
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
