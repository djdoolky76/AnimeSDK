#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJOFJDKIOPG;
namespace System { class Object; }

#define BJOFJDKIOPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1F780)
#define BJOFJDKIOPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1F7C0)
#define BJOFJDKIOPG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF1F7D0)

inline static constexpr unsigned int BJOFJDKIOPG___c_TypeDefinitionIndex = 25613;

	class BJOFJDKIOPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJOFJDKIOPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG___C_CTOR_OFFSET))(this);
		}

		::BJOFJDKIOPG* __cctor_b__38_0()
		{
			return ((::BJOFJDKIOPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJOFJDKIOPG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
