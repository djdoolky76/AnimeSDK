#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MaterialBlockEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBAJIJEAJDK_BIDDPPEHBEC_OFFSET UNITYSDK_OFFSET(0x15BE37B0)
#define HBAJIJEAJDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE3B00)
#define HBAJIJEAJDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE3A70)
#define HBAJIJEAJDK_IAJFFMLPBKH_OFFSET UNITYSDK_OFFSET(0x15BE3890)
#define HBAJIJEAJDK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15BE3920)
#define HBAJIJEAJDK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15BE3740)

inline static constexpr unsigned int HBAJIJEAJDK_TypeDefinitionIndex = 70653;

	class HBAJIJEAJDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase*>* JNEAHOFEENF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void BIDDPPEHBEC(::RPG::Client::MaterialBlockEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_BIDDPPEHBEC_OFFSET))(this, a1);
		}

		::System::Void IAJFFMLPBKH(::RPG::Client::MaterialBlockEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_IAJFFMLPBKH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAJIJEAJDK_DISPOSE_OFFSET))(this);
		}

	};
