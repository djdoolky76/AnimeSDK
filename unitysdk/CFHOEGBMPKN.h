#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPOCDKHHGFG.h"

class NGJPBIDNNPK;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFHOEGBMPKN_CIMMBFCKGIJ_OFFSET UNITYSDK_OFFSET(0x1CE87070)
#define CFHOEGBMPKN_EMAFJDGCFLF_OFFSET UNITYSDK_OFFSET(0x1CE878C0)
#define CFHOEGBMPKN_NMGMNPCHLBA_OFFSET UNITYSDK_OFFSET(0x1CE87650)
#define CFHOEGBMPKN_POLHCLGABGN_1_OFFSET UNITYSDK_OFFSET(0x1CE86CD0)
#define CFHOEGBMPKN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE86C30)
#define CFHOEGBMPKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE86B90)

inline static constexpr unsigned int CFHOEGBMPKN_TypeDefinitionIndex = 34749;

class CFHOEGBMPKN : public ::GPOCDKHHGFG
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AGDGCEFEHCN; // 0x18
	::System::Boolean AAFJDEPKBGH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHOEGBMPKN__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean KFDICKEJKEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFHOEGBMPKN__CTOR_1_OFFSET))(this, KFDICKEJKEB);
	}

	::NGJPBIDNNPK* POLHCLGABGN_1(::System::Func_1<::System::Collections::IEnumerable*>* OAENJCGFFKE, ::System::String* HIAIKHDFCLN)
	{
		return ((::NGJPBIDNNPK*(*)(::PVOID, ::System::Func_1<::System::Collections::IEnumerable*>*, ::System::String*))((::PBYTE)hIl2Cpp + CFHOEGBMPKN_POLHCLGABGN_1_OFFSET))(this, OAENJCGFFKE, HIAIKHDFCLN);
	}

	::System::Void NMGMNPCHLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHOEGBMPKN_NMGMNPCHLBA_OFFSET))(this);
	}

	::System::String* CIMMBFCKGIJ(::System::String* HIAIKHDFCLN)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFHOEGBMPKN_CIMMBFCKGIJ_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void EMAFJDGCFLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHOEGBMPKN_EMAFJDGCFLF_OFFSET))(this);
	}
};
