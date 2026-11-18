#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIPBHKNPGHP.h"
#include "unitysdk/System/Object.h"

class DCCHLDKFLKO_JMMDENOLKPL;
class PHICPBCACKJ;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCCHLDKFLKO_HGGLPECLNDC_KGIEBIPACEK_OFFSET UNITYSDK_OFFSET(0x1F6398D0)
#define DCCHLDKFLKO_HGGLPECLNDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6398C0)

inline static constexpr unsigned int DCCHLDKFLKO_HGGLPECLNDC_TypeDefinitionIndex = 94419;

class DCCHLDKFLKO_HGGLPECLNDC : public ::System::Object
{
public:
	::PHICPBCACKJ* KMHICJLIECP; // 0x10
	::DCCHLDKFLKO_JMMDENOLKPL* FGBNBFHOKAA; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::FIPBHKNPGHP>*>* AMHGBGMOMLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCHLDKFLKO_HGGLPECLNDC__CTOR_OFFSET))(this);
	}

	::System::Void KGIEBIPACEK(::System::Collections::Generic::List_1<::FIPBHKNPGHP>* HKGNKCHDEFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FIPBHKNPGHP>*))((::PBYTE)hIl2Cpp + DCCHLDKFLKO_HGGLPECLNDC_KGIEBIPACEK_OFFSET))(this, HKGNKCHDEFG);
	}
};
