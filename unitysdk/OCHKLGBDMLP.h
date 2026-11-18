#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class TextureSheetData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }

#define OCHKLGBDMLP_BIEJBEPIBIP_OFFSET UNITYSDK_OFFSET(0xB309830)
#define OCHKLGBDMLP_JDDEONJOCBL_OFFSET UNITYSDK_OFFSET(0xB309850)
#define OCHKLGBDMLP_JJFMPEMNADB_OFFSET UNITYSDK_OFFSET(0xB3099B0)
#define OCHKLGBDMLP_JOFGGOFFMIP_OFFSET UNITYSDK_OFFSET(0xB309B30)
#define OCHKLGBDMLP_MOIMJMPGIMF_OFFSET UNITYSDK_OFFSET(0xB309700)
#define OCHKLGBDMLP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xB309760)
#define OCHKLGBDMLP__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3096E0)
#define OCHKLGBDMLP__CTOR_OFFSET UNITYSDK_OFFSET(0xB3095F0)

inline static constexpr unsigned int OCHKLGBDMLP_TypeDefinitionIndex = 58659;

class OCHKLGBDMLP : public ::System::Object
{
public:
	static ::System::Single* StaticGet_MFLNBIHLKEH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OCHKLGBDMLP_TypeDefinitionIndex)->GetStaticField(0x10BE0);
	}
	static ::System::Single* StaticGet_OGOBNJKENHD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OCHKLGBDMLP_TypeDefinitionIndex)->GetStaticField(0x10BE4);
	}
	static ::System::Single* StaticGet_NAKLLLEFOLL()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OCHKLGBDMLP_TypeDefinitionIndex)->GetStaticField(0x10BE8);
	}
	::UnityEngine::Transform* LNKKFDPDKBI; // 0x10
	::DG::Tweening::Tween* GPFAKEBJCKD; // 0x18
	::UnityEngine::GameObject* ALNGAPHDECL; // 0x20
	::UnityEngine::Transform* LDCJIKCALMK; // 0x28
	::DG::Tweening::Tween* OHDNCOEKHOG; // 0x30
	::UnityEngine::SpriteRenderer* MPCCAGODNJE; // 0x38
	::MIKBKMMKEML* PDDFJJFPLIC; // 0x40
	::System::Int32 BDLIBJBFJNF; // 0x48
	::System::Single MFEPPGMILIB; // 0x4C
	::System::Boolean NJMGNKGLEOK; // 0x50
	::System::Boolean EGBFGHNFADM; // 0x51

	::System::Void _ctor(::UnityEngine::GameObject* NJOAJLDJCCJ, ::UnityEngine::Transform* LNKKFDPDKBI, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + OCHKLGBDMLP__CTOR_OFFSET))(this, NJOAJLDJCCJ, LNKKFDPDKBI, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCHKLGBDMLP__CCTOR_OFFSET))();
	}

	::System::Void MOIMJMPGIMF(::GOIKJCHFIIO* FAEBGCMGKDB)
	{
		return ((::System::Void(*)(::PVOID, ::GOIKJCHFIIO*))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_MOIMJMPGIMF_OFFSET))(this, FAEBGCMGKDB);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BIEJBEPIBIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_BIEJBEPIBIP_OFFSET))(this);
	}

	::System::Void JDDEONJOCBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_JDDEONJOCBL_OFFSET))(this);
	}

	::System::Void JJFMPEMNADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_JJFMPEMNADB_OFFSET))(this);
	}

	::System::Void JOFGGOFFMIP(::MoleMole::TextureSheetData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + OCHKLGBDMLP_JOFGGOFFMIP_OFFSET))(this, LJBPECKCCEA);
	}
};
