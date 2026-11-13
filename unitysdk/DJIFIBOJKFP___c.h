#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIFIBOJKFP;
namespace System { class Object; }

#define DJIFIBOJKFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB31380)
#define DJIFIBOJKFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB313C0)
#define DJIFIBOJKFP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FB313D0)

inline static constexpr unsigned int DJIFIBOJKFP___c_TypeDefinitionIndex = 29661;

	class DJIFIBOJKFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C_CTOR_OFFSET))(this);
		}

		::DJIFIBOJKFP* __cctor_b__48_0()
		{
			return ((::DJIFIBOJKFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIFIBOJKFP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
