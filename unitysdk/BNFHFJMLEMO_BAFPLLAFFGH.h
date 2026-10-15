#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFHFJMLEMO;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BNFHFJMLEMO_BAFPLLAFFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCC4B0)
#define BNFHFJMLEMO_BAFPLLAFFGH_DCOLLBEIGPL_OFFSET UNITYSDK_OFFSET(0xBDCC6E0)
#define BNFHFJMLEMO_BAFPLLAFFGH_FCIMEFBNPIF_OFFSET UNITYSDK_OFFSET(0xBDCC5B0)
#define BNFHFJMLEMO_BAFPLLAFFGH_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0xBDCC990)
#define BNFHFJMLEMO_BAFPLLAFFGH_HBJEKNJOOHC_OFFSET UNITYSDK_OFFSET(0xBDCB8E0)
#define BNFHFJMLEMO_BAFPLLAFFGH_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0xBDCC9D0)
#define BNFHFJMLEMO_BAFPLLAFFGH_JIJEOJIJEBA_OFFSET UNITYSDK_OFFSET(0xBDCC600)
#define BNFHFJMLEMO_BAFPLLAFFGH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xBDCBCC0)
#define BNFHFJMLEMO_BAFPLLAFFGH_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xBDCC6F0)
#define BNFHFJMLEMO_BAFPLLAFFGH_PLPCJPMFELI_OFFSET UNITYSDK_OFFSET(0xBDCC560)

	class BNFHFJMLEMO_BAFPLLAFFGH : public ::System::Object
	{
	public:
		::UnityEngine::Object* LKIMACFHCAE; // 0x10
		::BNFHFJMLEMO* ECPJEBHMMHC; // 0x18
		::System::Collections::Generic::List_1<::System::Action*>* EBPEECFACIG; // 0x20
		::System::String* IGDPHOBJENH; // 0x28
		::System::Boolean JJGABAMOFCI; // 0x30
		::System::Void _ctor(::BNFHFJMLEMO* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BNFHFJMLEMO*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PLPCJPMFELI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_PLPCJPMFELI_OFFSET))(this);
		}

		::System::Void FCIMEFBNPIF(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_FCIMEFBNPIF_OFFSET))(this, a1);
		}

		::System::Void JIJEOJIJEBA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_JIJEOJIJEBA_OFFSET))(this, a1);
		}

		::System::Int32 HBJEKNJOOHC(::System::Action* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_HBJEKNJOOHC_OFFSET))(this, a1);
		}

		::System::Boolean DCOLLBEIGPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_DCOLLBEIGPL_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_OIBKPJEGPOK_OFFSET))(this);
		}

		::System::Boolean FDHFIHDPHGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_FDHFIHDPHGD_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_KAOLPGACCID_OFFSET))(this);
		}

		::System::Single IDPFIMKAMDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_IDPFIMKAMDN_OFFSET))(this);
		}

	};
