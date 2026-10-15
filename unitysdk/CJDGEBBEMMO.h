#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CJDGEBBEMMO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF94730)
#define CJDGEBBEMMO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCF94C80)

	class CJDGEBBEMMO : public ::KAANKGHDHCB
	{
	public:
		::System::Type* EPGPJMHNBON; // 0x20
		::System::String* JIBMHCAGPNC; // 0x28
		::System::String* GKHIHPGCLIK; // 0x30
		::System::Boolean KMFBLKGDMFF; // 0x38
		::System::Byte _padding0[0x3];
		::RPG::Client::CachedAssetLogicType HEOJLHCIINP; // 0x3C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CJDGEBBEMMO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDGEBBEMMO_HKKFFCBJOKM_OFFSET))(this);
		}

	};
