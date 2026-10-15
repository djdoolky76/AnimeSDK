#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class PEMAHMMMPIF;
namespace RPG::GameCore { class DynamicFloat; }

#define PEMAHMMMPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A8200)
#define PEMAHMMMPIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A8060)

inline static constexpr unsigned int PEMAHMMMPIF_TypeDefinitionIndex = 23332;

	class PEMAHMMMPIF : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* PBLPLDJKPEI; // 0x10
		::RPG::Client::TextID HODEGKDKNIM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMAHMMMPIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEMAHMMMPIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEMAHMMMPIF*))((::PBYTE)hIl2Cpp + PEMAHMMMPIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
