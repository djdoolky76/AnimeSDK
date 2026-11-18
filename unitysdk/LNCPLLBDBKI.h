#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int LNCPLLBDBKI_TypeDefinitionIndex = 89785;

struct alignas(8) LNCPLLBDBKI
{
	::System::String* MCOHLHMKLIP; // 0x10
	::System::Boolean PNJFPDDLKPD; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 KDDKDHBELOC; // 0x1C
	::System::String* AELLPLBJELA; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG; // 0x28
	::System::Boolean NLPKOGHIMJN; // 0x30
	::System::Byte _padding1[0x7];
	::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN; // 0x38
};
