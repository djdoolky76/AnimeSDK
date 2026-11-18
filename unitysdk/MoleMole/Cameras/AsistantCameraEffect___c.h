#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }

#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163E1F30)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163E1F70)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__TEST_B__8_0_OFFSET UNITYSDK_OFFSET(0x163E1F80)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect___c_TypeDefinitionIndex = 72837;

	class AsistantCameraEffect___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::Core::DOGetter_1<::System::Int32>** StaticGet___9__8_0()
		{
			return (::DG::Tweening::Core::DOGetter_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AsistantCameraEffect___c_TypeDefinitionIndex)->GetStaticField(0x44A00);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AsistantCameraEffect___c_TypeDefinitionIndex)->GetStaticField(0x44A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Test_b__8_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT___C__TEST_B__8_0_OFFSET))(this);
		}
	};
}
