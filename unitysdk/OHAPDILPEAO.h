#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHAPDILPEAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE5E800)
#define OHAPDILPEAO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE5EC60)

inline static constexpr unsigned int OHAPDILPEAO_TypeDefinitionIndex = 75332;

	struct alignas(8) OHAPDILPEAO
	{
		::System::UInt32 PMIEAEGJNMJ; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* KOIJMPDBMJF; // 0x18
		::System::String* MJPKBIGCFOM; // 0x20
		::System::String* GLPGLPCOLKO; // 0x28
		::System::String* NNKLLHMDNCA; // 0x30
		::RPG::GameCore::FixPoint MNOLGKGHHEC; // 0x38
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal MCJEIGHLLFD; // 0x40
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal PKFJKABCKFB; // 0x58
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHAPDILPEAO>** StaticGet_HGOEHHJCCIC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OHAPDILPEAO>**)UnitySDK::FromName("", "OHAPDILPEAO")->GetStaticField(0x657B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHAPDILPEAO_CCTOR_OFFSET))();
		}

		/*
		static ::OHAPDILPEAO BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::OHAPDILPEAO(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHAPDILPEAO_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

	};
