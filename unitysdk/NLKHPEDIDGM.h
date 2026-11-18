#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class StateTreeMonsterHudTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLKHPEDIDGM_KPDFGKKGPLG_OFFSET UNITYSDK_OFFSET(0x1729B6E0)

inline static constexpr unsigned int NLKHPEDIDGM_TypeDefinitionIndex = 43440;

struct alignas(8) NLKHPEDIDGM
{
	::System::UInt32 AOGNNJLKHGL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* JBCFJEKACDM; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* LFIAHDANGGM; // 0x20

	/*
	static ::NLKHPEDIDGM KPDFGKKGPLG(::System::UInt32 NJNCGJLHLKC, ::MoleMole::Config::StateTreeMonsterHudTrait* CGMNNBDIGDJ)
	{
		return ((::NLKHPEDIDGM(*)(::System::UInt32, ::MoleMole::Config::StateTreeMonsterHudTrait*))((::PBYTE)hIl2Cpp + NLKHPEDIDGM_KPDFGKKGPLG_OFFSET))(NJNCGJLHLKC, CGMNNBDIGDJ);
	}
	*/
};
