#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class DHGOECAECHA;
namespace RPG::Client { class OnPreloadOperationDelegate; }

#define NDBIPEFKBOP___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB19BF0)
#define NDBIPEFKBOP___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBB1A0F0)

inline static constexpr unsigned int NDBIPEFKBOP___c__DisplayClass4_0_TypeDefinitionIndex = 59676;

	class NDBIPEFKBOP___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::OnPreloadOperationDelegate* onComplete; // 0x10
		::DHGOECAECHA* __9__0; // 0x18
		::System::Int32 preloadedNum; // 0x20
		::System::Int32 preloadCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDBIPEFKBOP___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadAsync_b__0(::AIBOPLOBAFN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + NDBIPEFKBOP___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET))(this, a1, a2);
		}

	};
