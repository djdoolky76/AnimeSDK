#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPABBKALJPO.h"
#include "unitysdk/PAMPOBIPLCE.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
class OGJNHDLJIBM;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define FNFLMKFKKOK_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x1750CF50)
#define FNFLMKFKKOK_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x1750CEB0)
#define FNFLMKFKKOK_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x1750CE40)
#define FNFLMKFKKOK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1750CF00)
#define FNFLMKFKKOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1750CD80)

inline static constexpr unsigned int FNFLMKFKKOK_TypeDefinitionIndex = 47562;

class FNFLMKFKKOK : public ::EPABBKALJPO
{
public:
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x20

	::System::Void _ctor(::EHGPNGPADCB* EHJLNOADMFL)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + FNFLMKFKKOK__CTOR_OFFSET))(this, EHJLNOADMFL);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFLMKFKKOK_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + FNFLMKFKKOK_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void IEICNHEBIGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFLMKFKKOK_IEICNHEBIGL_OFFSET))(this);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + FNFLMKFKKOK_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}
};
