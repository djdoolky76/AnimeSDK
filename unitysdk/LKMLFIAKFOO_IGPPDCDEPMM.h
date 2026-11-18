#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HAILBACJPGD;
class LKMLFIAKFOO_BMELEAHCHNP;
class PLPHBLLCFBF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKMLFIAKFOO_IGPPDCDEPMM_JNGIELLFHJK_OFFSET UNITYSDK_OFFSET(0x184FD440)
#define LKMLFIAKFOO_IGPPDCDEPMM_OKGMADJAPFG_OFFSET UNITYSDK_OFFSET(0x184FDAE0)
#define LKMLFIAKFOO_IGPPDCDEPMM__CTOR_OFFSET UNITYSDK_OFFSET(0x184FD430)

inline static constexpr unsigned int LKMLFIAKFOO_IGPPDCDEPMM_TypeDefinitionIndex = 43595;

class LKMLFIAKFOO_IGPPDCDEPMM : public ::System::Object
{
public:
	::HAILBACJPGD* IIDDGGNCKHM; // 0x10
	::System::Action_1<::PLPHBLLCFBF*>* OLDCEOGKOAE; // 0x18
	::LKMLFIAKFOO_BMELEAHCHNP* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_IGPPDCDEPMM__CTOR_OFFSET))(this);
	}

	::System::Void JNGIELLFHJK(::System::Collections::Generic::List_1<::System::UInt32>* DJLOKMMLFJC, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_IGPPDCDEPMM_JNGIELLFHJK_OFFSET))(this, DJLOKMMLFJC, LHLPLLCBMBM);
	}

	::System::Void OKGMADJAPFG(::PLPHBLLCFBF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PLPHBLLCFBF*))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_IGPPDCDEPMM_OKGMADJAPFG_OFFSET))(this, GLAOEHCGCFO);
	}
};
