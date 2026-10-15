#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDJCGNNKBNJ;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IPoolableComponent; }
namespace RPG::Client { class IPoolableComponentEx; }
namespace UnityEngine { class GameObject; }

#define EJFKDHCJNBD_BJIGKJMAECC_OFFSET UNITYSDK_OFFSET(0x154D8B70)
#define EJFKDHCJNBD_CLEAR_OFFSET UNITYSDK_OFFSET(0x154D8680)
#define EJFKDHCJNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x154D9090)
#define EJFKDHCJNBD_GGHIFFDFAOK_OFFSET UNITYSDK_OFFSET(0x154D8DB0)
#define EJFKDHCJNBD_GPOBKGMGCIP_OFFSET UNITYSDK_OFFSET(0x154D8C00)
#define EJFKDHCJNBD_HFLNPCMPANJ_OFFSET UNITYSDK_OFFSET(0x154D8700)
#define EJFKDHCJNBD_LAEELIGDHGI_OFFSET UNITYSDK_OFFSET(0x154D8600)
#define EJFKDHCJNBD_NGPFLOFKBAP_OFFSET UNITYSDK_OFFSET(0x154D9020)
#define EJFKDHCJNBD_NKEIIKGOGLA_OFFSET UNITYSDK_OFFSET(0x154D8F90)
#define EJFKDHCJNBD_OCAKLFFEIDC_OFFSET UNITYSDK_OFFSET(0x154D88D0)

	class EJFKDHCJNBD : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::KDJCGNNKBNJ*>* KEKNGOLPHCM; // 0x10
		::Collections::Pooled::PooledList_1<::RPG::Client::IPoolableComponentEx*>* IMNHBNCEEHK; // 0x18
		::UnityEngine::GameObject* OHGLFDDMIFB; // 0x20
		::Il2CppArray<::RPG::Client::IPoolableComponent*>* CEKCFJHAJEM; // 0x28
		::System::Boolean PPJFOGPPGPH; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single HFCCKCDLLJA; // 0x34
		::System::Int32 KDOEEBJMGJG; // 0x38
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
