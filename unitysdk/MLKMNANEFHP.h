#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBPDOLCMLDP.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

class NCLLKAIFDGO;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLKMNANEFHP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x174A73E0)
#define MLKMNANEFHP_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x174A7300)
#define MLKMNANEFHP_BNDGGOHLHEM_OFFSET UNITYSDK_OFFSET(0x174A76D0)
#define MLKMNANEFHP_COFHOCIEHPD_1_OFFSET UNITYSDK_OFFSET(0x174A7230)
#define MLKMNANEFHP_COFHOCIEHPD_2_OFFSET UNITYSDK_OFFSET(0x174A79F0)
#define MLKMNANEFHP_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x174A71C0)
#define MLKMNANEFHP_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x174A7680)
#define MLKMNANEFHP_IEICNHEBIGL_1_OFFSET UNITYSDK_OFFSET(0x174A7620)
#define MLKMNANEFHP_IEICNHEBIGL_2_OFFSET UNITYSDK_OFFSET(0x174A7A60)
#define MLKMNANEFHP_IEICNHEBIGL_OFFSET UNITYSDK_OFFSET(0x174A7430)
#define MLKMNANEFHP_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x174A7AC0)
#define MLKMNANEFHP_OOMMHHOPNJN_OFFSET UNITYSDK_OFFSET(0x174A78C0)
#define MLKMNANEFHP__CTOR_OFFSET UNITYSDK_OFFSET(0x174A7160)

inline static constexpr unsigned int MLKMNANEFHP_TypeDefinitionIndex = 83099;

class MLKMNANEFHP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* IODCOLNIJMM; // 0x10
	::NCLLKAIFDGO* KDOGLOLIHGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKMNANEFHP__CTOR_OFFSET))(this);
	}

	::System::Void COFHOCIEHPD(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + MLKMNANEFHP_COFHOCIEHPD_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ, PHHDHIBOCKA);
	}

	static ::MLKMNANEFHP* BBPCBEEHALC(::NCLLKAIFDGO* GIDNENIOPFK)
	{
		return ((::MLKMNANEFHP*(*)(::NCLLKAIFDGO*))((::PBYTE)hIl2Cpp + MLKMNANEFHP_BBPCBEEHALC_OFFSET))(GIDNENIOPFK);
	}

	::System::Void IEICNHEBIGL(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLKMNANEFHP_IEICNHEBIGL_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void IEICNHEBIGL_1(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32))((::PBYTE)hIl2Cpp + MLKMNANEFHP_IEICNHEBIGL_1_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKMNANEFHP_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void BNDGGOHLHEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKMNANEFHP_BNDGGOHLHEM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NCLLKAIFDGO* GIDNENIOPFK)
	{
		return ((::System::Void(*)(::PVOID, ::NCLLKAIFDGO*))((::PBYTE)hIl2Cpp + MLKMNANEFHP_BBOMJDBNHIC_OFFSET))(this, GIDNENIOPFK);
	}

	::System::Boolean OOMMHHOPNJN(::System::Int32 GEPABHJBIAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLKMNANEFHP_OOMMHHOPNJN_OFFSET))(this, GEPABHJBIAH);
	}

	::System::Void COFHOCIEHPD_1(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + MLKMNANEFHP_COFHOCIEHPD_1_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void COFHOCIEHPD_2(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + MLKMNANEFHP_COFHOCIEHPD_2_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH, PHHDHIBOCKA);
	}

	::System::Void IEICNHEBIGL_2(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType))((::PBYTE)hIl2Cpp + MLKMNANEFHP_IEICNHEBIGL_2_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ);
	}

	static ::System::Void MBKDOMFJFIG(::MLKMNANEFHP*& GCAOGFBGMMH)
	{
		return ((::System::Void(*)(::MLKMNANEFHP*&))((::PBYTE)hIl2Cpp + MLKMNANEFHP_MBKDOMFJFIG_OFFSET))(GCAOGFBGMMH);
	}
};
