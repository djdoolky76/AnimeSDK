#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LPJDKKLHKCF_AEOOFAOOIMP_OFFSET UNITYSDK_OFFSET(0x1B6B4FC0)
#define LPJDKKLHKCF_BAPEBBLOLFK_OFFSET UNITYSDK_OFFSET(0x1B6B53C0)
#define LPJDKKLHKCF_BJIHOLLBAED_OFFSET UNITYSDK_OFFSET(0x1B6B4C30)
#define LPJDKKLHKCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B4B40)
#define LPJDKKLHKCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B6B4BF0)
#define LPJDKKLHKCF_GCKJLKLPBDA_OFFSET UNITYSDK_OFFSET(0x1B6B5020)
#define LPJDKKLHKCF_GEPLAHKGGCL_OFFSET UNITYSDK_OFFSET(0x1B6B4D90)
#define LPJDKKLHKCF_KFBFEDGMJOO_OFFSET UNITYSDK_OFFSET(0x1B6B5280)
#define LPJDKKLHKCF_LKBEADCFKOH_OFFSET UNITYSDK_OFFSET(0x1B6B54D0)
#define LPJDKKLHKCF_PMAIMOMNBAA_OFFSET UNITYSDK_OFFSET(0x1B6B5310)

inline static constexpr unsigned int LPJDKKLHKCF_TypeDefinitionIndex = 62074;

	class LPJDKKLHKCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::EnumEnterPerformanceResult>* IDCCPLMFOBM; // 0x10
		::RPG::Client::PerformanceManager* IEGBIPMGBPA; // 0x18
		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_DISPOSE_OFFSET))(this);
		}

		::System::Void BJIHOLLBAED(::RPG::Client::EnumEnterPerformanceResult a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_BJIHOLLBAED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EnumEnterPerformanceResult GEPLAHKGGCL(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::EnumEnterPerformanceResult(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_GEPLAHKGGCL_OFFSET))(this, a1, a2);
		}

		::System::Void LKBEADCFKOH(::RPG::Client::EnumEnterPerformanceResult a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_LKBEADCFKOH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AEOOFAOOIMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_AEOOFAOOIMP_OFFSET))(this);
		}

		::System::Boolean GCKJLKLPBDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_GCKJLKLPBDA_OFFSET))(this);
		}

		::System::Boolean KFBFEDGMJOO(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_KFBFEDGMJOO_OFFSET))(this, a1, a2);
		}

		::System::Boolean PMAIMOMNBAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_PMAIMOMNBAA_OFFSET))(this);
		}

		::System::Boolean BAPEBBLOLFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJDKKLHKCF_BAPEBBLOLFK_OFFSET))(this);
		}

	};
