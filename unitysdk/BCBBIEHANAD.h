#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BCBBIEHANAD;
class FCOEMCEDLNL;
namespace System { class String; }

#define BCBBIEHANAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF7FF0)
#define BCBBIEHANAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCF7DD0)

inline static constexpr unsigned int BCBBIEHANAD_TypeDefinitionIndex = 11315;

	class BCBBIEHANAD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* JCNCDOOLACB; // 0x10
		::System::String* ABJGONAEFCB; // 0x18
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBBIEHANAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BCBBIEHANAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCBBIEHANAD*))((::PBYTE)hIl2Cpp + BCBBIEHANAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
