#pragma once
#include "unitysdk/unitysdk.h"

class PLMLJOGHFAK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNLCNMNNDCL_BKLKHPEADCL_OFFSET UNITYSDK_OFFSET(0x15DCE6A0)
#define HNLCNMNNDCL_CMLHDEKHMFP_OFFSET UNITYSDK_OFFSET(0x15DCE100)
#define HNLCNMNNDCL_GEJHEKJCJFB_OFFSET UNITYSDK_OFFSET(0x15DCE700)
#define HNLCNMNNDCL_NGCOJFDLBLF_OFFSET UNITYSDK_OFFSET(0x15DCE160)
#define HNLCNMNNDCL_NPJMNDHKBBP_OFFSET UNITYSDK_OFFSET(0x15DCE4E0)
#define HNLCNMNNDCL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15DCE1C0)
#define HNLCNMNNDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCDFF0)

inline static constexpr unsigned int HNLCNMNNDCL_TypeDefinitionIndex = 47709;

class HNLCNMNNDCL
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* FNMGJBACFGH; // 0x10
	::PLMLJOGHFAK* NJNBCFLBOGC; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* CJGEKBMBHJA; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* BBGEPINKOBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLCNMNNDCL__CTOR_OFFSET))(this);
	}

	::System::Void CMLHDEKHMFP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_CMLHDEKHMFP_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean NGCOJFDLBLF(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_NGCOJFDLBLF_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Int32 NPJMNDHKBBP(::System::Func_2<::System::Int32, ::System::Boolean>* NBDAIIFANHD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_NPJMNDHKBBP_OFFSET))(this, NBDAIIFANHD);
	}

	::System::Void BKLKHPEADCL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_BKLKHPEADCL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void GEJHEKJCJFB(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_GEJHEKJCJFB_OFFSET))(this, MGMDLMBEDJF);
	}
};
