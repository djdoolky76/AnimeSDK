#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BatchAnimationClipGroup;
class CBOICBCAHBE;
class GDMNALCNPJE;
class PKBGGDEPGDO;
namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class BAPartVariantRes; }
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client::Subway { class AirlineSubwayWay_MemberConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define APGFJHFIENM_AABPKENDMNK_OFFSET UNITYSDK_OFFSET(0x15B9E850)
#define APGFJHFIENM_AJHDBMDCJGM_OFFSET UNITYSDK_OFFSET(0x15B9E630)
#define APGFJHFIENM_AOFKJKBDGBE_OFFSET UNITYSDK_OFFSET(0x15B9E8B0)
#define APGFJHFIENM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9D7F0)
#define APGFJHFIENM_DDPMFIJJMEM_OFFSET UNITYSDK_OFFSET(0x15B9DC10)
#define APGFJHFIENM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9DB30)
#define APGFJHFIENM_DMOBNGJKCDG_OFFSET UNITYSDK_OFFSET(0x15B9E3E0)
#define APGFJHFIENM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B9E8A0)
#define APGFJHFIENM_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0x15B9DCA0)
#define APGFJHFIENM_IHPMJIOHNHI_OFFSET UNITYSDK_OFFSET(0x15B9E780)
#define APGFJHFIENM_LCDDHKGMBOP_OFFSET UNITYSDK_OFFSET(0x15B9E370)
#define APGFJHFIENM_NFICMCNHPIE_OFFSET UNITYSDK_OFFSET(0x15B9DEB0)
#define APGFJHFIENM_NOEOCLGLPGA_OFFSET UNITYSDK_OFFSET(0x15B9E300)
#define APGFJHFIENM_POHPNAHLAEC_OFFSET UNITYSDK_OFFSET(0x15B9E470)

inline static constexpr unsigned int APGFJHFIENM_TypeDefinitionIndex = 82214;

	class APGFJHFIENM : public ::System::Object
	{
	public:
		::BatchAnimationClipGroup* MGGDIMNIJBA; // 0x10
		::GDMNALCNPJE* KGCNPIEDOCA; // 0x18
		::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* LBIGFKPLLPN; // 0x20
		::Il2CppArray<::System::Object*>* FNHDMCJGKBK; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* GMGLFMEEDAA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MOONIKLHAFO; // 0x38
		::CBOICBCAHBE* AAPNELELMGG; // 0x40
		::System::String* KNLMEPAKCOJ; // 0x48
		::System::String* _Name_k__BackingField; // 0x50
		::RPG::Client::BatchAnimationAttachPointMapping* KHOMKIPCJCL; // 0x58
		::System::Boolean OLEEMHJAJOI; // 0x60
		::System::Void _ctor(::GDMNALCNPJE* a1, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GDMNALCNPJE*, ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig*))((::PBYTE)hIl2Cpp + APGFJHFIENM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGFJHFIENM_DISPOSE_OFFSET))(this);
		}

		::System::Int32 DDPMFIJJMEM(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APGFJHFIENM_DDPMFIJJMEM_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::BatchAnimationInstance* ICJGMELMLGO(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APGFJHFIENM_ICJGMELMLGO_OFFSET))(this, a1);
		}

		::PKBGGDEPGDO* NFICMCNHPIE(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::String* a2)
		{
			return ((::PKBGGDEPGDO*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::String*))((::PBYTE)hIl2Cpp + APGFJHFIENM_NFICMCNHPIE_OFFSET))(this, a1, a2);
		}

		::System::Void NOEOCLGLPGA(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + APGFJHFIENM_NOEOCLGLPGA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BAPartVariantRes* LCDDHKGMBOP(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::RPG::Client::BAPartVariantRes*(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + APGFJHFIENM_LCDDHKGMBOP_OFFSET))(this, a1, a2);
		}

		::System::Void DMOBNGJKCDG(::RPG::Client::BAPartVariantRes* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BAPartVariantRes*))((::PBYTE)hIl2Cpp + APGFJHFIENM_DMOBNGJKCDG_OFFSET))(this, a1);
		}

		::RPG::Client::AssemNPC* POHPNAHLAEC()
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APGFJHFIENM_POHPNAHLAEC_OFFSET))(this);
		}

		::UnityEngine::Vector3 AJHDBMDCJGM(::System::String* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APGFJHFIENM_AJHDBMDCJGM_OFFSET))(this, a1);
		}

		::System::Void IHPMJIOHNHI(::CBOICBCAHBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBOICBCAHBE*))((::PBYTE)hIl2Cpp + APGFJHFIENM_IHPMJIOHNHI_OFFSET))(this, a1);
		}

		::System::Void AABPKENDMNK(::BatchAnimationClipGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + APGFJHFIENM_AABPKENDMNK_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APGFJHFIENM_GET_NAME_OFFSET))(this);
		}

		::System::Boolean AOFKJKBDGBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APGFJHFIENM_AOFKJKBDGBE_OFFSET))(this);
		}

	};
