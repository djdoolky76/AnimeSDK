#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECGFCJJLNI;
namespace System { class Object; }

#define AECGFCJJLNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE9400)
#define AECGFCJJLNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE9440)
#define AECGFCJJLNI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDE9450)

inline static constexpr unsigned int AECGFCJJLNI___c_TypeDefinitionIndex = 25782;

	class AECGFCJJLNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AECGFCJJLNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI___C_CTOR_OFFSET))(this);
		}

		::AECGFCJJLNI* __cctor_b__33_0()
		{
			return ((::AECGFCJJLNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECGFCJJLNI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
