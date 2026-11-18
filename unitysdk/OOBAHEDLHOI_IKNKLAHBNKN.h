#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJKFPGAJOBO;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define OOBAHEDLHOI_IKNKLAHBNKN_BMGONNLCFPG_OFFSET UNITYSDK_OFFSET(0x172E0660)
#define OOBAHEDLHOI_IKNKLAHBNKN_NKDAMGKPJCC_OFFSET UNITYSDK_OFFSET(0x172E0670)
#define OOBAHEDLHOI_IKNKLAHBNKN__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0650)

inline static constexpr unsigned int OOBAHEDLHOI_IKNKLAHBNKN_TypeDefinitionIndex = 75534;

class OOBAHEDLHOI_IKNKLAHBNKN : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action_1<::DFDEIDBBGHG_1<::CJKFPGAJOBO*>*>* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_IKNKLAHBNKN__CTOR_OFFSET))(this);
	}

	::System::Void BMGONNLCFPG(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_IKNKLAHBNKN_BMGONNLCFPG_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void NKDAMGKPJCC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_IKNKLAHBNKN_NKDAMGKPJCC_OFFSET))(this, GLAOEHCGCFO);
	}
};
