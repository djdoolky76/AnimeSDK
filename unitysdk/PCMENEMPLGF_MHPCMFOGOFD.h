#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class IFOHGNLIAKH;
class PCMENEMPLGF_KIFCAMMJLFD;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define PCMENEMPLGF_MHPCMFOGOFD_FCAEDLAECJI_OFFSET UNITYSDK_OFFSET(0x16F9DBA0)
#define PCMENEMPLGF_MHPCMFOGOFD_IOBAJAOIOEA_OFFSET UNITYSDK_OFFSET(0x16F9E160)
#define PCMENEMPLGF_MHPCMFOGOFD_JCBHIILJNLG_OFFSET UNITYSDK_OFFSET(0x16F9DEB0)
#define PCMENEMPLGF_MHPCMFOGOFD_LNHDNDEJKLE_OFFSET UNITYSDK_OFFSET(0x16F9E100)
#define PCMENEMPLGF_MHPCMFOGOFD_OJOAIGIHLBN_OFFSET UNITYSDK_OFFSET(0x16F9DF60)
#define PCMENEMPLGF_MHPCMFOGOFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9DB90)

inline static constexpr unsigned int PCMENEMPLGF_MHPCMFOGOFD_TypeDefinitionIndex = 62847;

class PCMENEMPLGF_MHPCMFOGOFD : public ::System::Object
{
public:
	::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* CFOAGBGGOLH; // 0x10
	::System::Action* AEPKIFBFCOD; // 0x18
	::FMHDMLBDIJC* BLFMEHNGIPN; // 0x20
	::FMHDMLBDIJC* COHFFGAPOLF; // 0x28
	::PCMENEMPLGF_KIFCAMMJLFD* EEMOEMFLABI; // 0x30
	::System::Int32 MOGCGNJCNBM; // 0x38
	::System::Int32 HGLGHNBIFKK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD__CTOR_OFFSET))(this);
	}

	::System::Void FCAEDLAECJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD_FCAEDLAECJI_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> JCBHIILJNLG(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD_JCBHIILJNLG_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Void OJOAIGIHLBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD_OJOAIGIHLBN_OFFSET))(this);
	}

	::System::Object* LNHDNDEJKLE()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD_LNHDNDEJKLE_OFFSET))(this);
	}

	::System::Void IOBAJAOIOEA(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHPCMFOGOFD_IOBAJAOIOEA_OFFSET))(this, JOLDOMEIKEF);
	}
};
