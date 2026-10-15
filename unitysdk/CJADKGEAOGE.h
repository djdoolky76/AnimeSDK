#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDNJGBJGPF;
class NHCHDKJLNBJ;
class OBJANKHLNGO;
namespace System { class Nullable; }
namespace System { class Object; }

#define CJADKGEAOGE_BNHHPLNNOBO_OFFSET UNITYSDK_OFFSET(0xCF911F0)
#define CJADKGEAOGE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF91070)
#define CJADKGEAOGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF91130)
#define CJADKGEAOGE_EGBPKKHNAHE_OFFSET UNITYSDK_OFFSET(0xCF916B0)
#define CJADKGEAOGE_FOCEHMHHAKK_OFFSET UNITYSDK_OFFSET(0xCF915D0)
#define CJADKGEAOGE_GBDEENEIOAG_OFFSET UNITYSDK_OFFSET(0xCF91640)
#define CJADKGEAOGE_IKPOENIHNGN_OFFSET UNITYSDK_OFFSET(0xCF91780)
#define CJADKGEAOGE_JFJDEADGDEI_OFFSET UNITYSDK_OFFSET(0xCF912D0)
#define CJADKGEAOGE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF91080)
#define CJADKGEAOGE___ONHIDELOADINGPAGE_B__8_0_OFFSET UNITYSDK_OFFSET(0xCF917D0)

inline static constexpr unsigned int CJADKGEAOGE_TypeDefinitionIndex = 81494;

	class CJADKGEAOGE : public ::System::Object
	{
	public:
		::NHCHDKJLNBJ* LBNAGLIGKIO; // 0x10
		::ILDNJGBJGPF* PFJGDJPMAMM; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Nullable* IJGBJLOLMOE; // 0x28
		::System::Boolean GFAMGLFOMGI; // 0x30
		::System::Void _ctor(::NHCHDKJLNBJ* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + CJADKGEAOGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + CJADKGEAOGE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_DISPOSE_OFFSET))(this);
		}

		::System::Void BNHHPLNNOBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJADKGEAOGE_BNHHPLNNOBO_OFFSET))(this, a1);
		}

		::System::Void JFJDEADGDEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_JFJDEADGDEI_OFFSET))(this);
		}

		::System::Boolean EGBPKKHNAHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_EGBPKKHNAHE_OFFSET))(this);
		}

		::System::Void FOCEHMHHAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_FOCEHMHHAKK_OFFSET))(this);
		}

		::System::Void GBDEENEIOAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_GBDEENEIOAG_OFFSET))(this);
		}

		::System::Void IKPOENIHNGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE_IKPOENIHNGN_OFFSET))(this);
		}

		::System::Void __OnHideLoadingPage_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJADKGEAOGE___ONHIDELOADINGPAGE_B__8_0_OFFSET))(this);
		}

	};
