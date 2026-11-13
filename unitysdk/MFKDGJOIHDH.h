#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftEffectType.h"
#include "unitysdk/System/Object.h"
class NGBKGFHBAMF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MFKDGJOIHDH_CTOR_OFFSET UNITYSDK_OFFSET(0x17C8F260)
#define MFKDGJOIHDH_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x17C8F170)
#define MFKDGJOIHDH_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x17C8F210)
#define MFKDGJOIHDH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x17C8F1C0)

inline static constexpr unsigned int MFKDGJOIHDH_TypeDefinitionIndex = 82882;

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
