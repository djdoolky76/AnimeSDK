#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGOPLKFEJAP;
namespace System { class Object; }

#define FGOPLKFEJAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C9410)
#define FGOPLKFEJAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C9440)
#define FGOPLKFEJAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8C9450)

inline static constexpr unsigned int FGOPLKFEJAP___c_TypeDefinitionIndex = 33672;

	class FGOPLKFEJAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x511C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGOPLKFEJAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP___C_CTOR_OFFSET))(this);
		}

		::FGOPLKFEJAP* __cctor_b__28_0()
		{
			return ((::FGOPLKFEJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGOPLKFEJAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
