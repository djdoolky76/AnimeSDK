#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGACHEOMECA.h"
class CDKEBLNOEPH;
class DEHPBHIBGGK;
class LFCKLPMBGGI;
class OAPFEGCKDNG;
class OEODAOIOGLO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CEOABLKMPKE_BIJIEHCMGAG_OFFSET UNITYSDK_OFFSET(0x18828EC0)
#define CEOABLKMPKE_CGMICCPEEDM_OFFSET UNITYSDK_OFFSET(0x18828EA0)
#define CEOABLKMPKE_CTOR_OFFSET UNITYSDK_OFFSET(0x188290B0)
#define CEOABLKMPKE_FCGGPJPFJFH_OFFSET UNITYSDK_OFFSET(0x18828ED0)
#define CEOABLKMPKE_FMHLLFCGBPM_OFFSET UNITYSDK_OFFSET(0x18828EE0)
#define CEOABLKMPKE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18828CC0)
#define CEOABLKMPKE_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x18828D30)
#define CEOABLKMPKE_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x18828E70)
#define CEOABLKMPKE_JFMCDLDHBOB_OFFSET UNITYSDK_OFFSET(0x18828EB0)
#define CEOABLKMPKE_PDCHHJKNAAD_OFFSET UNITYSDK_OFFSET(0x18828F90)
#define CEOABLKMPKE_PHOBLLNADAL_OFFSET UNITYSDK_OFFSET(0x18828E40)
#define CEOABLKMPKE___N__0_OFFSET UNITYSDK_OFFSET(0x188290C0)

inline static constexpr unsigned int CEOABLKMPKE_TypeDefinitionIndex = 60758;

	class CEOABLKMPKE : public ::DGACHEOMECA
	{
	public:
		::OEODAOIOGLO* NEFLIPOAKAG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* PHOBLLNADAL()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_PHOBLLNADAL_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* CGMICCPEEDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_CGMICCPEEDM_OFFSET))(this);
		}

		::System::String* JFMCDLDHBOB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_JFMCDLDHBOB_OFFSET))(this);
		}

		::System::String* BIJIEHCMGAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_BIJIEHCMGAG_OFFSET))(this);
		}

		::DEHPBHIBGGK* FCGGPJPFJFH()
		{
			return ((::DEHPBHIBGGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_FCGGPJPFJFH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* FMHLLFCGBPM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE_FMHLLFCGBPM_OFFSET))(this);
		}

		::System::Boolean PDCHHJKNAAD(::LFCKLPMBGGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + CEOABLKMPKE_PDCHHJKNAAD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOABLKMPKE___N__0_OFFSET))(this);
		}

	};
