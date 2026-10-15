#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMPBAIAPDBE_AssetPreloadState.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"
class PFACHJFCILN;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define HMPBAIAPDBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D89D40)
#define HMPBAIAPDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D89E90)
#define HMPBAIAPDBE_LAIBMGMEMHL_OFFSET UNITYSDK_OFFSET(0x15D89DA0)
#define HMPBAIAPDBE_NNJNDKBKGKG_OFFSET UNITYSDK_OFFSET(0x15D89C30)
#define HMPBAIAPDBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15D89C40)

	class HMPBAIAPDBE : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* PNFLPKJHFMF; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::System::Type* EPGPJMHNBON; // 0x20
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* BDNPHHNGNOC; // 0x28
		::UnityEngine::Object* CEFDDDAIMMD; // 0x30
		::System::Boolean IJPFEBAMFPM; // 0x38
		::System::Byte _padding0[0x3];
		::HMPBAIAPDBE_AssetPreloadState HGIEBOMEGPD; // 0x3C
		::System::Int32 DFHNBODEFNP; // 0x40
		::RPG::Client::GameObjectPoolUsage GMCBFACPNJJ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPBAIAPDBE_CTOR_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* NNJNDKBKGKG()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPBAIAPDBE_NNJNDKBKGKG_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPBAIAPDBE_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMPBAIAPDBE_CLEAR_OFFSET))(this);
		}

		::System::Void LAIBMGMEMHL(::System::Int32 a1, ::RPG::Client::GameObjectPoolUsage a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + HMPBAIAPDBE_LAIBMGMEMHL_OFFSET))(this, a1, a2);
		}

	};
