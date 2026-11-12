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

#define HMPBAIAPDBE_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D29EA0)
#define HMPBAIAPDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x16D29FF0)
#define HMPBAIAPDBE_LAIBMGMEMHL_OFFSET UNITYSDK_OFFSET(0x16D29F00)
#define HMPBAIAPDBE_NNJNDKBKGKG_OFFSET UNITYSDK_OFFSET(0x16D29D90)
#define HMPBAIAPDBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16D29DA0)

inline static constexpr unsigned int HMPBAIAPDBE_TypeDefinitionIndex = 60972;

	class HMPBAIAPDBE : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::PFACHJFCILN*>* BDNPHHNGNOC; // 0x10
		::RPG::Client::IAssetOperation* PNFLPKJHFMF; // 0x18
		::UnityEngine::Object* CEFDDDAIMMD; // 0x20
		::System::Type* EPGPJMHNBON; // 0x28
		::System::String* CDMFNHJGGKF; // 0x30
		::System::Boolean IJPFEBAMFPM; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::Client::GameObjectPoolUsage GMCBFACPNJJ; // 0x3C
		::HMPBAIAPDBE_AssetPreloadState HGIEBOMEGPD; // 0x40
		::System::Int32 DFHNBODEFNP; // 0x44
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
