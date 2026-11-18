#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNEPNMHDHFL;
class NMLEGIGBGKM;
class ODMPIIBDINP;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace Foundation::ViewObject::Donjon { class IDonjonFloorComponent; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CCD210)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_1_OFFSET UNITYSDK_OFFSET(0x15CCD370)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_2_OFFSET UNITYSDK_OFFSET(0x15CCD3D0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_OFFSET UNITYSDK_OFFSET(0x15CCD310)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATEDONJONFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x15CCD430)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_TRACKDECORTYPE_OFFSET UNITYSDK_OFFSET(0x15CCD2C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCD700)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObjectBuildContext_TypeDefinitionIndex = 83637;

	class DonjonFloorObjectBuildContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::Foundation::ViewObject::Donjon::IDonjonFloorComponent*>* ObjectComponents; // 0x10
		::System::Int32 DungeonID; // 0x18
		::System::Int32 FloorID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void TrackDecorType(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_TRACKDECORTYPE_OFFSET))(this, decor);
		}

		::System::Void GenerateComponentByConfig(::ODMPIIBDINP* config)
		{
			return ((::System::Void(*)(::PVOID, ::ODMPIIBDINP*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_OFFSET))(this, config);
		}

		::System::Void GenerateComponentByConfig_1(::BNEPNMHDHFL* config)
		{
			return ((::System::Void(*)(::PVOID, ::BNEPNMHDHFL*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_1_OFFSET))(this, config);
		}

		::System::Void GenerateComponentByConfig_2(::NMLEGIGBGKM* config)
		{
			return ((::System::Void(*)(::PVOID, ::NMLEGIGBGKM*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATECOMPONENTBYCONFIG_2_OFFSET))(this, config);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObject* GenerateDonjonFloorObject(::System::String* name)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECTBUILDCONTEXT_GENERATEDONJONFLOOROBJECT_OFFSET))(this, name);
		}
	};
}
