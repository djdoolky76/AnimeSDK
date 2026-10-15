#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMACHAFCGNI;
namespace System { class Object; }

#define NMACHAFCGNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D380)
#define NMACHAFCGNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D3C0)
#define NMACHAFCGNI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB3D3D0)

inline static constexpr unsigned int NMACHAFCGNI___c_TypeDefinitionIndex = 31610;

	class NMACHAFCGNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMACHAFCGNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI___C_CTOR_OFFSET))(this);
		}

		::NMACHAFCGNI* __cctor_b__38_0()
		{
			return ((::NMACHAFCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
