#pragma once
#include "unitysdk/unitysdk.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CEBEOIBOBPA_CTOR_OFFSET UNITYSDK_OFFSET(0xEE4A0)
#define CEBEOIBOBPA_GFLDBPJEKND_OFFSET UNITYSDK_OFFSET(0xEE4D0)
#define CEBEOIBOBPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xEE4C0)
#define CEBEOIBOBPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEE4B0)

inline static constexpr unsigned int CEBEOIBOBPA_TypeDefinitionIndex = 57381;

	struct alignas(8) CEBEOIBOBPA
	{
		::System::String* NKBIJBOPLJD; // 0x10
		::System::String* CIJGJDBGLBE; // 0x18
		::System::String* NMMKDIEICHL; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CEBEOIBOBPA_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBEOIBOBPA_TOSTRING_OFFSET))(this);
		}

		::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CEBEOIBOBPA_OJNNBEJLDIJ_OFFSET))(this, a1);
		}

		::System::Void GFLDBPJEKND(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CEBEOIBOBPA_GFLDBPJEKND_OFFSET))(this, a1);
		}

	};
