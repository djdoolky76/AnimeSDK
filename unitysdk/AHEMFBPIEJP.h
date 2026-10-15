#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
namespace RPG::GameCore { class SetEntityVisible; }
namespace RPG::GameCore { class TaskContext; }

#define AHEMFBPIEJP_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB7B170)
#define AHEMFBPIEJP_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7ABB0)
#define AHEMFBPIEJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7ABE0)
#define AHEMFBPIEJP_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0xEB7AC30)
#define AHEMFBPIEJP_ENCNOCGLJKJ_OFFSET UNITYSDK_OFFSET(0xEB7AC80)
#define AHEMFBPIEJP_NDBOOAEKNMC_OFFSET UNITYSDK_OFFSET(0xEB7AC20)
#define AHEMFBPIEJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB7B120)

inline static constexpr unsigned int AHEMFBPIEJP_TypeDefinitionIndex = 56407;

	class AHEMFBPIEJP
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_FHNEIBMMEFH()
		{
			return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)UnitySDK::FromName("", "AHEMFBPIEJP")->GetStaticField(0x51B20);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEntityVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEntityVisible*))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHEMFBPIEJP_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean NDBOOAEKNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_NDBOOAEKNMC_OFFSET))(this);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_EDNJAFJEPJF_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ENCNOCGLJKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEMFBPIEJP_ENCNOCGLJKJ_OFFSET))(this);
		}

	};
