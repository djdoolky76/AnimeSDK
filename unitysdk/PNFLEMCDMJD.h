#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGACHEOMECA.h"
class CDKEBLNOEPH;
class DEHPBHIBGGK;
class EADIJOHAPHK;
class LFCKLPMBGGI;
class OAPFEGCKDNG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PNFLEMCDMJD_BIJIEHCMGAG_OFFSET UNITYSDK_OFFSET(0xC330FF0)
#define PNFLEMCDMJD_CGMICCPEEDM_OFFSET UNITYSDK_OFFSET(0xC330FD0)
#define PNFLEMCDMJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC3310C0)
#define PNFLEMCDMJD_FCGGPJPFJFH_OFFSET UNITYSDK_OFFSET(0xC331000)
#define PNFLEMCDMJD_FMHLLFCGBPM_OFFSET UNITYSDK_OFFSET(0xC331010)
#define PNFLEMCDMJD_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xC330DF0)
#define PNFLEMCDMJD_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xC330E60)
#define PNFLEMCDMJD_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xC330FA0)
#define PNFLEMCDMJD_JFMCDLDHBOB_OFFSET UNITYSDK_OFFSET(0xC330FE0)
#define PNFLEMCDMJD_PHOBLLNADAL_OFFSET UNITYSDK_OFFSET(0xC330F70)
#define PNFLEMCDMJD___N__0_OFFSET UNITYSDK_OFFSET(0xC3310D0)

inline static constexpr unsigned int PNFLEMCDMJD_TypeDefinitionIndex = 59483;

	class PNFLEMCDMJD : public ::DGACHEOMECA
	{
	public:
		::EADIJOHAPHK* GMIKMPHLBMK; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_GETTYPENAME_OFFSET))(this);
		}

		::CDKEBLNOEPH* get_DefaultAbsolutePath()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
		}

		::CDKEBLNOEPH* PHOBLLNADAL()
		{
			return ((::CDKEBLNOEPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_PHOBLLNADAL_OFFSET))(this);
		}

		::OAPFEGCKDNG* get_RelativePath()
		{
			return ((::OAPFEGCKDNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_GET_RELATIVEPATH_OFFSET))(this);
		}

		::System::String* CGMICCPEEDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_CGMICCPEEDM_OFFSET))(this);
		}

		::System::String* JFMCDLDHBOB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_JFMCDLDHBOB_OFFSET))(this);
		}

		::System::String* BIJIEHCMGAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_BIJIEHCMGAG_OFFSET))(this);
		}

		::DEHPBHIBGGK* FCGGPJPFJFH()
		{
			return ((::DEHPBHIBGGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_FCGGPJPFJFH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* FMHLLFCGBPM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD_FMHLLFCGBPM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFLEMCDMJD___N__0_OFFSET))(this);
		}

	};
