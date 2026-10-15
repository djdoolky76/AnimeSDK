#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class ABGNMNDCEND;
class IDGOINOHFEE;
class IFELGKPONAK;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define JPHKBAHBDGB_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2C0B00)
#define JPHKBAHBDGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C0B80)
#define JPHKBAHBDGB_IGJCCCOGBFE_OFFSET UNITYSDK_OFFSET(0xB2C07B0)
#define JPHKBAHBDGB_IMIFECMENJB_OFFSET UNITYSDK_OFFSET(0xB2C0090)
#define JPHKBAHBDGB_LGKGAAGPLGI_OFFSET UNITYSDK_OFFSET(0xB2BFA50)
#define JPHKBAHBDGB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB2C0A40)
#define JPHKBAHBDGB_MLNAPKIKHFO_OFFSET UNITYSDK_OFFSET(0xB2C0A90)
#define JPHKBAHBDGB_OFONKDOAFKM_OFFSET UNITYSDK_OFFSET(0xB2C08B0)
#define JPHKBAHBDGB_OINBDMGFFJL_1_OFFSET UNITYSDK_OFFSET(0xB2BF500)
#define JPHKBAHBDGB_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB2BECB0)
#define JPHKBAHBDGB_OLIPFPLOIPB_OFFSET UNITYSDK_OFFSET(0xB2C06B0)
#define JPHKBAHBDGB_OONEJNFHIBB_OFFSET UNITYSDK_OFFSET(0xB2C09A0)
#define JPHKBAHBDGB_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB2C09F0)
#define JPHKBAHBDGB_PJLOJLFPFFC_OFFSET UNITYSDK_OFFSET(0xB2C0850)

inline static constexpr unsigned int JPHKBAHBDGB_TypeDefinitionIndex = 70214;

	class JPHKBAHBDGB : public ::System::Object
	{
	public:
		::IDGOINOHFEE* OLBMACDBDPC; // 0x10
		::UnityEngine::Transform* KJMDDAHEODL; // 0x18
		::RPG::Client::LiteInstancedItem::ItemPrototype* FFECDIEBKJH; // 0x20
		::IDGOINOHFEE* PPJKBONIABJ; // 0x28
		::IDGOINOHFEE* CAHONFNCONC; // 0x30
		::IFELGKPONAK* LMNCOBDAPHL; // 0x38
		::UnityEngine::Bounds AFFLPJCLPMG; // 0x40
		::System::Boolean BAMIONIJIMG; // 0x58
		::System::Boolean FOCFICKFCMJ; // 0x59
		::System::Boolean JOFBHPJNEPM; // 0x5A
		::System::Boolean MFOJNFDGDJA; // 0x5B
		::RPG::Client::TSCRendererType MEPFOEEGBEA; // 0x5C
		::System::Boolean NKDAHLGNOKN; // 0x5D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::RPG::Client::LiteInstancedItem::ItemPrototype* a4, ::RPG::Client::LiteInstancedItem::ItemPrototype* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::RPG::Client::TSCRendererType a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_OINBDMGFFJL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void OINBDMGFFJL_1(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::RPG::Client::TSCRendererType a6, ::IFELGKPONAK* a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType, ::IFELGKPONAK*))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_OINBDMGFFJL_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void LGKGAAGPLGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_LGKGAAGPLGI_OFFSET))(this);
		}

		::System::Void IMIFECMENJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_IMIFECMENJB_OFFSET))(this);
		}

		::System::Void OLIPFPLOIPB(::ABGNMNDCEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABGNMNDCEND*))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_OLIPFPLOIPB_OFFSET))(this, a1);
		}

		::System::Void IGJCCCOGBFE(::ABGNMNDCEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABGNMNDCEND*))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_IGJCCCOGBFE_OFFSET))(this, a1);
		}

		::System::Void PJLOJLFPFFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_PJLOJLFPFFC_OFFSET))(this, a1);
		}

		::System::Void OONEJNFHIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_OONEJNFHIBB_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Boolean MLNAPKIKHFO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_MLNAPKIKHFO_OFFSET))(this, a1);
		}

		::System::Void OFONKDOAFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_OFONKDOAFKM_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHKBAHBDGB_CLEAR_OFFSET))(this);
		}

	};
