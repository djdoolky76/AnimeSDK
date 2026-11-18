#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_DFNEJPPFKLB_MJDPFBLPBBG_OFFSET UNITYSDK_OFFSET(0x11A056B0)
#define MJDCEGKHJEG_DFNEJPPFKLB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A056A0)

inline static constexpr unsigned int MJDCEGKHJEG_DFNEJPPFKLB_TypeDefinitionIndex = 56409;

class MJDCEGKHJEG_DFNEJPPFKLB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int32>*>* JIBAHJEJKLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_DFNEJPPFKLB__CTOR_OFFSET))(this);
	}

	::System::Void MJDPFBLPBBG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_DFNEJPPFKLB_MJDPFBLPBBG_OFFSET))(this, GLAOEHCGCFO);
	}
};
