#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBDKDFCOAPB;
namespace System { class Object; }

#define PBDKDFCOAPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE7FE0)
#define PBDKDFCOAPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE8020)
#define PBDKDFCOAPB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FBE8030)

inline static constexpr unsigned int PBDKDFCOAPB___c_TypeDefinitionIndex = 31521;

	class PBDKDFCOAPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBDKDFCOAPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB___C_CTOR_OFFSET))(this);
		}

		::PBDKDFCOAPB* __cctor_b__18_0()
		{
			return ((::PBDKDFCOAPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
