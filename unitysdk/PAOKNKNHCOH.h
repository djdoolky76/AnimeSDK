#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PAOKNKNHCOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4CFC70)
#define PAOKNKNHCOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CFC60)

inline static constexpr unsigned int PAOKNKNHCOH_TypeDefinitionIndex = 41421;

	class PAOKNKNHCOH : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_JOEJOKPDDCK()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x4FA0);
		}

		static ::System::UInt32* StaticGet_EILHEEEAHLE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x4FA4);
		}

		static ::System::UInt32* StaticGet_DBFCABHLDMN()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x4FA8);
		}

		static ::System::UInt32* StaticGet_EGNGCIHDIML()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "PAOKNKNHCOH")->GetStaticField(0x4FAC);
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
