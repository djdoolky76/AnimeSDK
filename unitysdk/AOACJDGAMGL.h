#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLOCAENEKMK;
class NNEIOFDLLMI;
class OAIPJANPCEK;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define AOACJDGAMGL_BANBMAHHJCP_OFFSET UNITYSDK_OFFSET(0x1671C520)
#define AOACJDGAMGL_BBFJDNGOAFD_OFFSET UNITYSDK_OFFSET(0x1671BCD0)
#define AOACJDGAMGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1671B820)
#define AOACJDGAMGL_DGNMBPONDOH_OFFSET UNITYSDK_OFFSET(0x1671BE50)
#define AOACJDGAMGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1671B890)
#define AOACJDGAMGL_ICEGNJONKIB_OFFSET UNITYSDK_OFFSET(0x1671BB30)
#define AOACJDGAMGL_IENKDIOCKCJ_OFFSET UNITYSDK_OFFSET(0x1671BC70)
#define AOACJDGAMGL_LLAIMKOADGF_OFFSET UNITYSDK_OFFSET(0x1671B8E0)
#define AOACJDGAMGL_MBDLFCEFCBP_OFFSET UNITYSDK_OFFSET(0x1671BC00)
#define AOACJDGAMGL_PMOLGGMMFBH_OFFSET UNITYSDK_OFFSET(0x1671C4D0)

inline static constexpr unsigned int AOACJDGAMGL_TypeDefinitionIndex = 80486;

	class AOACJDGAMGL : public ::System::Object
	{
	public:
		::OAIPJANPCEK* PDENFEFCAGN; // 0x10
		::System::Boolean ICFNKGLCAPA; // 0x18
		::System::Boolean MOIOKBPFKJC; // 0x19
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + AOACJDGAMGL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_DISPOSE_OFFSET))(this);
		}

		::System::Void LLAIMKOADGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_LLAIMKOADGF_OFFSET))(this);
		}

		::System::Void IENKDIOCKCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_IENKDIOCKCJ_OFFSET))(this);
		}

		::System::Void BBFJDNGOAFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_BBFJDNGOAFD_OFFSET))(this);
		}

		::System::Void DGNMBPONDOH(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + AOACJDGAMGL_DGNMBPONDOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean PMOLGGMMFBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_PMOLGGMMFBH_OFFSET))(this);
		}

		::System::Void BANBMAHHJCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_BANBMAHHJCP_OFFSET))(this);
		}

		::NNEIOFDLLMI* MBDLFCEFCBP()
		{
			return ((::NNEIOFDLLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_MBDLFCEFCBP_OFFSET))(this);
		}

		::GLOCAENEKMK* ICEGNJONKIB()
		{
			return ((::GLOCAENEKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACJDGAMGL_ICEGNJONKIB_OFFSET))(this);
		}

	};
