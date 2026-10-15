#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointChangeDataProperty.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class GBNPHKMEIHA;
namespace System { class Object; }
namespace System { class String; }

#define GBNPHKMEIHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDFA440)
#define GBNPHKMEIHA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CDFA630)
#define GBNPHKMEIHA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDFA450)
#define GBNPHKMEIHA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDFA410)

inline static constexpr unsigned int GBNPHKMEIHA_TypeDefinitionIndex = 22785;

	class GBNPHKMEIHA : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
		::RPG::GameCore::ElationEchoPointChangeDataProperty FODBMMCKAEN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPHKMEIHA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GBNPHKMEIHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNPHKMEIHA*))((::PBYTE)hIl2Cpp + GBNPHKMEIHA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GBNPHKMEIHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNPHKMEIHA*))((::PBYTE)hIl2Cpp + GBNPHKMEIHA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNPHKMEIHA_GETDYNAMICKEY_OFFSET))(this);
		}

	};
