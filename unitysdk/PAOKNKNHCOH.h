#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAOKNKNHCOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD197F0)
#define PAOKNKNHCOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD197E0)

inline static constexpr unsigned int PAOKNKNHCOH_TypeDefinitionIndex = 42396;

	class PAOKNKNHCOH : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DBFCABHLDMN()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x1860);
		}

		static ::System::UInt32* StaticGet_JOEJOKPDDCK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x1864);
		}

		static ::System::UInt32* StaticGet_EILHEEEAHLE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x1868);
		}

		static ::System::UInt32* StaticGet_EGNGCIHDIML()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x186C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOKNKNHCOH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAOKNKNHCOH_CCTOR_OFFSET))();
		}

	};
