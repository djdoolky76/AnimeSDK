#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEKELFEJKOP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define OEKELFEJKOP_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0xBE29FE0)
#define OEKELFEJKOP_AGHEILHMGLP_OFFSET UNITYSDK_OFFSET(0xBE2A070)
#define OEKELFEJKOP_AGHPDPFMFFC_OFFSET UNITYSDK_OFFSET(0xBE297F0)
#define OEKELFEJKOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE29880)
#define OEKELFEJKOP_DKOOHFBFJPL_OFFSET UNITYSDK_OFFSET(0xBE29F00)
#define OEKELFEJKOP_DLDMIKBNBJH_OFFSET UNITYSDK_OFFSET(0xBE298C0)
#define OEKELFEJKOP_PIMPEHIOGLC_OFFSET UNITYSDK_OFFSET(0xBE29F80)

inline static constexpr unsigned int OEKELFEJKOP_TypeDefinitionIndex = 59947;

	class OEKELFEJKOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GFMFACANHMN; // 0x10
		::System::Int32 NNIPLKKOFAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKELFEJKOP_CTOR_OFFSET))(this);
		}

		static ::OEKELFEJKOP* AGHPDPFMFFC(::System::String* a1)
		{
			return ((::OEKELFEJKOP*(*)(::System::String*))((::PBYTE)hIl2Cpp + OEKELFEJKOP_AGHPDPFMFFC_OFFSET))(a1);
		}

		::System::String* DKOOHFBFJPL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKELFEJKOP_DKOOHFBFJPL_OFFSET))(this);
		}

		::System::Boolean PIMPEHIOGLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKELFEJKOP_PIMPEHIOGLC_OFFSET))(this);
		}

		::System::Void ACGBIOICLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKELFEJKOP_ACGBIOICLEO_OFFSET))(this);
		}

		::System::Void DLDMIKBNBJH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEKELFEJKOP_DLDMIKBNBJH_OFFSET))(this, a1);
		}

		::System::Void AGHEILHMGLP(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + OEKELFEJKOP_AGHEILHMGLP_OFFSET))(this, a1);
		}

	};
