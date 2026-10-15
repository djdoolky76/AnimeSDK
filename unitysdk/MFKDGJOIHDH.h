#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"
class NGBKGFHBAMF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MFKDGJOIHDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB905100)
#define MFKDGJOIHDH_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB905010)
#define MFKDGJOIHDH_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0xB9050B0)
#define MFKDGJOIHDH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB905060)

	class MFKDGJOIHDH : public ::System::Object
	{
	public:
		::NGBKGFHBAMF* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::NGBKGFHBAMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGBKGFHBAMF*))((::PBYTE)hIl2Cpp + MFKDGJOIHDH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKDGJOIHDH_GET_CACHEKEY_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftEffectType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::MechCraftEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKDGJOIHDH_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* HONGLJECAAC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKDGJOIHDH_HONGLJECAAC_OFFSET))(this);
		}

	};
