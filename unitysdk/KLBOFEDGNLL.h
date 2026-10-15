#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define KLBOFEDGNLL_CIIKPCCHFHG_OFFSET UNITYSDK_OFFSET(0xB4D9090)
#define KLBOFEDGNLL_CMIEGOCBPPP_OFFSET UNITYSDK_OFFSET(0xB4D9110)
#define KLBOFEDGNLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D9470)
#define KLBOFEDGNLL_GOCFELBGHNJ_OFFSET UNITYSDK_OFFSET(0xB4D8F30)
#define KLBOFEDGNLL_JFFBNHNMDNN_OFFSET UNITYSDK_OFFSET(0xB4D9350)
#define KLBOFEDGNLL_JMAJENEDLHA_OFFSET UNITYSDK_OFFSET(0xB4D93E0)
#define KLBOFEDGNLL_PFABIGLJNKM_OFFSET UNITYSDK_OFFSET(0xB4D91F0)

inline static constexpr unsigned int KLBOFEDGNLL_TypeDefinitionIndex = 62466;

	class KLBOFEDGNLL : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* AFJMAJOCMHO; // 0x10
		::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* CGIMEMDLCIB; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>* GFAIMKAKJBD; // 0x20
		::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* FFBFKGHBJAH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_CTOR_OFFSET))(this);
		}

		::System::Void GOCFELBGHNJ(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_GOCFELBGHNJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint PFABIGLJNKM(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_PFABIGLJNKM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JFFBNHNMDNN(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_JFFBNHNMDNN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint JMAJENEDLHA(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_JMAJENEDLHA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* CIIKPCCHFHG(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Collections::Generic::SortedList_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_CIIKPCCHFHG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AvatarPropertyType CMIEGOCBPPP(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KLBOFEDGNLL_CMIEGOCBPPP_OFFSET))(this, a1);
		}

	};
