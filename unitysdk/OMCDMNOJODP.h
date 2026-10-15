#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class HoyoTag; }

#define OMCDMNOJODP_CAOAFPAENFC_OFFSET UNITYSDK_OFFSET(0x3C3E690)
#define OMCDMNOJODP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define OMCDMNOJODP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define OMCDMNOJODP_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OMCDMNOJODP_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OMCDMNOJODP_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C3E760)
#define OMCDMNOJODP_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define OMCDMNOJODP_KJJDJDABDHL_OFFSET UNITYSDK_OFFSET(0x3C3E710)
#define OMCDMNOJODP_MBPJMILLDGL_OFFSET UNITYSDK_OFFSET(0x3C3E6E0)
#define OMCDMNOJODP_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x3C3E650)

inline static constexpr unsigned int OMCDMNOJODP_TypeDefinitionIndex = 10675;

	struct alignas(8) OMCDMNOJODP
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + OMCDMNOJODP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_DISPOSE_OFFSET))(this);
		}

		::JPCONPIKIEK NDMBDGKAJEK()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::Void CAOAFPAENFC(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + OMCDMNOJODP_CAOAFPAENFC_OFFSET))(this, a1);
		}

		::System::Int32 MBPJMILLDGL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_MBPJMILLDGL_OFFSET))(this);
		}

		::System::Void KJJDJDABDHL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMCDMNOJODP_KJJDJDABDHL_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTag* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCDMNOJODP_GFLKJLOFIPA_OFFSET))(this);
		}

	};
