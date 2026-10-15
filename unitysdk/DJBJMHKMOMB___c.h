#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJBJMHKMOMB;
namespace System { class Object; }

#define DJBJMHKMOMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E198DA0)
#define DJBJMHKMOMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E198DE0)
#define DJBJMHKMOMB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E198DF0)

inline static constexpr unsigned int DJBJMHKMOMB___c_TypeDefinitionIndex = 34874;

	class DJBJMHKMOMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBJMHKMOMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB___C_CTOR_OFFSET))(this);
		}

		::DJBJMHKMOMB* __cctor_b__28_0()
		{
			return ((::DJBJMHKMOMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJBJMHKMOMB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
