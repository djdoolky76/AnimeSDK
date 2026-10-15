#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLMBEOAENGF;
namespace System { class Object; }

#define GLMBEOAENGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E497EA0)
#define GLMBEOAENGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E497EE0)
#define GLMBEOAENGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E497EF0)

inline static constexpr unsigned int GLMBEOAENGF___c_TypeDefinitionIndex = 26929;

	class GLMBEOAENGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLMBEOAENGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF___C_CTOR_OFFSET))(this);
		}

		::GLMBEOAENGF* __cctor_b__33_0()
		{
			return ((::GLMBEOAENGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMBEOAENGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
