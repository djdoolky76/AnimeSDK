#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIELJCGKNJN;
namespace System { class Object; }

#define LIELJCGKNJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93EF80)
#define LIELJCGKNJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93EFC0)
#define LIELJCGKNJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E93EFD0)

inline static constexpr unsigned int LIELJCGKNJN___c_TypeDefinitionIndex = 28553;

	class LIELJCGKNJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIELJCGKNJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN___C_CTOR_OFFSET))(this);
		}

		::LIELJCGKNJN* __cctor_b__28_0()
		{
			return ((::LIELJCGKNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIELJCGKNJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
