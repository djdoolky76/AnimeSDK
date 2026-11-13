#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNAMLHFLDB;
namespace System { class Object; }

#define BGNAMLHFLDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20110180)
#define BGNAMLHFLDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201101C0)
#define BGNAMLHFLDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201101D0)

inline static constexpr unsigned int BGNAMLHFLDB___c_TypeDefinitionIndex = 32868;

	class BGNAMLHFLDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C_CTOR_OFFSET))(this);
		}

		::BGNAMLHFLDB* __cctor_b__23_0()
		{
			return ((::BGNAMLHFLDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNAMLHFLDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
