#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1358C7B0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1358C7F0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__50_0_OFFSET UNITYSDK_OFFSET(0x1358C800)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c_TypeDefinitionIndex = 41061;

	class HackControllableSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__50_0()
		{
			return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x50C30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x50C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _EnterControllableCamera_b__50_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__50_0_OFFSET))(this);
		}
	};
}
