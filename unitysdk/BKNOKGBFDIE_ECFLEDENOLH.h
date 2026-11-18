#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKNOKGBFDIE_OAIKMMHKAJF;
namespace MoleMole { class MonoBuffIcon; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKNOKGBFDIE_ECFLEDENOLH_IBHFLIAOGMP_OFFSET UNITYSDK_OFFSET(0x14EE3640)
#define BKNOKGBFDIE_ECFLEDENOLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE3630)

inline static constexpr unsigned int BKNOKGBFDIE_ECFLEDENOLH_TypeDefinitionIndex = 57139;

class BKNOKGBFDIE_ECFLEDENOLH : public ::System::Object
{
public:
	::System::Tuple_2<::System::Int32, ::MoleMole::MonoBuffIcon*>* IPMMCGDMODG; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::MoleMole::MonoBuffIcon*>*>* DJLOKMMLFJC; // 0x18
	::BKNOKGBFDIE_OAIKMMHKAJF* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_ECFLEDENOLH__CTOR_OFFSET))(this);
	}

	::System::Void IBHFLIAOGMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE_ECFLEDENOLH_IBHFLIAOGMP_OFFSET))(this);
	}
};
