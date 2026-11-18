#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;

#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_CLONE_OFFSET UNITYSDK_OFFSET(0x1B9137E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B913510)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B912EB0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B913570)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B912F30)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_LERP_OFFSET UNITYSDK_OFFSET(0x1B9138E0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B913800)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B913870)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_ZERO_OFFSET UNITYSDK_OFFSET(0x1B913790)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B913A00)
#define MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9139F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraComposer_TypeDefinitionIndex = 38994;

	class ConfigCameraComposer : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigCameraComposer** StaticGet_Default()
		{
			return (::MoleMole::Config::ConfigCameraComposer**)Il2CppClass::FromTypeDefinitionIndex(ConfigCameraComposer_TypeDefinitionIndex)->GetStaticField(0x3B710);
		}
		::System::Single BiasY; // 0x10
		::System::Single ScreenY; // 0x14
		::System::Single BiasX; // 0x18
		::System::Single ScreenX; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER__CCTOR_OFFSET))();
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Void Zero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_ZERO_OFFSET))(this);
		}

		::System::Void Clone(::MoleMole::Config::ConfigCameraComposer* target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_CLONE_OFFSET))(this, target);
		}

		static ::MoleMole::Config::ConfigCameraComposer* op_Addition(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MoleMole::Config::ConfigCameraComposer* op_Subtraction(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MoleMole::Config::ConfigCameraComposer* Lerp(::MoleMole::Config::ConfigCameraComposer* a, ::MoleMole::Config::ConfigCameraComposer* b, ::MoleMole::Config::ConfigCameraComposer*& data, ::System::Single t)
		{
			return ((::MoleMole::Config::ConfigCameraComposer*(*)(::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*, ::MoleMole::Config::ConfigCameraComposer*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACOMPOSER_LERP_OFFSET))(a, b, data, t);
		}
	};
}
