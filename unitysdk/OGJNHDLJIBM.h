#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class APCKGCCCMJJ;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGJNHDLJIBM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1006FEC0)
#define OGJNHDLJIBM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1006FDE0)
#define OGJNHDLJIBM_BNDGGOHLHEM_OFFSET UNITYSDK_OFFSET(0x1006F750)
#define OGJNHDLJIBM_COFHOCIEHPD_1_OFFSET UNITYSDK_OFFSET(0x1006FB90)
#define OGJNHDLJIBM_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x1006FB30)
#define OGJNHDLJIBM_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1006FAE0)
#define OGJNHDLJIBM_IEICNHEBIGL_1_OFFSET UNITYSDK_OFFSET(0x1006FF60)
#define OGJNHDLJIBM_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x1006FC40)
#define OGJNHDLJIBM_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1006F9F0)
#define OGJNHDLJIBM_OOMMHHOPNJN_1_OFFSET UNITYSDK_OFFSET(0x1006FF10)
#define OGJNHDLJIBM_OOMMHHOPNJN_OFFSET UNITYSDK_OFFSET(0x1006F8C0)
#define OGJNHDLJIBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1006F6F0)

inline static constexpr unsigned int OGJNHDLJIBM_TypeDefinitionIndex = 38566;

class OGJNHDLJIBM : public ::System::Object
{
public:
	::APCKGCCCMJJ* EEKOMGOBOJO; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* IODCOLNIJMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJNHDLJIBM__CTOR_OFFSET))(this);
	}

	::System::Void BNDGGOHLHEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_BNDGGOHLHEM_OFFSET))(this);
	}

	::System::Boolean OOMMHHOPNJN(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_OOMMHHOPNJN_OFFSET))(this, GEPABHJBIAH);
	}

	static ::System::Void MBKDOMFJFIG(::OGJNHDLJIBM*& GCAOGFBGMMH)
	{
		return ((::System::Void(*)(::OGJNHDLJIBM*&))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_MBKDOMFJFIG_OFFSET))(GCAOGFBGMMH);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void IEICNHEBIGL(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_IEICNHEBIGL_OFFSET))(this, GEPABHJBIAH);
	}

	static ::OGJNHDLJIBM* BBPCBEEHALC(::APCKGCCCMJJ* EFNGIMEGMPP)
	{
		return ((::OGJNHDLJIBM*(*)(::APCKGCCCMJJ*))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_BBPCBEEHALC_OFFSET))(EFNGIMEGMPP);
	}

	::System::Boolean OOMMHHOPNJN_1(::PAMPOBIPLCE GEPABHJBIAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_OOMMHHOPNJN_1_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void BBOMJDBNHIC(::APCKGCCCMJJ* EFNGIMEGMPP)
	{
		return ((::System::Void(*)(::PVOID, ::APCKGCCCMJJ*))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_BBOMJDBNHIC_OFFSET))(this, EFNGIMEGMPP);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void IEICNHEBIGL_1(::PAMPOBIPLCE GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_IEICNHEBIGL_1_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void COFHOCIEHPD_1(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + OGJNHDLJIBM_COFHOCIEHPD_1_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}
};
