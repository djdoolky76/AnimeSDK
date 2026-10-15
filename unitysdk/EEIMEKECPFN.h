#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"
class CICNAOMJPGD;

#define EEIMEKECPFN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13A2F000)
#define EEIMEKECPFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A2F230)
#define EEIMEKECPFN_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2F220)

	class EEIMEKECPFN : public ::System::Object
	{
	public:
		static ::CICNAOMJPGD** StaticGet_PGFADOJCHJM()
		{
			return (::CICNAOMJPGD**)UnitySDK::FromName("", "EEIMEKECPFN")->GetStaticField(0x70000);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIMEKECPFN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEIMEKECPFN_CCTOR_OFFSET))();
		}

		static ::CICNAOMJPGD* BPLPBPMEODA(::RPG::GameCore::LoadingStratageType a1, ::RPG::GameCore::TransitionLoadingType a2)
		{
			return ((::CICNAOMJPGD*(*)(::RPG::GameCore::LoadingStratageType, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + EEIMEKECPFN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
