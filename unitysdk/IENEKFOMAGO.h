#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewDecoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IENEKFOMAGO;
namespace System { class String; }

#define IENEKFOMAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEED440)
#define IENEKFOMAGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEED070)

	class IENEKFOMAGO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EECIBIDGPEI; // 0x10
		::System::String* PFKLDBGEGAO; // 0x18
		::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>* GEKGGMKGIPE; // 0x20
		::System::String* LMDEHNMJHDJ; // 0x28
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x30
		::RPG::Client::TextID LNHLPKEHJBA; // 0x38
		::System::UInt32 KMIBDJKKGDE; // 0x48
		::System::UInt32 DKPOHCDMHBF; // 0x4C
		::RPG::Client::TextID HMFGANHKHIM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENEKFOMAGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IENEKFOMAGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IENEKFOMAGO*))((::PBYTE)hIl2Cpp + IENEKFOMAGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
