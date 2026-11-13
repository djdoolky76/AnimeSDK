#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAPFMHHMKIM;
namespace System { class Object; }

#define MAPFMHHMKIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBBB380)
#define MAPFMHHMKIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBB3B0)
#define MAPFMHHMKIM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FBBB3C0)

inline static constexpr unsigned int MAPFMHHMKIM___c_TypeDefinitionIndex = 34898;

	class MAPFMHHMKIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAPFMHHMKIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPFMHHMKIM___C_CTOR_OFFSET))(this);
		}

		::MAPFMHHMKIM* __cctor_b__38_0()
		{
			return ((::MAPFMHHMKIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPFMHHMKIM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
