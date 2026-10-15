#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGFAKLEOEGE.h"
#include "unitysdk/System/Object.h"
class OHIFOGLGAKI;
class PIINMLJJIAF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHIFOGLGAKI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xBE653C0)
#define OHIFOGLGAKI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE65D60)
#define OHIFOGLGAKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE647F0)
#define OHIFOGLGAKI_DMBEPACJNPO_OFFSET UNITYSDK_OFFSET(0xBE655E0)
#define OHIFOGLGAKI_IAHFHFFCJDN_OFFSET UNITYSDK_OFFSET(0xBE64C10)
#define OHIFOGLGAKI_PFFFGEDFLPK_OFFSET UNITYSDK_OFFSET(0xBE659C0)
#define OHIFOGLGAKI_PHACOHCMNOA_OFFSET UNITYSDK_OFFSET(0xBE648B0)

inline static constexpr unsigned int OHIFOGLGAKI_TypeDefinitionIndex = 70235;

	class OHIFOGLGAKI : public ::System::Object
	{
	public:
		::Il2CppArray<::OHIFOGLGAKI*>* HKOOLFICIOI; // 0x10
		::System::Collections::Generic::List_1<::PIINMLJJIAF*>* IALIHKIAKAF; // 0x18
		::HGFAKLEOEGE IKNEGODHDGO; // 0x20
		::System::Int32 ENGDINGKAJA; // 0x30
		::System::Int32 KPNIHHHKHHE; // 0x34
		static ::System::Int32* StaticGet_OMNJEAJIDIO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OHIFOGLGAKI")->GetStaticField(0x14A00);
		}

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHIFOGLGAKI_CCTOR_OFFSET))();
		}

		::System::Void PHACOHCMNOA(::PIINMLJJIAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIINMLJJIAF*))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_PHACOHCMNOA_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::PIINMLJJIAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIINMLJJIAF*))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void IAHFHFFCJDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_IAHFHFFCJDN_OFFSET))(this);
		}

		::System::Void DMBEPACJNPO(::HGFAKLEOEGE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGFAKLEOEGE, ::System::Boolean))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_DMBEPACJNPO_OFFSET))(this, a1, a2);
		}

		::System::Void PFFFGEDFLPK(::HGFAKLEOEGE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGFAKLEOEGE, ::System::Boolean))((::PBYTE)hIl2Cpp + OHIFOGLGAKI_PFFFGEDFLPK_OFFSET))(this, a1, a2);
		}

	};
