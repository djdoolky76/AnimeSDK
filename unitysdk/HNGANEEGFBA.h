#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/SourceStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class AJDCLALCDLJ;
class FEFLMKBBDLO;
class KBPCJPHHOPC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HNGANEEGFBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A36A2C0)
#define HNGANEEGFBA_ICJNPIILHLD_OFFSET UNITYSDK_OFFSET(0x1A36A9C0)
#define HNGANEEGFBA_MONHOPCPKCA_OFFSET UNITYSDK_OFFSET(0x1A36A6E0)
#define HNGANEEGFBA_MPLICILLKKD_OFFSET UNITYSDK_OFFSET(0x1A36A680)
#define HNGANEEGFBA_TRYSELECT_OFFSET UNITYSDK_OFFSET(0x1A36A2E0)

inline static constexpr unsigned int HNGANEEGFBA_TypeDefinitionIndex = 80070;

	class HNGANEEGFBA : public ::System::Object
	{
	public:
		::System::Boolean AEJIDHGCIKN; // 0x10
		::System::Boolean IKPOBGPBLNJ; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::ComicDessert::AnchorType DNBLDHMFBEI; // 0x14
		::RPG::Client::LittleGame::ComicDessert::SourceStrategy NBHJNGJIIEA; // 0x18
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::SourceStrategy a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::SourceStrategy, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HNGANEEGFBA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TrySelect(::KBPCJPHHOPC* a1, ::FEFLMKBBDLO* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBPCJPHHOPC*, ::FEFLMKBBDLO*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + HNGANEEGFBA_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MONHOPCPKCA(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::System::Nullable_1<::System::UInt32> a2, ::AJDCLALCDLJ* a3, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::System::Nullable_1<::System::UInt32>, ::AJDCLALCDLJ*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + HNGANEEGFBA_MONHOPCPKCA_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean ICJNPIILHLD(::AJDCLALCDLJ* a1)
		{
			return ((::System::Boolean(*)(::AJDCLALCDLJ*))((::PBYTE)hIl2Cpp + HNGANEEGFBA_ICJNPIILHLD_OFFSET))(a1);
		}

		::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason MPLICILLKKD()
		{
			return ((::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGANEEGFBA_MPLICILLKKD_OFFSET))(this);
		}

	};
