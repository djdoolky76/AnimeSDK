#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNCLMODKIHG_NGDGHKOABGA.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BCPLJJIAKMO;
namespace MoleMole { class UIActivityHotpotFoodItemRightWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define GNCLMODKIHG_EPOFBPNBBPE_OFFSET UNITYSDK_OFFSET(0x16CD6610)
#define GNCLMODKIHG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16CD6080)
#define GNCLMODKIHG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16CD63E0)
#define GNCLMODKIHG_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x16CD6460)
#define GNCLMODKIHG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16CD6350)
#define GNCLMODKIHG_MEIHCAGLPKC_OFFSET UNITYSDK_OFFSET(0x16CD6160)
#define GNCLMODKIHG_NPLEGADGMAM_OFFSET UNITYSDK_OFFSET(0x16CD61C0)
#define GNCLMODKIHG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16CD6020)
#define GNCLMODKIHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD60D0)
#define GNCLMODKIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD6150)

inline static constexpr unsigned int GNCLMODKIHG_TypeDefinitionIndex = 41245;

class GNCLMODKIHG : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xCD; // 0x0
	::UnityEngine::Transform* AACNHIFBGDD; // 0x48
	::MoleMole::UIActivityHotpotFoodItemRightWidgetController* JJFCHNEGBEI; // 0x50
	::UnityEngine::Rigidbody2D* HFKOHECHKDN; // 0x58
	::BCPLJJIAKMO* NLMKAEIJAGC; // 0x60
	::UnityEngine::Collider2D* GALHMINJEKJ; // 0x68
	::UnityEngine::Transform* MLMAEFOPLCK; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* JACOMCANJCF; // 0x78
	::GNCLMODKIHG_NGDGHKOABGA KGONNDCPJGB; // 0x80
	::System::Single LLNNKHPPPCK; // 0x84
	::System::Single EMKHFBBKMHN; // 0x88
	::System::Int32 OHDDAGHDAJK; // 0x8C
	::System::Boolean HMBEFFHGKKI; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNCLMODKIHG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean MEIHCAGLPKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_MEIHCAGLPKC_OFFSET))(this);
	}

	::System::Void NPLEGADGMAM(::System::Text::StringBuilder* CKGGMNHMKDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GNCLMODKIHG_NPLEGADGMAM_OFFSET))(this, CKGGMNHMKDB);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GNCLMODKIHG* JFDOOELFAOA()
	{
		return ((::GNCLMODKIHG*(*)())((::PBYTE)hIl2Cpp + GNCLMODKIHG_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::Vector2 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_JLEGHNGEBOG_OFFSET))(this);
	}

	::System::Boolean EPOFBPNBBPE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCLMODKIHG_EPOFBPNBBPE_OFFSET))(this);
	}
};
