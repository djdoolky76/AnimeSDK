#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/NJIJCDNNBNI.h"
class ENPCHFJGOMK;
class FFKJOPOBDPD;
class IOABBMGCIOM;
class MBEPBMJMBNI;
class NLOOHFMLFMM;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FKLOAACMIGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1677AAA0)
#define FKLOAACMIGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1677AC20)
#define FKLOAACMIGL_CNIIKDGIMEP_OFFSET UNITYSDK_OFFSET(0x1677A9B0)
#define FKLOAACMIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1677AD80)
#define FKLOAACMIGL_DNDBCCNNAPP_OFFSET UNITYSDK_OFFSET(0x1677A8C0)
#define FKLOAACMIGL_EFBCGJGEHKB_OFFSET UNITYSDK_OFFSET(0x16779DA0)
#define FKLOAACMIGL_ELPICIFGJMK_OFFSET UNITYSDK_OFFSET(0x1677A830)
#define FKLOAACMIGL_KFLIFLAJHOI_OFFSET UNITYSDK_OFFSET(0x16779E30)
#define FKLOAACMIGL_LHAABMEBBAH_OFFSET UNITYSDK_OFFSET(0x16779F90)
#define FKLOAACMIGL_MBNFFDMFCAM_OFFSET UNITYSDK_OFFSET(0x1677A120)
#define FKLOAACMIGL_MDGDIMGDLMF_OFFSET UNITYSDK_OFFSET(0x16779300)
#define FKLOAACMIGL_MGCEOFBCKBF_OFFSET UNITYSDK_OFFSET(0x16778C20)
#define FKLOAACMIGL_OENELAEFLGI_OFFSET UNITYSDK_OFFSET(0x16779A00)
#define FKLOAACMIGL_OPKIOCEDFMB_OFFSET UNITYSDK_OFFSET(0x1677A380)
#define FKLOAACMIGL_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x16778F60)
#define FKLOAACMIGL__ONBIND_OFFSET UNITYSDK_OFFSET(0x16778480)
#define FKLOAACMIGL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16778BC0)

inline static constexpr unsigned int FKLOAACMIGL_TypeDefinitionIndex = 74361;

	class FKLOAACMIGL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* JPKHJJDEMFH; // 0x60
		::UnityEngine::UI::Image* LGBBDPNNCJK; // 0x68
		::UnityEngine::UI::Image* NACCDGKNFHN; // 0x70
		::UnityEngine::UI::Image* MALLLGJMCAD; // 0x78
		::FFKJOPOBDPD* GBDNKFONCNJ; // 0x80
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* IDHNAHIPNIM; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* DLECDDCAKAJ; // 0x98
		::UnityEngine::UI::Text* OEKNHAKDJPN; // 0xA0
		::RPG::Client::PrefabLoadMeta* KJECMEECIOG; // 0xA8
		::IOABBMGCIOM* GBAKOENKKBH; // 0xB0
		::System::Collections::Generic::List_1<::NLOOHFMLFMM*>* OMFKMHEBHKD; // 0xB8
		::UnityEngine::Transform* GCMJKKGGMDH; // 0xC0
		::ENPCHFJGOMK* KLLFDGDIICC; // 0xC8
		::UnityEngine::RectTransform* FOFFDAGOGJH; // 0xD0
		::System::Int32 LLDCAPMMCFM; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void MGCEOFBCKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_MGCEOFBCKBF_OFFSET))(this);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_PFJDLLGFCOD_OFFSET))(this);
		}

		::System::Void OENELAEFLGI(::MBEPBMJMBNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBEPBMJMBNI*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_OENELAEFLGI_OFFSET))(this, a1);
		}

		::System::Single EFBCGJGEHKB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKLOAACMIGL_EFBCGJGEHKB_OFFSET))(this, a1);
		}

		::System::Void MDGDIMGDLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_MDGDIMGDLMF_OFFSET))(this);
		}

		::System::Void LHAABMEBBAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_LHAABMEBBAH_OFFSET))(this, a1);
		}

		::System::Void MBNFFDMFCAM(::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NJIJCDNNBNI>*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_MBNFFDMFCAM_OFFSET))(this, a1);
		}

		::System::Boolean OPKIOCEDFMB(::System::Collections::Generic::List_1<::NJIJCDNNBNI>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::NJIJCDNNBNI>*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_OPKIOCEDFMB_OFFSET))(this, a1);
		}

		::NLOOHFMLFMM* KFLIFLAJHOI(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::NLOOHFMLFMM*(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + FKLOAACMIGL_KFLIFLAJHOI_OFFSET))(this, a1);
		}

		::System::Void ELPICIFGJMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_ELPICIFGJMK_OFFSET))(this, a1);
		}

		::System::Void DNDBCCNNAPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_DNDBCCNNAPP_OFFSET))(this, a1);
		}

		::System::Void CNIIKDGIMEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKLOAACMIGL_CNIIKDGIMEP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
