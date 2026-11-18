#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMPNMDAKOFH_FOMBIPJLIMB.h"
#include "unitysdk/System/Object.h"

class BIOEANJKLPH;
class OMPNMDAKOFH;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDEIPLEKIFJ_CPHGLDOBCHM_OFFSET UNITYSDK_OFFSET(0x18665E70)
#define BDEIPLEKIFJ_ELJGBKKBLCA_OFFSET UNITYSDK_OFFSET(0x18665EE0)
#define BDEIPLEKIFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18665F80)

inline static constexpr unsigned int BDEIPLEKIFJ_TypeDefinitionIndex = 51658;

class BDEIPLEKIFJ : public ::System::Object
{
public:
	::System::Func_2<::System::Collections::Generic::List_1<::OMPNMDAKOFH*>*, ::BIOEANJKLPH*>* BAKKMKPJEIJ; // 0x10
	::System::String* BCLBOLPGILP; // 0x18
	::System::Int32 JFNGJKHKJNM; // 0x20
	::OMPNMDAKOFH_FOMBIPJLIMB HLBKHEFJAPH; // 0x24
	::System::Int32 HLPFIBJOKBL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEIPLEKIFJ__CTOR_OFFSET))(this);
	}

	::System::Void CPHGLDOBCHM(::OMPNMDAKOFH* OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::OMPNMDAKOFH*))((::PBYTE)hIl2Cpp + BDEIPLEKIFJ_CPHGLDOBCHM_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void ELJGBKKBLCA(::OMPNMDAKOFH* OMMEALOOOOD, ::System::Collections::Generic::List_1<::OMPNMDAKOFH*>* OPFOAILIDND)
	{
		return ((::System::Void(*)(::PVOID, ::OMPNMDAKOFH*, ::System::Collections::Generic::List_1<::OMPNMDAKOFH*>*))((::PBYTE)hIl2Cpp + BDEIPLEKIFJ_ELJGBKKBLCA_OFFSET))(this, OMMEALOOOOD, OPFOAILIDND);
	}
};
