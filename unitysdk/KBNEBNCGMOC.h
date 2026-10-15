#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetVisibility; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define KBNEBNCGMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB31CA10)
#define KBNEBNCGMOC_CTOR_OFFSET UNITYSDK_OFFSET(0xB31C420)
#define KBNEBNCGMOC_ODEBBPOGCMA_OFFSET UNITYSDK_OFFSET(0xB31C800)
#define KBNEBNCGMOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB31C450)

inline static constexpr unsigned int KBNEBNCGMOC_TypeDefinitionIndex = 58349;

	class KBNEBNCGMOC
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_MOECGMPCECP()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("", "KBNEBNCGMOC")->GetStaticField(0x33950);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetVisibility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetVisibility*))((::PBYTE)hIl2Cpp + KBNEBNCGMOC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNEBNCGMOC_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNEBNCGMOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ODEBBPOGCMA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KBNEBNCGMOC_ODEBBPOGCMA_OFFSET))(this, a1);
		}

	};
