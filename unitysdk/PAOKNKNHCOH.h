#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAOKNKNHCOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A16D0)
#define PAOKNKNHCOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A16C0)

inline static constexpr unsigned int PAOKNKNHCOH_TypeDefinitionIndex = 41421;

	class PAOKNKNHCOH : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DBFCABHLDMN()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x6530);
		}

		static ::System::UInt32* StaticGet_EGNGCIHDIML()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x6534);
		}

		static ::System::UInt32* StaticGet_EILHEEEAHLE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x6538);
		}

		static ::System::UInt32* StaticGet_JOEJOKPDDCK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x653C);
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
