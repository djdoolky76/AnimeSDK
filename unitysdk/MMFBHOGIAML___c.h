#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMFBHOGIAML;
namespace System { class Object; }

#define MMFBHOGIAML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC3390)
#define MMFBHOGIAML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC33D0)
#define MMFBHOGIAML___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FDC33E0)

inline static constexpr unsigned int MMFBHOGIAML___c_TypeDefinitionIndex = 30251;

	class MMFBHOGIAML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFBHOGIAML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML___C_CTOR_OFFSET))(this);
		}

		::MMFBHOGIAML* __cctor_b__38_0()
		{
			return ((::MMFBHOGIAML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFBHOGIAML___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
