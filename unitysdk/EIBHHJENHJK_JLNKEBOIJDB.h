#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIBHHJENHJK_JLNKEBOIJDB_KHJPCLODALG_OFFSET UNITYSDK_OFFSET(0x1354BFB0)
#define EIBHHJENHJK_JLNKEBOIJDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1354BFA0)

inline static constexpr unsigned int EIBHHJENHJK_JLNKEBOIJDB_TypeDefinitionIndex = 71895;

class EIBHHJENHJK_JLNKEBOIJDB : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_JLNKEBOIJDB__CTOR_OFFSET))(this);
	}

	::System::Void KHJPCLODALG(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_JLNKEBOIJDB_KHJPCLODALG_OFFSET))(this, LHLPLLCBMBM);
	}
};
