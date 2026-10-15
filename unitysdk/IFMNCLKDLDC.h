#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class BEIJCJFHANG;
class BHJLIDNGOJM;
class KKHBPFEMLKM;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IFMNCLKDLDC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F195C0)
#define IFMNCLKDLDC_KICLIJJKCLK_OFFSET UNITYSDK_OFFSET(0x15F19D60)
#define IFMNCLKDLDC_LJPKBBCIKOA_OFFSET UNITYSDK_OFFSET(0x15F19A60)
#define IFMNCLKDLDC_OPGCAPMNBOC_OFFSET UNITYSDK_OFFSET(0x15F196B0)

inline static constexpr unsigned int IFMNCLKDLDC_TypeDefinitionIndex = 81111;

	class IFMNCLKDLDC : public ::System::Object
	{
	public:
		::BEIJCJFHANG* BIGNDIMIHLB; // 0x10
		::KKHBPFEMLKM* HNLOJEIEFKC; // 0x18
		::BHJLIDNGOJM* LBNAGLIGKIO; // 0x20
		::System::Void _ctor(::BHJLIDNGOJM* a1, ::KKHBPFEMLKM* a2, ::BEIJCJFHANG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHJLIDNGOJM*, ::KKHBPFEMLKM*, ::BEIJCJFHANG*))((::PBYTE)hIl2Cpp + IFMNCLKDLDC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPGCAPMNBOC(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::FateRinDeckRecommendTiming a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFMNCLKDLDC_OPGCAPMNBOC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* LJPKBBCIKOA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCLKDLDC_LJPKBBCIKOA_OFFSET))(this);
		}

		::System::Void KICLIJJKCLK(::RPG::GameCore::FateRinHouguOwnerType a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Object*))((::PBYTE)hIl2Cpp + IFMNCLKDLDC_KICLIJJKCLK_OFFSET))(this, a1, a2, a3, a4);
		}

	};
