#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class NOEOAMBCKHB;
class TutorialNode;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertProductView; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ILFJLAGBFCF_AMNKGFFKHHP_OFFSET UNITYSDK_OFFSET(0x17485870)
#define ILFJLAGBFCF_CTOR_OFFSET UNITYSDK_OFFSET(0x17484920)
#define ILFJLAGBFCF_EIBJEPFBKCE_OFFSET UNITYSDK_OFFSET(0x17484930)
#define ILFJLAGBFCF_IPJDADIGOPK_OFFSET UNITYSDK_OFFSET(0x17484D40)
#define ILFJLAGBFCF_MJJIPNGFKHO_OFFSET UNITYSDK_OFFSET(0x17485050)
#define ILFJLAGBFCF_NIONLNOHODK_OFFSET UNITYSDK_OFFSET(0x174851C0)

inline static constexpr unsigned int ILFJLAGBFCF_TypeDefinitionIndex = 79755;

	class ILFJLAGBFCF : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Boolean GPNPHPGLKLF; // 0x20
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_CTOR_OFFSET))(this, a1, a2);
		}

		::LPHINGPIEAJ* EIBJEPFBKCE(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::String* a4)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::String*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_EIBJEPFBKCE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::TutorialNode* MJJIPNGFKHO(::UnityEngine::Transform* a1)
		{
			return ((::TutorialNode*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_MJJIPNGFKHO_OFFSET))(a1);
		}

		::LPHINGPIEAJ* NIONLNOHODK(::LPHINGPIEAJ* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ComicDessert::AnchorType a3, ::System::String* a4, ::NOEOAMBCKHB* a5)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::LPHINGPIEAJ*, ::System::UInt32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::String*, ::NOEOAMBCKHB*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_NIONLNOHODK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::LPHINGPIEAJ* IPJDADIGOPK(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_IPJDADIGOPK_OFFSET))(this, a1, a2);
		}

		::System::Void AMNKGFFKHHP(::RPG::Client::LittleGame::ComicDessert::ComicDessertProductView* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertProductView*, ::System::String*))((::PBYTE)hIl2Cpp + ILFJLAGBFCF_AMNKGFFKHHP_OFFSET))(this, a1, a2);
		}

	};
