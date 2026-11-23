#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }

#define E25DF6502BB074C4_FABC5E002DF9CC0D_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1EC5F70)
#define E25DF6502BB074C4_FABC5E002DF9CC0D_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x1EC5E70)
#define E25DF6502BB074C4_FABC5E002DF9CC0D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E25DF6502BB074C4_FABC5E002DF9CC0D_TypeDefinitionIndex = 7309;

class E25DF6502BB074C4_FABC5E002DF9CC0D : public ::System::Object
{
public:
	::System::String* B4ABE3AFB6DCC56E; // 0x10
	::ABC::Collections::Pooled::PooledList_1<::System::UInt32>* F3C96BF8B0420281; // 0x18

	::System::Void A1E97155B145443C(::System::String* B8F568399581B3C7, ::System::UInt32 BBDA55B8B235A7F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + E25DF6502BB074C4_FABC5E002DF9CC0D_A1E97155B145443C_OFFSET))(this, B8F568399581B3C7, BBDA55B8B235A7F7);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E25DF6502BB074C4_FABC5E002DF9CC0D_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E25DF6502BB074C4_FABC5E002DF9CC0D__CTOR_OFFSET))(this);
	}
};
