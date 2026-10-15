#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DOBOKPCPHCF;
class FCOEMCEDLNL;

#define DOBOKPCPHCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD24D80)
#define DOBOKPCPHCF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD24BA0)

inline static constexpr unsigned int DOBOKPCPHCF_TypeDefinitionIndex = 14421;

	class DOBOKPCPHCF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ALIDICNGLGL; // 0x10
		::RPG::Client::TextID OHLBMAGECPM; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBOKPCPHCF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOBOKPCPHCF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOBOKPCPHCF*))((::PBYTE)hIl2Cpp + DOBOKPCPHCF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
