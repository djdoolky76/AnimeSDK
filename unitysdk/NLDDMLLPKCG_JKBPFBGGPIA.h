#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int NLDDMLLPKCG_JKBPFBGGPIA_TypeDefinitionIndex = 81380;

struct alignas(8) NLDDMLLPKCG_JKBPFBGGPIA
{
	::System::String* MCOHLHMKLIP; // 0x10
	::MoleMole::ConfigMaterialPropertyModifier* DFMKILICPFB; // 0x18
	::System::Boolean PNJFPDDLKPD; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 KDDKDHBELOC; // 0x24
	::System::String* AELLPLBJELA; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* OAHJHLFIFBG; // 0x30
	::System::Boolean NLPKOGHIMJN; // 0x38
	::System::Byte _padding1[0x7];
	::MoleMole::Battle::MaterialPropertyModifierExtraParams EMIHEAOBLJN; // 0x40
	::System::Boolean CIEJOIKIMLP; // 0x60
	::System::Boolean LMFHBHHOCKM; // 0x61
	::System::Boolean NDPOFGDFKOD; // 0x62
	::System::Boolean KIKNEPIOGCK; // 0x63
	::System::Single PDANIBFDFMC; // 0x64
	::System::Single AEAEENHLHCP; // 0x68
	::System::Single KGCCAJBJNAH; // 0x6C
};
