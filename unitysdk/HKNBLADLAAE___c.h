#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNBLADLAAE;
namespace System { class Object; }

#define HKNBLADLAAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B1980)
#define HKNBLADLAAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B19C0)
#define HKNBLADLAAE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8B19D0)

inline static constexpr unsigned int HKNBLADLAAE___c_TypeDefinitionIndex = 31979;

	class HKNBLADLAAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNBLADLAAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE___C_CTOR_OFFSET))(this);
		}

		::HKNBLADLAAE* __cctor_b__33_0()
		{
			return ((::HKNBLADLAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNBLADLAAE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
