#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"

#define MFGPGANELFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8F5160)
#define MFGPGANELFK_COHHMPBOLGM_OFFSET UNITYSDK_OFFSET(0xB8F4720)
#define MFGPGANELFK_FNILNONEOGJ_OFFSET UNITYSDK_OFFSET(0xB8F46A0)
#define MFGPGANELFK_PJIMBHJBADK_OFFSET UNITYSDK_OFFSET(0xB8F4850)

inline static constexpr unsigned int MFGPGANELFK_TypeDefinitionIndex = 54228;

	class MFGPGANELFK : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_LMFODKEBNME()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "MFGPGANELFK")->GetStaticField(0x3720);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_LMOMOFMGJCA()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "MFGPGANELFK")->GetStaticField(0x3728);
		}

		static ::RPG::GameCore::IVec2* StaticGet_ENDKNALEOMC()
		{
			return (::RPG::GameCore::IVec2*)UnitySDK::FromName("", "MFGPGANELFK")->GetStaticField(0x3730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFGPGANELFK_CCTOR_OFFSET))();
		}

		static ::System::Int32 FNILNONEOGJ(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + MFGPGANELFK_FNILNONEOGJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixVec2 COHHMPBOLGM(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::IVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MFGPGANELFK_COHHMPBOLGM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::IVec2 PJIMBHJBADK(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::IVec2(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MFGPGANELFK_PJIMBHJBADK_OFFSET))(a1, a2);
		}

	};
