#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KILOJFMKNAI.h"
namespace RPG::GameCore { class LittleGameConstConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POGDDEGBOPJ_AACAKGCAMPG_OFFSET UNITYSDK_OFFSET(0x1C7C96E0)
#define POGDDEGBOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C93D0)
#define POGDDEGBOPJ_KOKDNIDCDBF_OFFSET UNITYSDK_OFFSET(0x1C7C94A0)
#define POGDDEGBOPJ_NHNOGPJELGG_OFFSET UNITYSDK_OFFSET(0x1C7C9720)
#define POGDDEGBOPJ_PALLCENBCAP_OFFSET UNITYSDK_OFFSET(0x1C7C9860)

inline static constexpr unsigned int POGDDEGBOPJ_TypeDefinitionIndex = 37187;

	class POGDDEGBOPJ : public ::KILOJFMKNAI
	{
	public:
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x18
		::RPG::GameCore::LittleGameEntityConfig* LOAGALADJPN; // 0x20
		::RPG::GameCore::LittleGameConstConfig* OEBCGADNGII; // 0x28
		::RPG::GameCore::LittleGameEntityConfig* EBEHGIPOOEI; // 0x30
		::RPG::GameCore::LittleGameEntityConfig* PMBJAHLGBEG; // 0x38
		::RPG::GameCore::LittleGameEntityConfig* PBFLDBBIGNB; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* NKKOKKFGNHC; // 0x48
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POGDDEGBOPJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KOKDNIDCDBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGDDEGBOPJ_KOKDNIDCDBF_OFFSET))(this);
		}

		::System::Void NHNOGPJELGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGDDEGBOPJ_NHNOGPJELGG_OFFSET))(this);
		}

		::System::Void AACAKGCAMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POGDDEGBOPJ_AACAKGCAMPG_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameEntityConfig* PALLCENBCAP(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POGDDEGBOPJ_PALLCENBCAP_OFFSET))(this, a1);
		}

	};
