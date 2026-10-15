#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGACHEOMECA.h"
class CDKEBLNOEPH;
class DEHPBHIBGGK;
class DJLGNEMNIKI;
class LFCKLPMBGGI;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KPNOBBFKNHA_BIJIEHCMGAG_OFFSET UNITYSDK_OFFSET(0xB5CDD90)
#define KPNOBBFKNHA_CGMICCPEEDM_OFFSET UNITYSDK_OFFSET(0xB5CDD70)
#define KPNOBBFKNHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CDF20)
#define KPNOBBFKNHA_FCGGPJPFJFH_OFFSET UNITYSDK_OFFSET(0xB5CDDA0)
#define KPNOBBFKNHA_FMHLLFCGBPM_OFFSET UNITYSDK_OFFSET(0xB5CDDB0)
#define KPNOBBFKNHA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xB5CDCA0)
#define KPNOBBFKNHA_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xB5CDD40)
#define KPNOBBFKNHA_JFMCDLDHBOB_OFFSET UNITYSDK_OFFSET(0xB5CDD80)
#define KPNOBBFKNHA_PDCHHJKNAAD_OFFSET UNITYSDK_OFFSET(0xB5CDE60)
#define KPNOBBFKNHA_PHOBLLNADAL_OFFSET UNITYSDK_OFFSET(0xB5CDD10)
#define KPNOBBFKNHA___N__0_OFFSET UNITYSDK_OFFSET(0xB5CDF30)

inline static constexpr unsigned int KPNOBBFKNHA_TypeDefinitionIndex = 59485;

	class KPNOBBFKNHA : public ::DGACHEOMECA
	{
	public:
		::DJLGNEMNIKI* EBOCJNNJKKC; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* PHOBLLNADAL()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_PHOBLLNADAL_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* CGMICCPEEDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_CGMICCPEEDM_OFFSET))(this);
		}

		::System::String* JFMCDLDHBOB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_JFMCDLDHBOB_OFFSET))(this);
		}

		::System::String* BIJIEHCMGAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_BIJIEHCMGAG_OFFSET))(this);
		}

		::DEHPBHIBGGK* FCGGPJPFJFH()
		{
			return ((::DEHPBHIBGGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_FCGGPJPFJFH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* FMHLLFCGBPM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_FMHLLFCGBPM_OFFSET))(this);
		}

		::System::Boolean PDCHHJKNAAD(::LFCKLPMBGGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + KPNOBBFKNHA_PDCHHJKNAAD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNOBBFKNHA___N__0_OFFSET))(this);
		}

	};
