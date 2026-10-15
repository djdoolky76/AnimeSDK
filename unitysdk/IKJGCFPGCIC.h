#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define IKJGCFPGCIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1648FCD0)
#define IKJGCFPGCIC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16490170)

inline static constexpr unsigned int IKJGCFPGCIC_TypeDefinitionIndex = 82294;

	class IKJGCFPGCIC : public ::KAANKGHDHCB
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x20
		::System::Type* EPGPJMHNBON; // 0x28
		::System::Int64 GDBJDAOOCOH; // 0x30
		::RPG::Client::CachedAssetLogicType HEOJLHCIINP; // 0x38
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + IKJGCFPGCIC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJGCFPGCIC_HKKFFCBJOKM_OFFSET))(this);
		}

	};
