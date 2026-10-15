#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIONNFELFEF;
namespace System { class Object; }

#define IIONNFELFEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65F390)
#define IIONNFELFEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65F3C0)
#define IIONNFELFEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E65F3D0)

inline static constexpr unsigned int IIONNFELFEF___c_TypeDefinitionIndex = 25877;

	class IIONNFELFEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIONNFELFEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF___C_CTOR_OFFSET))(this);
		}

		::IIONNFELFEF* __cctor_b__33_0()
		{
			return ((::IIONNFELFEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIONNFELFEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
