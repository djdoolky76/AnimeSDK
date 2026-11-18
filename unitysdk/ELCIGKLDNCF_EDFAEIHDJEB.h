#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELCIGKLDNCF_EDFAEIHDJEB_HFNDPFMNNGB_OFFSET UNITYSDK_OFFSET(0x17126D00)
#define ELCIGKLDNCF_EDFAEIHDJEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17126CF0)

inline static constexpr unsigned int ELCIGKLDNCF_EDFAEIHDJEB_TypeDefinitionIndex = 53125;

class ELCIGKLDNCF_EDFAEIHDJEB : public ::System::Object
{
public:
	::System::Action* LJDDOFEHCAM; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* KFJEKMPLGBC; // 0x18
	::System::Int32 JHFKDGBCOBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_EDFAEIHDJEB__CTOR_OFFSET))(this);
	}

	::System::Void HFNDPFMNNGB(::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase* CGNAECOJPGO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_EDFAEIHDJEB_HFNDPFMNNGB_OFFSET))(this, CGNAECOJPGO);
	}
};
