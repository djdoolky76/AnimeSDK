#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMJCABJPDHG;
namespace System { class Object; }

#define FMJCABJPDHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA4E0)
#define FMJCABJPDHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA520)
#define FMJCABJPDHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3BA530)

inline static constexpr unsigned int FMJCABJPDHG___c_TypeDefinitionIndex = 29808;

	class FMJCABJPDHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMJCABJPDHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG___C_CTOR_OFFSET))(this);
		}

		::FMJCABJPDHG* __cctor_b__33_0()
		{
			return ((::FMJCABJPDHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJCABJPDHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
