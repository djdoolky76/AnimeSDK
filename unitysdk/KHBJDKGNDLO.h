#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenTreasureChallenge; }
namespace RPG::GameCore { class TaskContext; }

#define KHBJDKGNDLO_ABPHNOMKAAI_OFFSET UNITYSDK_OFFSET(0xB3FD450)
#define KHBJDKGNDLO_AKBLIIBMKPF_OFFSET UNITYSDK_OFFSET(0xB3FD880)
#define KHBJDKGNDLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FCEB0)
#define KHBJDKGNDLO_HCMPFDPJCCK_OFFSET UNITYSDK_OFFSET(0xB3FD090)
#define KHBJDKGNDLO_IDMIPCKBHCP_OFFSET UNITYSDK_OFFSET(0xB3FDB40)
#define KHBJDKGNDLO_KPOCHFJIECA_OFFSET UNITYSDK_OFFSET(0xB3FD9F0)
#define KHBJDKGNDLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3FCF00)

inline static constexpr unsigned int KHBJDKGNDLO_TypeDefinitionIndex = 58243;

	class KHBJDKGNDLO
	{
	public:
		// static const ::System::String* LOGEDFAEHCF; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTreasureChallenge*))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean AKBLIIBMKPF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_AKBLIIBMKPF_OFFSET))(this, a1);
		}

		::System::UInt32 KPOCHFJIECA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_KPOCHFJIECA_OFFSET))(this, a1);
		}

		::System::Boolean IDMIPCKBHCP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_IDMIPCKBHCP_OFFSET))(this, a1);
		}

		::System::Void HCMPFDPJCCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_HCMPFDPJCCK_OFFSET))(this);
		}

		::System::Void ABPHNOMKAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBJDKGNDLO_ABPHNOMKAAI_OFFSET))(this);
		}

	};
