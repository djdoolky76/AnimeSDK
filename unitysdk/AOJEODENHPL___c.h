#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOJEODENHPL;
namespace System { class Object; }

#define AOJEODENHPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201ADA80)
#define AOJEODENHPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201ADAC0)
#define AOJEODENHPL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x201ADAD0)

inline static constexpr unsigned int AOJEODENHPL___c_TypeDefinitionIndex = 30807;

	class AOJEODENHPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOJEODENHPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL___C_CTOR_OFFSET))(this);
		}

		::AOJEODENHPL* __cctor_b__43_0()
		{
			return ((::AOJEODENHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJEODENHPL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
