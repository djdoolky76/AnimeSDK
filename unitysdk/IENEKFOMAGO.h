#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewDecoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IENEKFOMAGO;
namespace System { class String; }

#define IENEKFOMAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9C60)
#define IENEKFOMAGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6B9890)

inline static constexpr unsigned int IENEKFOMAGO_TypeDefinitionIndex = 14069;

	class IENEKFOMAGO : public ::System::Object
	{
	public:
		::System::String* PFKLDBGEGAO; // 0x10
		::Il2CppArray<::RPG::GameCore::LimaoNewsInterviewDecoType>* GEKGGMKGIPE; // 0x18
		::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x20
		::Il2CppArray<::System::UInt32>* EECIBIDGPEI; // 0x28
		::System::String* LMDEHNMJHDJ; // 0x30
		::System::UInt32 KMIBDJKKGDE; // 0x38
		::System::UInt32 DKPOHCDMHBF; // 0x3C
		::RPG::Client::TextID HMFGANHKHIM; // 0x40
		::RPG::Client::TextID LNHLPKEHJBA; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENEKFOMAGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IENEKFOMAGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IENEKFOMAGO*))((::PBYTE)hIl2Cpp + IENEKFOMAGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
