#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDJCGNNKBNJ;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IPoolableComponent; }
namespace RPG::Client { class IPoolableComponentEx; }
namespace UnityEngine { class GameObject; }

#define EJFKDHCJNBD_BJIGKJMAECC_OFFSET UNITYSDK_OFFSET(0x154CCD50)
#define EJFKDHCJNBD_CLEAR_OFFSET UNITYSDK_OFFSET(0x154CC850)
#define EJFKDHCJNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x154CD270)
#define EJFKDHCJNBD_GGHIFFDFAOK_OFFSET UNITYSDK_OFFSET(0x154CCF90)
#define EJFKDHCJNBD_GPOBKGMGCIP_OFFSET UNITYSDK_OFFSET(0x154CCDE0)
#define EJFKDHCJNBD_HFLNPCMPANJ_OFFSET UNITYSDK_OFFSET(0x154CC8E0)
#define EJFKDHCJNBD_LAEELIGDHGI_OFFSET UNITYSDK_OFFSET(0x154CC7D0)
#define EJFKDHCJNBD_NGPFLOFKBAP_OFFSET UNITYSDK_OFFSET(0x154CD200)
#define EJFKDHCJNBD_NKEIIKGOGLA_OFFSET UNITYSDK_OFFSET(0x154CD170)
#define EJFKDHCJNBD_OCAKLFFEIDC_OFFSET UNITYSDK_OFFSET(0x154CCAB0)

inline static constexpr unsigned int EJFKDHCJNBD_TypeDefinitionIndex = 59374;

	class EJFKDHCJNBD : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OHGLFDDMIFB; // 0x10
		::Collections::Pooled::PooledList_1<::KDJCGNNKBNJ*>* KEKNGOLPHCM; // 0x18
		::Il2CppArray<::RPG::Client::IPoolableComponent*>* CEKCFJHAJEM; // 0x20
		::Collections::Pooled::PooledList_1<::RPG::Client::IPoolableComponentEx*>* IMNHBNCEEHK; // 0x28
		::System::Single HFCCKCDLLJA; // 0x30
		::System::Int32 KDOEEBJMGJG; // 0x34
		::System::Boolean PPJFOGPPGPH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_CTOR_OFFSET))(this);
		}

		::System::Boolean LAEELIGDHGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_LAEELIGDHGI_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_CLEAR_OFFSET))(this);
		}

		::System::Void HFLNPCMPANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_HFLNPCMPANJ_OFFSET))(this);
		}

		::System::Void OCAKLFFEIDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_OCAKLFFEIDC_OFFSET))(this);
		}

		::System::Void GPOBKGMGCIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_GPOBKGMGCIP_OFFSET))(this);
		}

		::System::Boolean GGHIFFDFAOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_GGHIFFDFAOK_OFFSET))(this);
		}

		::System::Void NKEIIKGOGLA(::KDJCGNNKBNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDJCGNNKBNJ*))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_NKEIIKGOGLA_OFFSET))(this, a1);
		}

		::System::Void NGPFLOFKBAP(::KDJCGNNKBNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDJCGNNKBNJ*))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_NGPFLOFKBAP_OFFSET))(this, a1);
		}

		::System::Void BJIGKJMAECC(::RPG::Client::IPoolableComponentEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPoolableComponentEx*))((::PBYTE)hIl2Cpp + EJFKDHCJNBD_BJIGKJMAECC_OFFSET))(this, a1);
		}

	};
