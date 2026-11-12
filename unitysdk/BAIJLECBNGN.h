#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIMGBHJFAFK.h"
#include "unitysdk/System/Object.h"
class BCIFBNNDPFE;
namespace RPG::GameCore { class ComicDessertForumPostRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAIJLECBNGN_CMDKBLLNMIB_OFFSET UNITYSDK_OFFSET(0x16CF0C00)
#define BAIJLECBNGN_CTOR_OFFSET UNITYSDK_OFFSET(0x16CF0E50)
#define BAIJLECBNGN_HHNFFFMBIKD_OFFSET UNITYSDK_OFFSET(0x16CF0970)
#define BAIJLECBNGN_LLECCCIMBJP_OFFSET UNITYSDK_OFFSET(0x16CF0860)

inline static constexpr unsigned int BAIJLECBNGN_TypeDefinitionIndex = 77157;

	class BAIJLECBNGN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::AIMGBHJFAFK, ::BCIFBNNDPFE*>* BDBOGJHLEIG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIJLECBNGN_CTOR_OFFSET))(this);
		}

		::BCIFBNNDPFE* LLECCCIMBJP(::AIMGBHJFAFK a1)
		{
			return ((::BCIFBNNDPFE*(*)(::PVOID, ::AIMGBHJFAFK))((::PBYTE)hIl2Cpp + BAIJLECBNGN_LLECCCIMBJP_OFFSET))(this, a1);
		}

		::System::Void HHNFFFMBIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIJLECBNGN_HHNFFFMBIKD_OFFSET))(this);
		}

		static ::BCIFBNNDPFE* CMDKBLLNMIB(::RPG::GameCore::ComicDessertForumPostRow* a1)
		{
			return ((::BCIFBNNDPFE*(*)(::RPG::GameCore::ComicDessertForumPostRow*))((::PBYTE)hIl2Cpp + BAIJLECBNGN_CMDKBLLNMIB_OFFSET))(a1);
		}

	};
