#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJGOCMDNOLJ;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLGMBADPMOO_CCPAAJGNLLP_OFFSET UNITYSDK_OFFSET(0xD77F9F0)
#define CLGMBADPMOO_CTOR_OFFSET UNITYSDK_OFFSET(0xD77F4C0)
#define CLGMBADPMOO_DCHJNJHFDAC_OFFSET UNITYSDK_OFFSET(0xD780610)
#define CLGMBADPMOO_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xD77F6F0)
#define CLGMBADPMOO_FEMADDHIGLF_OFFSET UNITYSDK_OFFSET(0xD77FE90)
#define CLGMBADPMOO_MBCCFNFNMHI_OFFSET UNITYSDK_OFFSET(0xD780470)
#define CLGMBADPMOO_MNPFBBGLIDN_OFFSET UNITYSDK_OFFSET(0xD780010)
#define CLGMBADPMOO_PDKLDMNAJBO_OFFSET UNITYSDK_OFFSET(0xD780320)
#define CLGMBADPMOO_PKDCCLKHNOO_OFFSET UNITYSDK_OFFSET(0xD77FC40)

inline static constexpr unsigned int CLGMBADPMOO_TypeDefinitionIndex = 80509;

	class CLGMBADPMOO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Sofa::BaseSofaUI3DWindow*>* MIAJGJLGPOJ; // 0x10
		::KJGOCMDNOLJ* NIBNJBOGMID; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Sofa::BaseSofaWindow*>* MLHKFHBHDKJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* PCAHNFJEMML; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* FKOEKIGAGAJ; // 0x30
		::System::Void _ctor(::KJGOCMDNOLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJGOCMDNOLJ*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_CTOR_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_DMKJAJLNEBK_OFFSET))(this, a1, a2);
		}

		::System::Void FEMADDHIGLF(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_FEMADDHIGLF_OFFSET))(this, a1, a2);
		}

		::System::Void PDKLDMNAJBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_PDKLDMNAJBO_OFFSET))(this, a1);
		}

		::System::Void MBCCFNFNMHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_MBCCFNFNMHI_OFFSET))(this, a1);
		}

		::System::Void PKDCCLKHNOO(::System::Object* a1, ::Sofa::BaseSofaWindow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_PKDCCLKHNOO_OFFSET))(this, a1, a2);
		}

		::Sofa::BaseSofaUI3DWindow* MNPFBBGLIDN(::System::Object* a1, ::System::String* a2)
		{
			return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_MNPFBBGLIDN_OFFSET))(this, a1, a2);
		}

		::System::Void DCHJNJHFDAC(::System::Object* a1, ::Sofa::BaseSofaUI3DWindow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sofa::BaseSofaUI3DWindow*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_DCHJNJHFDAC_OFFSET))(this, a1, a2);
		}

		static ::System::Void CCPAAJGNLLP(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLGMBADPMOO_CCPAAJGNLLP_OFFSET))(a1, a2, a3, a4);
		}

	};
