#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGADAPCBDFJ;
class BIAGAMOMOHO;
class JOGMJAJJBGK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEOLFJOJJHE_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1419CCD0)
#define FEOLFJOJJHE_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x1419C790)
#define FEOLFJOJJHE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1419CD30)
#define FEOLFJOJJHE_MANJBLDBKAJ_OFFSET UNITYSDK_OFFSET(0x1419C920)
#define FEOLFJOJJHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1419CCC0)

inline static constexpr unsigned int FEOLFJOJJHE_TypeDefinitionIndex = 48983;

class FEOLFJOJJHE : public ::System::Object
{
public:
	::BIAGAMOMOHO* BJPIGPGMCNJ; // 0x10
	::System::Action* PLEJMLIFFHG; // 0x18
	::System::Collections::Generic::List_1<::BIAGAMOMOHO*>* KCDBMFBGGPO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOLFJOJJHE__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEOLFJOJJHE_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	::System::Void CHCGMACMJLD(::BGADAPCBDFJ*& ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::BGADAPCBDFJ*&))((::PBYTE)hIl2Cpp + FEOLFJOJJHE_CHCGMACMJLD_OFFSET))(this, ECMMKCJLBMD);
	}

	::JOGMJAJJBGK* MANJBLDBKAJ(::BIAGAMOMOHO* HMONLOEPKCK, ::System::Collections::Generic::List_1<::BIAGAMOMOHO*>* JJKKEBEKDNM)
	{
		return ((::JOGMJAJJBGK*(*)(::PVOID, ::BIAGAMOMOHO*, ::System::Collections::Generic::List_1<::BIAGAMOMOHO*>*))((::PBYTE)hIl2Cpp + FEOLFJOJJHE_MANJBLDBKAJ_OFFSET))(this, HMONLOEPKCK, JJKKEBEKDNM);
	}

	static ::FEOLFJOJJHE* JFDOOELFAOA(::BIAGAMOMOHO* BPGCPDLINPK, ::System::Collections::Generic::List_1<::BIAGAMOMOHO*>* JJKKEBEKDNM)
	{
		return ((::FEOLFJOJJHE*(*)(::BIAGAMOMOHO*, ::System::Collections::Generic::List_1<::BIAGAMOMOHO*>*))((::PBYTE)hIl2Cpp + FEOLFJOJJHE_JFDOOELFAOA_OFFSET))(BPGCPDLINPK, JJKKEBEKDNM);
	}
};
