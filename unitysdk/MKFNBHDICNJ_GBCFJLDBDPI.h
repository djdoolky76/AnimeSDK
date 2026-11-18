#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAOAKNOBGIJ;
class MKFNBHDICNJ;
namespace System { class Action; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_GBCFJLDBDPI_CJMGMBNLONB_OFFSET UNITYSDK_OFFSET(0x177C7D20)
#define MKFNBHDICNJ_GBCFJLDBDPI_MIPFFDICNJI_OFFSET UNITYSDK_OFFSET(0x177C80E0)
#define MKFNBHDICNJ_GBCFJLDBDPI__CTOR_OFFSET UNITYSDK_OFFSET(0x177C7D10)

inline static constexpr unsigned int MKFNBHDICNJ_GBCFJLDBDPI_TypeDefinitionIndex = 61369;

class MKFNBHDICNJ_GBCFJLDBDPI : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* DKDBPEPKALE; // 0x18
	::System::UInt32 ACHBBPJIBIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GBCFJLDBDPI__CTOR_OFFSET))(this);
	}

	::System::Void CJMGMBNLONB(::DFDEIDBBGHG_1<::LAOAKNOBGIJ*>* EOEJGFDHHDA)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::LAOAKNOBGIJ*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GBCFJLDBDPI_CJMGMBNLONB_OFFSET))(this, EOEJGFDHHDA);
	}

	::System::Void MIPFFDICNJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_GBCFJLDBDPI_MIPFFDICNJI_OFFSET))(this);
	}
};
