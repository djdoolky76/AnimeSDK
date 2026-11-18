#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OEKHMAPHEJH;
class OIBIIIAFJMF;
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define LAAGPBKFGNP_BBLJJOMEBGP_OFFSET UNITYSDK_OFFSET(0x16830670)
#define LAAGPBKFGNP_BEGGHIICDDK_OFFSET UNITYSDK_OFFSET(0x168304F0)
#define LAAGPBKFGNP_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16830890)
#define LAAGPBKFGNP_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x16830490)
#define LAAGPBKFGNP_OPBEOJOGDOI_OFFSET UNITYSDK_OFFSET(0x16830B60)
#define LAAGPBKFGNP__CTOR_OFFSET UNITYSDK_OFFSET(0x168303E0)

inline static constexpr unsigned int LAAGPBKFGNP_TypeDefinitionIndex = 82182;

class LAAGPBKFGNP : public ::System::Object
{
public:
	::OIBIIIAFJMF* NPPGDCPILAL; // 0x10
	::System::Collections::Generic::SortedSet_1<::OEKHMAPHEJH*>* OJLGNABONIP; // 0x18
	::OEKHMAPHEJH* FJBJHGAEIAC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAGPBKFGNP__CTOR_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAGPBKFGNP_NGFKBKCFPLK_OFFSET))(this);
	}

	::OEKHMAPHEJH* BEGGHIICDDK()
	{
		return ((::OEKHMAPHEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAGPBKFGNP_BEGGHIICDDK_OFFSET))(this);
	}

	::System::Void BBLJJOMEBGP(::OEKHMAPHEJH* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::OEKHMAPHEJH*))((::PBYTE)hIl2Cpp + LAAGPBKFGNP_BBLJJOMEBGP_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAGPBKFGNP_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void OPBEOJOGDOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAGPBKFGNP_OPBEOJOGDOI_OFFSET))(this);
	}
};
