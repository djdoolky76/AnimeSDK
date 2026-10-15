#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONAEGKCMPNN;
namespace System { class Object; }

#define ONAEGKCMPNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE94310)
#define ONAEGKCMPNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE94350)
#define ONAEGKCMPNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE94360)

inline static constexpr unsigned int ONAEGKCMPNN___c_TypeDefinitionIndex = 30662;

	class ONAEGKCMPNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONAEGKCMPNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN___C_CTOR_OFFSET))(this);
		}

		::ONAEGKCMPNN* __cctor_b__28_0()
		{
			return ((::ONAEGKCMPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAEGKCMPNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
