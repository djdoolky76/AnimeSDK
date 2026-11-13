#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFHFJMLEMO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BNFHFJMLEMO_BAFPLLAFFGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A75F090)
#define BNFHFJMLEMO_BAFPLLAFFGH_DCOLLBEIGPL_OFFSET UNITYSDK_OFFSET(0x1A75F2C0)
#define BNFHFJMLEMO_BAFPLLAFFGH_FCIMEFBNPIF_OFFSET UNITYSDK_OFFSET(0x1A75F190)
#define BNFHFJMLEMO_BAFPLLAFFGH_FDHFIHDPHGD_OFFSET UNITYSDK_OFFSET(0x1A75F570)
#define BNFHFJMLEMO_BAFPLLAFFGH_HBJEKNJOOHC_OFFSET UNITYSDK_OFFSET(0x1A75E4A0)
#define BNFHFJMLEMO_BAFPLLAFFGH_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0x1A75F5B0)
#define BNFHFJMLEMO_BAFPLLAFFGH_JIJEOJIJEBA_OFFSET UNITYSDK_OFFSET(0x1A75F1E0)
#define BNFHFJMLEMO_BAFPLLAFFGH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1A75E880)
#define BNFHFJMLEMO_BAFPLLAFFGH_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0x1A75F2D0)
#define BNFHFJMLEMO_BAFPLLAFFGH_PLPCJPMFELI_OFFSET UNITYSDK_OFFSET(0x1A75F140)

inline static constexpr unsigned int BNFHFJMLEMO_BAFPLLAFFGH_TypeDefinitionIndex = 50342;

	class BNFHFJMLEMO_BAFPLLAFFGH : public ::System::Object
	{
	public:
		::UnityEngine::Object* LKIMACFHCAE; // 0x10
		::System::String* IGDPHOBJENH; // 0x18
		::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Object*>*>* EBPEECFACIG; // 0x20
		::BNFHFJMLEMO* ECPJEBHMMHC; // 0x28
		::System::Boolean JJGABAMOFCI; // 0x30
		::System::Void _ctor(::BNFHFJMLEMO* a1, ::System::String* a2, ::System::Action_1<::UnityEngine::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BNFHFJMLEMO*, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PLPCJPMFELI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_PLPCJPMFELI_OFFSET))(this);
		}

		::System::Void FCIMEFBNPIF(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_FCIMEFBNPIF_OFFSET))(this, a1);
		}

		::System::Void JIJEOJIJEBA(::System::Action_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_JIJEOJIJEBA_OFFSET))(this, a1);
		}

		::System::Int32 HBJEKNJOOHC(::System::Action_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BAFPLLAFFGH_HBJEKNJOOHC_OFFSET))(this, a1);
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
