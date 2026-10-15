#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFPKCJOOPCA;
namespace RPG::GameCore { class PropSmellPathComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SMELLPATHGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xE0EAF50)
#define RPG_CLIENT_SMELLPATHGRAPH_FADEOUT_OFFSET UNITYSDK_OFFSET(0xE0EAE30)
#define RPG_CLIENT_SMELLPATHGRAPH_GETDIJKSTRAPATH_OFFSET UNITYSDK_OFFSET(0xE0EAE80)
#define RPG_CLIENT_SMELLPATHGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0xE0EAD10)
#define RPG_CLIENT_SMELLPATHGRAPH_REFRESH_OFFSET UNITYSDK_OFFSET(0xE0EADB0)
#define RPG_CLIENT_SMELLPATHGRAPH_UNINIT_OFFSET UNITYSDK_OFFSET(0xE0EAEF0)

namespace RPG::Client
{
	class SmellPathGraph : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CFPKCJOOPCA* KADDKEGNCHE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::PropSmellPathComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSmellPathComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_INIT_OFFSET))(this, a1);
		}

		::System::Void Refresh(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_REFRESH_OFFSET))(this, a1);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_FADEOUT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetDijkstraPath()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_GETDIJKSTRAPATH_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMELLPATHGRAPH_UNINIT_OFFSET))(this);
		}

	};
}
