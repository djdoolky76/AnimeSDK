#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ScreenDynamicBuildSectionHelperType.h"
#include "unitysdk/PMGPNDNCFNG.h"
#include "unitysdk/System/Object.h"

class BCHOANCLADD;
class DENGNOJFDLA;

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_BUILD_OFFSET UNITYSDK_OFFSET(0x13EE9DB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_TRYADDBLACKBOARDITEM_OFFSET UNITYSDK_OFFSET(0x13EE9E40)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE9DA0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigHollowChessboardUvStackAnimationBehavior_UvStackAnimationBehavior_TypeDefinitionIndex = 47115;

	class ConfigHollowChessboardUvStackAnimationBehavior_UvStackAnimationBehavior : public ::System::Object
	{
	public:
		::System::Boolean IsPre; // 0x10

		::System::Void _ctor(::System::Boolean pre)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR__CTOR_OFFSET))(this, pre);
		}

		::System::Boolean Build(::BCHOANCLADD* data, ::DENGNOJFDLA* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCHOANCLADD*, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_BUILD_OFFSET))(this, data, context);
		}

		::System::Boolean TryAddBlackBoardItem(::BCHOANCLADD* data, ::DENGNOJFDLA* context, ::PMGPNDNCFNG key, ::System::UInt16 lower16Bits, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType sectionType)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCHOANCLADD*, ::DENGNOJFDLA*, ::PMGPNDNCFNG, ::System::UInt16, ::MoleMole::HollowChessboard::ScreenDynamicBuildSectionHelperType))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGHOLLOWCHESSBOARDUVSTACKANIMATIONBEHAVIOR_UVSTACKANIMATIONBEHAVIOR_TRYADDBLACKBOARDITEM_OFFSET))(this, data, context, key, lower16Bits, sectionType);
		}
	};
}
