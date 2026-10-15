#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FNCAJPNHGMN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIHGOLOEGHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1642FA70)
#define IIHGOLOEGHC_EEGJLHEOODD_OFFSET UNITYSDK_OFFSET(0x1642F5C0)
#define IIHGOLOEGHC_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x1642F730)
#define IIHGOLOEGHC_HOOGCJHCLLP_OFFSET UNITYSDK_OFFSET(0x1642F6A0)

inline static constexpr unsigned int IIHGOLOEGHC_TypeDefinitionIndex = 62526;

	class IIHGOLOEGHC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FNCAJPNHGMN*>* HPJFKFGPPGE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHGOLOEGHC_CTOR_OFFSET))(this);
		}

		::System::Void EEGJLHEOODD(::FNCAJPNHGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNCAJPNHGMN*))((::PBYTE)hIl2Cpp + IIHGOLOEGHC_EEGJLHEOODD_OFFSET))(this, a1);
		}

		::System::Void HOOGCJHCLLP(::FNCAJPNHGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNCAJPNHGMN*))((::PBYTE)hIl2Cpp + IIHGOLOEGHC_HOOGCJHCLLP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint HAIEJENPAMD(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + IIHGOLOEGHC_HAIEJENPAMD_OFFSET))(this, a1);
		}

	};
