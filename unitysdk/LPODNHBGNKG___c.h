#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPODNHBGNKG;
namespace System { class Object; }

#define LPODNHBGNKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF1A0)
#define LPODNHBGNKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF1E0)
#define LPODNHBGNKG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FBAF1F0)

inline static constexpr unsigned int LPODNHBGNKG___c_TypeDefinitionIndex = 29270;

	class LPODNHBGNKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPODNHBGNKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODNHBGNKG___C_CTOR_OFFSET))(this);
		}

		::LPODNHBGNKG* __cctor_b__33_0()
		{
			return ((::LPODNHBGNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPODNHBGNKG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
