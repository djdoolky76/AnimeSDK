#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftBanCellAxesDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
class EJKOGGEFCIF;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LNANNENHBMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CF440)
#define LNANNENHBMN_FKICOOCBGEF_OFFSET UNITYSDK_OFFSET(0xB7CF1F0)
#define LNANNENHBMN_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB7CF0E0)
#define LNANNENHBMN_JAMHDJNGICA_OFFSET UNITYSDK_OFFSET(0xB7CF2B0)
#define LNANNENHBMN_KNKFEACDEAP_OFFSET UNITYSDK_OFFSET(0xB7CF180)
#define LNANNENHBMN_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xB7CF130)
#define LNANNENHBMN_NFEPDDEKGLN_OFFSET UNITYSDK_OFFSET(0xB7CF260)

inline static constexpr unsigned int LNANNENHBMN_TypeDefinitionIndex = 80086;

	class LNANNENHBMN : public ::System::Object
	{
	public:
		::EJKOGGEFCIF* IBPBJBOKKMF; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* APEBEMALGBG; // 0x18
		::System::Void _ctor(::EJKOGGEFCIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJKOGGEFCIF*))((::PBYTE)hIl2Cpp + LNANNENHBMN_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> KNKFEACDEAP()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_KNKFEACDEAP_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> FKICOOCBGEF()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_FKICOOCBGEF_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType NFEPDDEKGLN()
		{
			return ((::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_NFEPDDEKGLN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* JAMHDJNGICA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNANNENHBMN_JAMHDJNGICA_OFFSET))(this);
		}

	};
