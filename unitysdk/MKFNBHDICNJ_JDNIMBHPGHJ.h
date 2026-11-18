#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELBHCPLOMJA;
class IDGDIFDMIDP;
class MKFNBHDICNJ;
namespace System { class Action; }
template <typename T> class DFDEIDBBGHG_1;

#define MKFNBHDICNJ_JDNIMBHPGHJ_JEDPDKKGJNA_OFFSET UNITYSDK_OFFSET(0x151E74B0)
#define MKFNBHDICNJ_JDNIMBHPGHJ_NAAAGCODHOA_OFFSET UNITYSDK_OFFSET(0x151E7470)
#define MKFNBHDICNJ_JDNIMBHPGHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151E7460)

inline static constexpr unsigned int MKFNBHDICNJ_JDNIMBHPGHJ_TypeDefinitionIndex = 61396;

class MKFNBHDICNJ_JDNIMBHPGHJ : public ::System::Object
{
public:
	::IDGDIFDMIDP* AJAAEBEOIJM; // 0x10
	::System::Action* DKDBPEPKALE; // 0x18
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x20
	::System::Boolean PKHGIPKBAAL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JDNIMBHPGHJ__CTOR_OFFSET))(this);
	}

	::System::Void NAAAGCODHOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JDNIMBHPGHJ_NAAAGCODHOA_OFFSET))(this);
	}

	::System::Void JEDPDKKGJNA(::DFDEIDBBGHG_1<::ELBHCPLOMJA*>* EOEJGFDHHDA, ::System::Boolean FKGMECIECDM, ::System::Boolean IFGJHJIJMMI)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::ELBHCPLOMJA*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_JDNIMBHPGHJ_JEDPDKKGJNA_OFFSET))(this, EOEJGFDHHDA, FKGMECIECDM, IFGJHJIJMMI);
	}
};
