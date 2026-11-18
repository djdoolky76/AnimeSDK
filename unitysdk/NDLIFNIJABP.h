#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JGLIFHIAIEH.h"

class MCNGCOMDBFF;
class NEMCALCIOAA;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDLIFNIJABP_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1F0ABBE0)
#define NDLIFNIJABP_DFHLKAACMNE_OFFSET UNITYSDK_OFFSET(0x1F0AC6A0)
#define NDLIFNIJABP_DGGPAABLEAE_1_OFFSET UNITYSDK_OFFSET(0x1F0AC0D0)
#define NDLIFNIJABP_DGGPAABLEAE_OFFSET UNITYSDK_OFFSET(0x1F0ABF00)
#define NDLIFNIJABP_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1F0ABCC0)
#define NDLIFNIJABP_FMGDANCAHDL_OFFSET UNITYSDK_OFFSET(0x1F0AC360)
#define NDLIFNIJABP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1F0ABEB0)
#define NDLIFNIJABP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0ACA30)

inline static constexpr unsigned int NDLIFNIJABP_TypeDefinitionIndex = 28770;

class NDLIFNIJABP : public ::System::Object
{
public:
	::MCNGCOMDBFF* IHMOICJEMEF; // 0x10
	::System::Collections::Generic::HashSet_1<::MCNGCOMDBFF*>* DJLBDMMMBAG; // 0x18
	::System::Collections::Generic::List_1<::MCNGCOMDBFF*>* HAANIHOBDAG; // 0x20
	::System::Collections::Generic::List_1<::MCNGCOMDBFF*>* OLJJEJNFMDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLIFNIJABP__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::MCNGCOMDBFF* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MCNGCOMDBFF*))((::PBYTE)hIl2Cpp + NDLIFNIJABP_ANPBCLAFCJB_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Void FLHNGDLANDC(::MCNGCOMDBFF* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MCNGCOMDBFF*))((::PBYTE)hIl2Cpp + NDLIFNIJABP_FLHNGDLANDC_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Void OKJCHFGIKBH(::MCNGCOMDBFF* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MCNGCOMDBFF*))((::PBYTE)hIl2Cpp + NDLIFNIJABP_OKJCHFGIKBH_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>* DGGPAABLEAE(::JGLIFHIAIEH OHOGDOMNHNK, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>*(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + NDLIFNIJABP_DGGPAABLEAE_OFFSET))(this, OHOGDOMNHNK, NCCDJLDKFGA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>* DGGPAABLEAE_1(::JGLIFHIAIEH OHOGDOMNHNK, ::System::Single NCCDJLDKFGA, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>*(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NDLIFNIJABP_DGGPAABLEAE_1_OFFSET))(this, OHOGDOMNHNK, NCCDJLDKFGA, FBNGKPGLADH);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>* FMGDANCAHDL(::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MCNGCOMDBFF*>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NDLIFNIJABP_FMGDANCAHDL_OFFSET))(this, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	::System::Void DFHLKAACMNE(::NEMCALCIOAA* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::NEMCALCIOAA*))((::PBYTE)hIl2Cpp + NDLIFNIJABP_DFHLKAACMNE_OFFSET))(this, EJGDHCIBCJH);
	}
};
