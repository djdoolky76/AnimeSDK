#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CCMMPEGGAMC;
class OFAKEFLLHNP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIEEHMBGEIF_CTOR_OFFSET UNITYSDK_OFFSET(0x16E395E0)
#define CIEEHMBGEIF_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x16E39170)
#define CIEEHMBGEIF_HGONPBCKOGM_OFFSET UNITYSDK_OFFSET(0x16E393D0)
#define CIEEHMBGEIF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16E38E90)
#define CIEEHMBGEIF_PAMKOLICNOL_OFFSET UNITYSDK_OFFSET(0x16E39460)

inline static constexpr unsigned int CIEEHMBGEIF_TypeDefinitionIndex = 63923;

	class CIEEHMBGEIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::CCMMPEGGAMC*>* IAFNNMFIMOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEHMBGEIF_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEEHMBGEIF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CIEEHMBGEIF_EIMIIHEDKFM_OFFSET))(this, a1, a2);
		}

		::OFAKEFLLHNP* PAMKOLICNOL(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CIEEHMBGEIF_PAMKOLICNOL_OFFSET))(this, a1);
		}

		::CCMMPEGGAMC* HGONPBCKOGM(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::CCMMPEGGAMC*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CIEEHMBGEIF_HGONPBCKOGM_OFFSET))(this, a1);
		}

	};
