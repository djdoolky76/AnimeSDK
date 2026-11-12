#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class KEOMPOEIELK;
namespace System { template <typename T> class Action_1; }

#define KCGDGJDGNMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC0130)
#define KCGDGJDGNMK_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0xBBC01C0)
#define KCGDGJDGNMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBC0150)

inline static constexpr unsigned int KCGDGJDGNMK_TypeDefinitionIndex = 61942;

	class KCGDGJDGNMK : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* MPKAFEJFNKN; // 0x10
		::KEOMPOEIELK* GLBFOBHBNLC; // 0x18
		::System::Int64 IIFAHEGPJLI; // 0x20
		::System::Boolean LAEAAONDHCP; // 0x28
		::System::Void _ctor(::KEOMPOEIELK* a1, ::System::Int64 a2, ::System::Boolean a3, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KEOMPOEIELK*, ::System::Int64, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + KCGDGJDGNMK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGDGJDGNMK_DISPOSE_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* DDKJIMBJBMH()
		{
			return ((::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGDGJDGNMK_DDKJIMBJBMH_OFFSET))(this);
		}

	};
