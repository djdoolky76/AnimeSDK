#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBDEBHBCMCM;
namespace RPG::Client::FateRin::Card { class IFateRinSystemCardViewModel; }

#define JBDEBHBCMCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x165679A0)
#define JBDEBHBCMCM_COMPARE_OFFSET UNITYSDK_OFFSET(0x16567590)
#define JBDEBHBCMCM_CTOR_OFFSET UNITYSDK_OFFSET(0x16567990)

	class JBDEBHBCMCM : public ::System::Object
	{
	public:
		static ::JBDEBHBCMCM** StaticGet_FMJPMFEDIJL()
		{
			return (::JBDEBHBCMCM**)UnitySDK::FromName("", "JBDEBHBCMCM")->GetStaticField(0x558F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBDEBHBCMCM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBDEBHBCMCM_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a1, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*, ::RPG::Client::FateRin::Card::IFateRinSystemCardViewModel*))((::PBYTE)hIl2Cpp + JBDEBHBCMCM_COMPARE_OFFSET))(this, a1, a2);
		}

	};
