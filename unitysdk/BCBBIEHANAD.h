#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BCBBIEHANAD;
class FCOEMCEDLNL;
namespace System { class String; }

#define BCBBIEHANAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC9E70)
#define BCBBIEHANAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC9C50)

inline static constexpr unsigned int BCBBIEHANAD_TypeDefinitionIndex = 11315;

	class BCBBIEHANAD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* JCNCDOOLACB; // 0x10
		::System::String* ABJGONAEFCB; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBBIEHANAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BCBBIEHANAD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BCBBIEHANAD*))((::PBYTE)hIl2Cpp + BCBBIEHANAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
