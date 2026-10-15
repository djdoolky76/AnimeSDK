#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIHMBFCKEDG_ECHAJKOILNG_OFFSET UNITYSDK_OFFSET(0xB41FA10)
#define KIHMBFCKEDG_JJNFOPNOPBF_1_OFFSET UNITYSDK_OFFSET(0xB41FF60)
#define KIHMBFCKEDG_JJNFOPNOPBF_2_OFFSET UNITYSDK_OFFSET(0xB41FFB0)
#define KIHMBFCKEDG_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB41FF10)
#define KIHMBFCKEDG_JPIJCCHOIBC_OFFSET UNITYSDK_OFFSET(0xB41F680)
#define KIHMBFCKEDG_MGBCKEGBDDM_OFFSET UNITYSDK_OFFSET(0xB41F800)
#define KIHMBFCKEDG_PMDIDGONPKB_OFFSET UNITYSDK_OFFSET(0xB41F620)

inline static constexpr unsigned int KIHMBFCKEDG_TypeDefinitionIndex = 59039;

	class KIHMBFCKEDG : public ::System::Object
	{
	public:
		static ::System::Int32 PMDIDGONPKB(::RPG::GameCore::AvatarBaseTypeMask a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_PMDIDGONPKB_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseTypeMask JPIJCCHOIBC(::Il2CppArray<::RPG::GameCore::AvatarBaseType>* a1)
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::Il2CppArray<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_JPIJCCHOIBC_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarBaseType MGBCKEGBDDM(::RPG::GameCore::AvatarBaseTypeMask a1)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_MGBCKEGBDDM_OFFSET))(a1);
		}

		static ::System::Void ECHAJKOILNG(::RPG::GameCore::AvatarBaseTypeMask a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarBaseTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_ECHAJKOILNG_OFFSET))(a1, a2);
		}

		static ::System::Boolean JJNFOPNOPBF(::RPG::GameCore::AvatarBaseTypeMask a1, ::RPG::GameCore::AvatarBaseType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeMask, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_JJNFOPNOPBF_OFFSET))(a1, a2);
		}

		static ::System::Boolean JJNFOPNOPBF_1(::RPG::GameCore::AvatarBaseTypeMask a1, ::RPG::GameCore::AvatarBaseTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeMask, ::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_JJNFOPNOPBF_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean JJNFOPNOPBF_2(::RPG::GameCore::AvatarBaseTypeKind a1, ::RPG::GameCore::AvatarBaseTypeKind a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeKind, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + KIHMBFCKEDG_JJNFOPNOPBF_2_OFFSET))(a1, a2);
		}

	};
