#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGDELEAHIJO;
class IGPLBKLFLED;
class NKMIDHGFCDI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKMIDHGFCDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4991D0)
#define NKMIDHGFCDI_DIAOALDNCIM_OFFSET UNITYSDK_OFFSET(0x1C498A60)
#define NKMIDHGFCDI_ICLDDLDJBFL_OFFSET UNITYSDK_OFFSET(0x1C498A10)
#define NKMIDHGFCDI_JLHENLIKDGF_OFFSET UNITYSDK_OFFSET(0x1C498D20)
#define NKMIDHGFCDI_KLGNPCAOBJJ_OFFSET UNITYSDK_OFFSET(0x1C498DB0)
#define NKMIDHGFCDI_LOJMCJIILCN_OFFSET UNITYSDK_OFFSET(0x1C498980)
#define NKMIDHGFCDI_MCEMEHPCOLP_OFFSET UNITYSDK_OFFSET(0x1C4988F0)
#define NKMIDHGFCDI_NGCFPFALCGD_OFFSET UNITYSDK_OFFSET(0x1C498BC0)

inline static constexpr unsigned int NKMIDHGFCDI_TypeDefinitionIndex = 41502;

	class NKMIDHGFCDI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IGPLBKLFLED*>* KJPFENPNFBP; // 0x10
		::System::UInt32 OKEKLANCIOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_CTOR_OFFSET))(this);
		}

		::HGDELEAHIJO* MCEMEHPCOLP(::System::Int32 a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_MCEMEHPCOLP_OFFSET))(this, a1);
		}

		::HGDELEAHIJO* LOJMCJIILCN(::System::String* a1)
		{
			return ((::HGDELEAHIJO*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_LOJMCJIILCN_OFFSET))(this, a1);
		}

		::System::Int32 ICLDDLDJBFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_ICLDDLDJBFL_OFFSET))(this);
		}

		::System::Boolean DIAOALDNCIM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_DIAOALDNCIM_OFFSET))(this, a1);
		}

		::System::Boolean NGCFPFALCGD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_NGCFPFALCGD_OFFSET))(this, a1);
		}

		::System::Void JLHENLIKDGF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_JLHENLIKDGF_OFFSET))(this, a1);
		}

		static ::NKMIDHGFCDI* KLGNPCAOBJJ(::System::String* a1)
		{
			return ((::NKMIDHGFCDI*(*)(::System::String*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI_KLGNPCAOBJJ_OFFSET))(a1);
		}

	};
