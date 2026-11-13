#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"

#define NAKGBEJLKDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF6960)

inline static constexpr unsigned int NAKGBEJLKDO_TypeDefinitionIndex = 62435;

	class NAKGBEJLKDO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_HDELBPBOCEP()
		{
			return (::Il2CppArray<::RPG::Client::WorkNodeState>**)UnitySDK::FromName("", "NAKGBEJLKDO")->GetStaticField(0x164C0);
		}

		static ::Il2CppArray<::RPG::Client::WorkNodeState>** StaticGet_ICKAAJIMECL()
		{
			return (::Il2CppArray<::RPG::Client::WorkNodeState>**)UnitySDK::FromName("", "NAKGBEJLKDO")->GetStaticField(0x164C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKGBEJLKDO_CCTOR_OFFSET))();
		}

	};
