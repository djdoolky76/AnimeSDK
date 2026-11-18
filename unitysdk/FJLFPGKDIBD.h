#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/IBLIIKNIAFE.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/EtherEyesFixConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectOverrideConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CHLJAABIJKE;
class EtherEyesOutlineRenderer;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class EtherEyesRibbonGenerator; }
namespace MoleMole { class MonoAnimatorPlaybackPlugin; }
namespace MoleMole::Config { class EtherEyesObjectTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define FJLFPGKDIBD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1714CF40)
#define FJLFPGKDIBD_CDEDDFFCCKM_OFFSET UNITYSDK_OFFSET(0x1714C8A0)
#define FJLFPGKDIBD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1714C7B0)
#define FJLFPGKDIBD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1714CEB0)
#define FJLFPGKDIBD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1714CE20)
#define FJLFPGKDIBD_MKEDFFCPOPD_OFFSET UNITYSDK_OFFSET(0x1714CCD0)
#define FJLFPGKDIBD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1714C0D0)
#define FJLFPGKDIBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714C800)
#define FJLFPGKDIBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1714C880)

inline static constexpr unsigned int FJLFPGKDIBD_TypeDefinitionIndex = 51673;

class FJLFPGKDIBD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC7; // 0x0
	::UnityEngine::Material* EBIDGDBLDPI; // 0x48
	::System::String* JNLJCMFAJJF; // 0x50
	::Foundation::AssetRequestHandle FMMONJLPBCK; // 0x58
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* CLKOMIFCOBI; // 0x78
	::MoleMole::MonoAnimatorPlaybackPlugin* HLLFDKHJLOM; // 0x80
	::DG::Tweening::Tweener* EOJKMOEJPMC; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::EtherEyesRibbonGenerator*>* NEOBIGOCPHJ; // 0x90
	::MoleMole::EntityHandle JFHKLKHODDM; // 0x98
	::MoleMole::Config::EtherEyesFixConfig FLHMJLNDNGP; // 0xA8
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* DCPANGOKFDC; // 0xD0
	::DG::Tweening::Tweener* MCAOMGCMGPM; // 0xD8
	::UnityEngine::Material* DGIFAMHOAED; // 0xE0
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* FOHOGKHFDNJ; // 0xE8
	::DG::Tweening::Tweener* BEICOKJGAED; // 0xF0
	::DG::Tweening::Tweener* BPANNKKODPK; // 0xF8
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* GCNPCMMMPFK; // 0x100
	::DG::Tweening::Tweener* DMNPCCFIKKO; // 0x108
	::EtherEyesOutlineRenderer* DDOCPOJGEHD; // 0x110
	::MoleMole::EntityHandle LCOICHJDEIJ; // 0x118
	::System::Boolean CBNIPGIKNCC; // 0x128
	::System::Boolean KMDNHMPONBK; // 0x129
	::System::Byte _padding0[0x2];
	::System::Single LNJDGAJKLEM; // 0x12C
	::System::Boolean DDNJAONINEF; // 0x130
	::System::Boolean OFIBDJGKIFK; // 0x131
	::System::Boolean LIDLIFIKLJD; // 0x132
	::System::Boolean EHIGJMCLBOP; // 0x133
	::MoleMole::Config::EtherEyesObjectSize PIDFELHDFGH; // 0x134
	::MoleMole::Config::EtherEyesObjectConfig DKDHOFFHDPA; // 0x138
	::System::Single MFCPGDGAKID; // 0x150
	::System::Boolean DPOJBEEBGFG; // 0x154
	::System::Boolean CIEBMLIEJDA; // 0x155
	::System::Boolean ELMHOAIEGMP; // 0x156
	::System::Byte _padding1[0x1];
	::System::Single LENGFJPOIPG; // 0x158
	::System::Single FLMPACFOOJC; // 0x15C
	::MoleMole::Config::EtherEyesObjectOverrideConfig DGIEAIEAHAO; // 0x160
	::System::Boolean BMFLHNIFBDF; // 0x163
	::System::Boolean DOAKBBLGOKB; // 0x164
	::System::Boolean GNBGIFCLLLI; // 0x165
	::System::Byte _padding2[0x2];
	::IBLIIKNIAFE PJEIKGOFKBP; // 0x168

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLFPGKDIBD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFPGKDIBD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_GETCLASSID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* CDEDDFFCCKM()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Collider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_CDEDDFFCCKM_OFFSET))(this);
	}

	::System::Void MKEDFFCPOPD(::CHLJAABIJKE* MFKJGCGHCPN)
	{
		return ((::System::Void(*)(::PVOID, ::CHLJAABIJKE*))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_MKEDFFCPOPD_OFFSET))(this, MFKJGCGHCPN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FJLFPGKDIBD* JFDOOELFAOA()
	{
		return ((::FJLFPGKDIBD*(*)())((::PBYTE)hIl2Cpp + FJLFPGKDIBD_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::EtherEyesObjectTrait* MFKJGCGHCPN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectTrait*))((::PBYTE)hIl2Cpp + FJLFPGKDIBD_BBOMJDBNHIC_OFFSET))(this, MFKJGCGHCPN);
	}
};
