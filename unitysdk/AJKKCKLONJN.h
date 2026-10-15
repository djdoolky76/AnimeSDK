#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCKNOHGIONG.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJKKCKLONJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C430AA0)
#define AJKKCKLONJN_GEJBOPPCFKL_OFFSET UNITYSDK_OFFSET(0x1C430810)
#define AJKKCKLONJN_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0x1C430230)
#define AJKKCKLONJN_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0x1C4301E0)
#define AJKKCKLONJN_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0x1C430520)
#define AJKKCKLONJN_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C430280)
#define AJKKCKLONJN_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0x1C430320)

	class AJKKCKLONJN : public ::System::Object
	{
	public:
		::Il2CppArray<::CCKNOHGIONG>* PFBFGLKAGPA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CCKNOHGIONG>* BIOBMIAJCDB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKKCKLONJN_CTOR_OFFSET))(this);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJKKCKLONJN_JLHENLIKDGF_OFFSET))(this, a1);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKKCKLONJN_ICLDDLDJBFL_OFFSET))(this);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJKKCKLONJN_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJKKCKLONJN_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJKKCKLONJN_LOJMCJIILCN_OFFSET))(this, a1);
		}

		::System::Void GEJBOPPCFKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKKCKLONJN_GEJBOPPCFKL_OFFSET))(this);
		}

	};
