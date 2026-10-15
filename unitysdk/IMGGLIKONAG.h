#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"
#include "unitysdk/System/Object.h"

#define IMGGLIKONAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x164D45E0)
#define IMGGLIKONAG_FMHOOKOBIBK_OFFSET UNITYSDK_OFFSET(0x164D4440)
#define IMGGLIKONAG_LEJJJLKKCBC_OFFSET UNITYSDK_OFFSET(0x164D43C0)

inline static constexpr unsigned int IMGGLIKONAG_TypeDefinitionIndex = 54407;

	class IMGGLIKONAG : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DKJECKNBKCA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IMGGLIKONAG")->GetStaticField(0x14FF0);
		}

		static ::System::Int32* StaticGet_OFKBAHANNEC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IMGGLIKONAG")->GetStaticField(0x14FF4);
		}

		static ::System::Int32* StaticGet_MOHIJBKOFDA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IMGGLIKONAG")->GetStaticField(0x14FF8);
		}

		static ::System::Int32* StaticGet_KEPDKKAIMGJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IMGGLIKONAG")->GetStaticField(0x14FFC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMGGLIKONAG_CCTOR_OFFSET))();
		}

		static ::System::Int32 LEJJJLKKCBC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + IMGGLIKONAG_LEJJJLKKCBC_OFFSET))(a1);
		}

		static ::System::Int32 FMHOOKOBIBK(::RPG::GameCore::SwordTrainingProperty a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::SwordTrainingProperty))((::PBYTE)hIl2Cpp + IMGGLIKONAG_FMHOOKOBIBK_OFFSET))(a1);
		}

	};
