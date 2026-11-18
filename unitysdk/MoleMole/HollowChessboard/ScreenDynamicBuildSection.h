#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;

#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x139EBAB0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x139EBBE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x139EBC30)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x139EBC20)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ScreenDynamicBuildSection_TypeDefinitionIndex = 73610;

	class ScreenDynamicBuildSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(ScreenDynamicBuildSection_TypeDefinitionIndex)->GetStaticField(0x14410);
		}
		::System::UInt32 DynamicKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::UInt32 GetDynamicKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCREENDYNAMICBUILDSECTION_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
