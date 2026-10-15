#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::GameCore { class SetComponentAssetLoadState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDEKGOOCHHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1599A810)
#define GDEKGOOCHHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1599A840)
#define GDEKGOOCHHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1599A880)

inline static constexpr unsigned int GDEKGOOCHHP_TypeDefinitionIndex = 55377;

	class GDEKGOOCHHP
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::ComponentAssetLoader*>** StaticGet_KPGKNONGLCM()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ComponentAssetLoader*>**)UnitySDK::FromName("", "GDEKGOOCHHP")->GetStaticField(0x548C0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComponentAssetLoadState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComponentAssetLoadState*))((::PBYTE)hIl2Cpp + GDEKGOOCHHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKGOOCHHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEKGOOCHHP_ONTASKBEGIN_OFFSET))(this);
		}

	};
