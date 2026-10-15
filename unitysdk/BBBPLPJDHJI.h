#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class CollectHeartDialCameraIndex; }
namespace RPG::GameCore { class TaskContext; }

#define BBBPLPJDHJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75BF0)
#define BBBPLPJDHJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E75910)
#define BBBPLPJDHJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E75940)

inline static constexpr unsigned int BBBPLPJDHJI_TypeDefinitionIndex = 52699;

	class BBBPLPJDHJI
	{
	public:
		static ::RPG::GameCore::StringHash* StaticGet_DCDBCKCIDCI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "BBBPLPJDHJI")->GetStaticField(0x14C20);
		}

		// static const ::System::String* FPICBLBBAAN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectHeartDialCameraIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectHeartDialCameraIndex*))((::PBYTE)hIl2Cpp + BBBPLPJDHJI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBBPLPJDHJI_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBPLPJDHJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
