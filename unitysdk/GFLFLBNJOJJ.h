#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAMOJLDEGHM.h"
#include "unitysdk/GFLFLBNJOJJ_HKMGPPOJJOF.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace MoleMole { class MonoEffectPluginClipPlane; }
namespace MoleMole { class MonoRenderHandlerForAvatar; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define GFLFLBNJOJJ_BKBHCIBBMPP_OFFSET UNITYSDK_OFFSET(0x10FD7A70)
#define GFLFLBNJOJJ_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x10FD7BC0)
#define GFLFLBNJOJJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10FD7950)
#define GFLFLBNJOJJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10FD7AB0)
#define GFLFLBNJOJJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10FD7B30)
#define GFLFLBNJOJJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10FD77B0)
#define GFLFLBNJOJJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FD79A0)
#define GFLFLBNJOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD7A60)

inline static constexpr unsigned int GFLFLBNJOJJ_TypeDefinitionIndex = 79951;

class GFLFLBNJOJJ : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_ONGAINJELNA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GFLFLBNJOJJ_TypeDefinitionIndex)->GetStaticField(0xE4F0);
	}
	static ::System::Int32* StaticGet_IMEEAKKGPLC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GFLFLBNJOJJ_TypeDefinitionIndex)->GetStaticField(0xE4F4);
	}
	static ::System::Int32* StaticGet_LPKBMCLMIIK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GFLFLBNJOJJ_TypeDefinitionIndex)->GetStaticField(0xE4F8);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0xBD; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::DAMOJLDEGHM>* KDDGLPJFLHD; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* CEBOIDPBBIK; // 0x50
	::System::String* KECHAPJIOLJ; // 0x58
	::UnityEngine::Transform* DDGJFOCMGIP; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* GIFEEMICAKI; // 0x68
	::UnityEngine::Transform* FIMOHOPKLNM; // 0x70
	::MoleMole::Battle::Entity* HAKMFPCBMAB; // 0x78
	::MoleMole::MonoEffectPluginClipPlane* AACDLPKFDIA; // 0x80
	::UnityEngine::Vector3 KEPPNBPKKLD; // 0x88
	::UnityEngine::Vector3 LPHGBLHMIDO; // 0x94
	::UnityEngine::Vector3 JNENJBIPKFJ; // 0xA0
	::GFLFLBNJOJJ_HKMGPPOJJOF DCCLGJFPNHO; // 0xAC
	::UnityEngine::Vector3 EENNCPDBJAF; // 0xB0
	::UnityEngine::Quaternion GFMOBCGIGGB; // 0xBC
	::UnityEngine::Quaternion DGMIHBNOBGD; // 0xCC
	::System::Boolean MHDHKBOHBOO; // 0xDC
	::System::Boolean CJHPLLMLNMC; // 0xDD

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFLFLBNJOJJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 BKBHCIBBMPP()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_BKBHCIBBMPP_OFFSET))(this);
	}

	static ::GFLFLBNJOJJ* JFDOOELFAOA()
	{
		return ((::GFLFLBNJOJJ*(*)())((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::MonoEffectPluginClipPlane* DAOCDFNMING, ::MoleMole::MonoRenderHandlerForAvatar* GHBJGHNBALE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginClipPlane*, ::MoleMole::MonoRenderHandlerForAvatar*))((::PBYTE)hIl2Cpp + GFLFLBNJOJJ_GALGFCPKMGC_OFFSET))(this, DAOCDFNMING, GHBJGHNBALE);
	}
};
