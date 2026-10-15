#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class EDHKOGMNINN;
class FCOEMCEDLNL;
class NNDFHGMECMG;
namespace System { class String; }

#define EDHKOGMNINN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD70CB0)
#define EDHKOGMNINN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD70CF0)
#define EDHKOGMNINN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD70C40)

	class EDHKOGMNINN : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* INMECGOAEEO; // 0x18
		::Il2CppArray<::NNDFHGMECMG*>* HEBOJJJAHEE; // 0x20
		::System::Single NJIGKOHDINP; // 0x28
		::System::Single MBPCNEOIKIC; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHKOGMNINN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EDHKOGMNINN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDHKOGMNINN*))((::PBYTE)hIl2Cpp + EDHKOGMNINN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EDHKOGMNINN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDHKOGMNINN*))((::PBYTE)hIl2Cpp + EDHKOGMNINN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
