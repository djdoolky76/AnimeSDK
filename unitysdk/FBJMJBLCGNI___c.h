#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBJMJBLCGNI;
namespace System { class Object; }

#define FBJMJBLCGNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F895CE0)
#define FBJMJBLCGNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F895D10)
#define FBJMJBLCGNI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F895D20)

inline static constexpr unsigned int FBJMJBLCGNI___c_TypeDefinitionIndex = 34984;

	class FBJMJBLCGNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBJMJBLCGNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI___C_CTOR_OFFSET))(this);
		}

		::FBJMJBLCGNI* __cctor_b__33_0()
		{
			return ((::FBJMJBLCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMJBLCGNI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
