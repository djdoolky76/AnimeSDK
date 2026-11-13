#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
class PFCHNCGHGNI;

#define GHDMCBJGBGD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B4B37B0)
#define GHDMCBJGBGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B3980)
#define GHDMCBJGBGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B3970)

inline static constexpr unsigned int GHDMCBJGBGD_TypeDefinitionIndex = 74256;

	class GHDMCBJGBGD : public ::System::Object
	{
	public:
		static ::PFCHNCGHGNI** StaticGet_HMENNBINILA()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696A0);
		}

		static ::PFCHNCGHGNI** StaticGet_GANLOPFKMDI()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696A8);
		}

		static ::PFCHNCGHGNI** StaticGet_JPJKKKEEFPC()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696B0);
		}

		static ::PFCHNCGHGNI** StaticGet_BOPJNOPBFML()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696B8);
		}

		static ::PFCHNCGHGNI** StaticGet_OCHPPINOHHE()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696C0);
		}

		static ::PFCHNCGHGNI** StaticGet_LNIOLIKGECB()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696C8);
		}

		static ::PFCHNCGHGNI** StaticGet_KCCCPAGCPKM()
		{
			return (::PFCHNCGHGNI**)UnitySDK::FromName("", "GHDMCBJGBGD")->GetStaticField(0x696D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDMCBJGBGD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHDMCBJGBGD_CCTOR_OFFSET))();
		}

		static ::PFCHNCGHGNI* BPLPBPMEODA(::RPG::GameCore::ElationTimeAtmosphereType a1)
		{
			return ((::PFCHNCGHGNI*(*)(::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + GHDMCBJGBGD_BPLPBPMEODA_OFFSET))(a1);
		}

	};
