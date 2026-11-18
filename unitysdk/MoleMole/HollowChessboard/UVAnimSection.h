#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;
namespace MoleMole::HollowChessboard { class UVAnimSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13EEA6C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_GETRELATIVESCREENLAYER_OFFSET UNITYSDK_OFFSET(0x13EEA750)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EEA7A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEA790)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_TypeDefinitionIndex = 44044;

	class UVAnimSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(UVAnimSection_TypeDefinitionIndex)->GetStaticField(0x11510);
		}
		::MoleMole::HollowChessboard::UVAnimSection_Config* UVAnimConfig; // 0x10
		::System::Int32 RelativeScreenLayer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::Int32 GetRelativeScreenLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_GETRELATIVESCREENLAYER_OFFSET))(this);
		}
	};
}
