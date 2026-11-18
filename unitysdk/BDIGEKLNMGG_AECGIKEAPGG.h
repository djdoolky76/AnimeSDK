#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define BDIGEKLNMGG_AECGIKEAPGG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1701F0C0)
#define BDIGEKLNMGG_AECGIKEAPGG_IJCACKCMGFG_OFFSET UNITYSDK_OFFSET(0x1701F280)
#define BDIGEKLNMGG_AECGIKEAPGG_OEPFFLLENHE_OFFSET UNITYSDK_OFFSET(0x1701F010)
#define BDIGEKLNMGG_AECGIKEAPGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1701EF60)

inline static constexpr unsigned int BDIGEKLNMGG_AECGIKEAPGG_TypeDefinitionIndex = 74802;

class BDIGEKLNMGG_AECGIKEAPGG : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::System::Type*, ::MoleMole::UIBaseController*>* NOIANLAIKKN; // 0x10
	::MIKOMFIBMBN HKGCJDDIMAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_AECGIKEAPGG__CTOR_OFFSET))(this);
	}

	::System::Void OEPFFLLENHE(::MoleMole::UIBaseController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_AECGIKEAPGG_OEPFFLLENHE_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_AECGIKEAPGG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void IJCACKCMGFG(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* ALGFDOKPBEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + BDIGEKLNMGG_AECGIKEAPGG_IJCACKCMGFG_OFFSET))(this, ALGFDOKPBEM);
	}
};
