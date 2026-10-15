#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define FPLBBIPAJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1591E0A0)
#define FPLBBIPAJCM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1591E660)

	class FPLBBIPAJCM : public ::KAANKGHDHCB
	{
	public:
		::System::String* GKHIHPGCLIK; // 0x20
		::System::Type* EPGPJMHNBON; // 0x28
		::System::Boolean KMFBLKGDMFF; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::Client::CachedAssetLogicType HEOJLHCIINP; // 0x34
		::System::Int64 GDBJDAOOCOH; // 0x38
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + FPLBBIPAJCM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLBBIPAJCM_HKKFFCBJOKM_OFFSET))(this);
		}

	};
