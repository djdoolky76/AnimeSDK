#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/FBC2344D7DDFE4C1.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RAYFIRE_RFRUNTIMECACHING_CREATETMREF_OFFSET UNITYSDK_OFFSET(0x2991750)
#define RAYFIRE_RFRUNTIMECACHING_GETBATCHBYFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x2991940)
#define RAYFIRE_RFRUNTIMECACHING_GETBATCHBYFRAMES_OFFSET UNITYSDK_OFFSET(0x2991AD0)
#define RAYFIRE_RFRUNTIMECACHING_GETMARKEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x2991CA0)
#define RAYFIRE_RFRUNTIMECACHING__CTOR_OFFSET UNITYSDK_OFFSET(0x2991E30)

namespace RayFire
{
	inline static constexpr unsigned int RFRuntimeCaching_TypeDefinitionIndex = 15530;

	class RFRuntimeCaching : public ::System::Object
	{
	public:
		::E33DBE3D45A5731A::FBC2344D7DDFE4C1 type; // 0x10
		::System::Int32 frames; // 0x14
		::System::Int32 fragments; // 0x18
		::System::Boolean skipFirstDemolition; // 0x1C
		::System::Boolean inProgress; // 0x1D
		::System::Boolean wasUsed; // 0x1E
		::System::Boolean stop; // 0x1F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFRUNTIMECACHING__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetMarkedElements(::System::Int32 F8EAE1C5027791ED, ::System::Collections::Generic::List_1<::System::Int32>* B61B019330CDC9F0)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRUNTIMECACHING_GETMARKEDELEMENTS_OFFSET))(F8EAE1C5027791ED, B61B019330CDC9F0);
		}

		static ::UnityEngine::GameObject* CreateTmRef(::RayFire::RayfireRigid* A2395A471E8081EB)
		{
			return ((::UnityEngine::GameObject*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRUNTIMECACHING_CREATETMREF_OFFSET))(A2395A471E8081EB);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetBatchByFrames(::System::Int32 B6BB6FC0D9169542, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFRUNTIMECACHING_GETBATCHBYFRAMES_OFFSET))(B6BB6FC0D9169542, FCB91636572348CF);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetBatchByFragments(::System::Int32 A7FFB7A3EDC81508, ::System::Int32 FCB91636572348CF)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFRUNTIMECACHING_GETBATCHBYFRAGMENTS_OFFSET))(A7FFB7A3EDC81508, FCB91636572348CF);
		}
	};
}
