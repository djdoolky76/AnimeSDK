#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_KFIBIJBAJPK_IOIANDIHOCC_OFFSET UNITYSDK_OFFSET(0x14D89180)
#define MJDCEGKHJEG_KFIBIJBAJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D89170)

inline static constexpr unsigned int MJDCEGKHJEG_KFIBIJBAJPK_TypeDefinitionIndex = 56415;

class MJDCEGKHJEG_KFIBIJBAJPK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* JIBAHJEJKLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_KFIBIJBAJPK__CTOR_OFFSET))(this);
	}

	::System::Void IOIANDIHOCC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_KFIBIJBAJPK_IOIANDIHOCC_OFFSET))(this, GLAOEHCGCFO);
	}
};
