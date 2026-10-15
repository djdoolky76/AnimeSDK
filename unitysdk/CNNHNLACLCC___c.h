#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNNHNLACLCC;
namespace System { class Object; }

#define CNNHNLACLCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFBA0)
#define CNNHNLACLCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFBE0)
#define CNNHNLACLCC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0DFBF0)

inline static constexpr unsigned int CNNHNLACLCC___c_TypeDefinitionIndex = 31893;

	class CNNHNLACLCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNNHNLACLCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC___C_CTOR_OFFSET))(this);
		}

		::CNNHNLACLCC* __cctor_b__33_0()
		{
			return ((::CNNHNLACLCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNHNLACLCC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
