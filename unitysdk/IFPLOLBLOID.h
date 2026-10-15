#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class DynamicMaterialLoader; }
namespace RPG::GameCore { class SetDynamicMaterialLoadState; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFPLOLBLOID_CTOR_OFFSET UNITYSDK_OFFSET(0x15F26E60)
#define IFPLOLBLOID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F26E90)
#define IFPLOLBLOID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F26ED0)

inline static constexpr unsigned int IFPLOLBLOID_TypeDefinitionIndex = 55401;

	class IFPLOLBLOID
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>** StaticGet_KPGKNONGLCM()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::DynamicMaterialLoader*>**)UnitySDK::FromName("", "IFPLOLBLOID")->GetStaticField(0x4ED00);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicMaterialLoadState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicMaterialLoadState*))((::PBYTE)hIl2Cpp + IFPLOLBLOID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPLOLBLOID_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPLOLBLOID_ONTASKBEGIN_OFFSET))(this);
		}

	};
