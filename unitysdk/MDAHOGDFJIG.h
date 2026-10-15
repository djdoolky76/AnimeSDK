#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace System { class Object; }
namespace System { class String; }

#define MDAHOGDFJIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB886E10)
#define MDAHOGDFJIG_DIHJHMAPNLL_OFFSET UNITYSDK_OFFSET(0xB887A30)
#define MDAHOGDFJIG_EOEGNFBGECB_OFFSET UNITYSDK_OFFSET(0xB888250)
#define MDAHOGDFJIG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB886F30)
#define MDAHOGDFJIG_HABDMPDEDBG_OFFSET UNITYSDK_OFFSET(0xB886F80)
#define MDAHOGDFJIG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB886E20)
#define MDAHOGDFJIG_JNNBOPAFJGI_OFFSET UNITYSDK_OFFSET(0xB888150)
#define MDAHOGDFJIG_PNJLKONAPKG_OFFSET UNITYSDK_OFFSET(0xB8881D0)
#define MDAHOGDFJIG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB887970)

inline static constexpr unsigned int MDAHOGDFJIG_TypeDefinitionIndex = 75929;

	class MDAHOGDFJIG : public ::System::Object
	{
	public:
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x10
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x18
		::System::Boolean EFEAMKEFOBL; // 0x20
		// static const ::System::String* JJNNDIOADFH; // 0x0
		// static const ::System::Object DIHJHNPECGC; // 0x0
		// static const ::System::String* OCFEGONKEIH; // 0x0
		// static const ::System::String* HHDEFKDPJML; // 0x0
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_TEARDOWN_OFFSET))(this);
		}

		::System::Void JNNBOPAFJGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_JNNBOPAFJGI_OFFSET))(this, a1);
		}

		::System::Void PNJLKONAPKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_PNJLKONAPKG_OFFSET))(this, a1);
		}

		::System::Void DIHJHMAPNLL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_DIHJHMAPNLL_OFFSET))(this, a1);
		}

		::System::Void HABDMPDEDBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_HABDMPDEDBG_OFFSET))(this);
		}

		::System::Void EOEGNFBGECB(::GHMGGIHEHJE* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MDAHOGDFJIG_EOEGNFBGECB_OFFSET))(this, a1, a2, a3);
		}

	};
