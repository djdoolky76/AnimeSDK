#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class GJBGAGHHABE_1;

#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C_APENBPDMCDE_OFFSET UNITYSDK_OFFSET(0x16511280)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16511230)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16511270)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtual3DActionCamera_1___c_TypeDefinitionIndex = 53911;

	template <typename T>
	class NapVirtual3DActionCamera_1___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>** StaticGet___9__77_0()
		{
			return (::System::Func_3<::System::Single, ::GJBGAGHHABE_1<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NapVirtual3DActionCamera_1___c_TypeDefinitionIndex)->GetStaticField(0x3E8E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapVirtual3DActionCamera_1___c_TypeDefinitionIndex)->GetStaticField(0x3E8E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C__CTOR_OFFSET))(this);
		}

		::System::Single APENBPDMCDE(::System::Single PMNLNNGEIFM, ::GJBGAGHHABE_1<::System::Single>* IPMMCGDMODG)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::GJBGAGHHABE_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1___C_APENBPDMCDE_OFFSET))(this, PMNLNNGEIFM, IPMMCGDMODG);
		}
	};
}
