#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMDJPECCEM_KCDKJMCHJJB_ScopeType.h"
#include "unitysdk/System/Object.h"
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define DIMDJPECCEM_KCDKJMCHJJB_BONNKENEPCP_OFFSET UNITYSDK_OFFSET(0x18ED7E50)
#define DIMDJPECCEM_KCDKJMCHJJB_CDNCFEJKMOF_OFFSET UNITYSDK_OFFSET(0x18ED7150)
#define DIMDJPECCEM_KCDKJMCHJJB_CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9620)
#define DIMDJPECCEM_KCDKJMCHJJB_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0x18ED51C0)
#define DIMDJPECCEM_KCDKJMCHJJB_FMBGAKEIDNM_OFFSET UNITYSDK_OFFSET(0x18ED5150)
#define DIMDJPECCEM_KCDKJMCHJJB_GGCPJGGIPLK_OFFSET UNITYSDK_OFFSET(0x18ED7DA0)
#define DIMDJPECCEM_KCDKJMCHJJB_HGAAIJIJBAK_OFFSET UNITYSDK_OFFSET(0x18ED7F80)
#define DIMDJPECCEM_KCDKJMCHJJB_IKKDCFMEEHA_OFFSET UNITYSDK_OFFSET(0x18ED4F30)
#define DIMDJPECCEM_KCDKJMCHJJB_JKKJAFDLAAH_OFFSET UNITYSDK_OFFSET(0x18ED7ED0)
#define DIMDJPECCEM_KCDKJMCHJJB_KGLNFGLHOBL_OFFSET UNITYSDK_OFFSET(0x18ED5040)
#define DIMDJPECCEM_KCDKJMCHJJB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x18ED4EC0)
#define DIMDJPECCEM_KCDKJMCHJJB_POAHFONFCLE_OFFSET UNITYSDK_OFFSET(0x18ED7C80)

inline static constexpr unsigned int DIMDJPECCEM_KCDKJMCHJJB_TypeDefinitionIndex = 79234;

	class DIMDJPECCEM_KCDKJMCHJJB : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* BIMOBCIFNKH; // 0x10
		::System::Collections::Generic::Stack_1<::System::Boolean>* LFCJBEIIALH; // 0x18
		::System::Void _ctor(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::String* FJGGODFCDCJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_FJGGODFCDCJ_OFFSET))(this);
		}

		::System::IDisposable* KGLNFGLHOBL()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_KGLNFGLHOBL_OFFSET))(this);
		}

		::System::IDisposable* IKKDCFMEEHA()
		{
			return ((::System::IDisposable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_IKKDCFMEEHA_OFFSET))(this);
		}

		::System::Void GGCPJGGIPLK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_GGCPJGGIPLK_OFFSET))(this, a1);
		}

		::System::Void CDNCFEJKMOF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_CDNCFEJKMOF_OFFSET))(this, a1);
		}

		::System::Void FMBGAKEIDNM(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_FMBGAKEIDNM_OFFSET))(this, a1, a2);
		}

		::System::Void POAHFONFCLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_POAHFONFCLE_OFFSET))(this);
		}

		::System::Void BONNKENEPCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_BONNKENEPCP_OFFSET))(this);
		}

		::System::Void HGAAIJIJBAK(::DIMDJPECCEM_KCDKJMCHJJB_ScopeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIMDJPECCEM_KCDKJMCHJJB_ScopeType))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_HGAAIJIJBAK_OFFSET))(this, a1);
		}

		::System::Void JKKJAFDLAAH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIMDJPECCEM_KCDKJMCHJJB_JKKJAFDLAAH_OFFSET))(this, a1);
		}

	};
