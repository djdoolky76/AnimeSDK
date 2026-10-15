#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/NJIJCDNNBNI.h"
class ENPCHFJGOMK;
class IOABBMGCIOM;
class NLOOHFMLFMM;
namespace RPG::Client { class PrefabLoadMeta; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define FKLOAACMIGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15801750)
#define FKLOAACMIGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15801890)
#define FKLOAACMIGL_CNIIKDGIMEP_OFFSET UNITYSDK_OFFSET(0x15801660)
#define FKLOAACMIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x158019B0)
#define FKLOAACMIGL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x157FFDA0)
#define FKLOAACMIGL_ELPICIFGJMK_OFFSET UNITYSDK_OFFSET(0x158015D0)
#define FKLOAACMIGL_KFLIFLAJHOI_OFFSET UNITYSDK_OFFSET(0x15800BE0)
#define FKLOAACMIGL_LHAABMEBBAH_OFFSET UNITYSDK_OFFSET(0x15800D40)
#define FKLOAACMIGL_MBNFFDMFCAM_OFFSET UNITYSDK_OFFSET(0x15800EC0)
#define FKLOAACMIGL_MDGDIMGDLMF_OFFSET UNITYSDK_OFFSET(0x15800500)
#define FKLOAACMIGL_MGCEOFBCKBF_OFFSET UNITYSDK_OFFSET(0x157FFE00)
#define FKLOAACMIGL_OPKIOCEDFMB_OFFSET UNITYSDK_OFFSET(0x15801120)
#define FKLOAACMIGL_PFJDLLGFCOD_OFFSET UNITYSDK_OFFSET(0x15800150)
#define FKLOAACMIGL__ONBIND_OFFSET UNITYSDK_OFFSET(0x157FF9A0)

inline static constexpr unsigned int FKLOAACMIGL_TypeDefinitionIndex = 72283;

	class FKLOAACMIGL : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* DLECDDCAKAJ; // 0x60
		::System::Collections::Generic::List_1<::NLOOHFMLFMM*>* OMFKMHEBHKD; // 0x68
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
		::UnityEngine::UI::Text* OEKNHAKDJPN; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightOrbType, ::System::UInt32>* IDHNAHIPNIM; // 0x80
		::ENPCHFJGOMK* KLLFDGDIICC; // 0x88
		::RPG::Client::PrefabLoadMeta* KJECMEECIOG; // 0x90
		::UnityEngine::Transform* GCMJKKGGMDH; // 0x98
		::IOABBMGCIOM* GBAKOENKKBH; // 0xA0
		::UnityEngine::UI::Image* LGBBDPNNCJK; // 0xA8
		::UnityEngine::RectTransform* FOFFDAGOGJH; // 0xB0
		::UnityEngine::UI::Image* NACCDGKNFHN; // 0xB8
		::UnityEngine::UI::Image* JPKHJJDEMFH; // 0xC0
		::System::Int32 LLDCAPMMCFM; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void MGCEOFBCKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_MGCEOFBCKBF_OFFSET))(this);
		}

		::System::Void PFJDLLGFCOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL_PFJDLLGFCOD_OFFSET))(this);
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
