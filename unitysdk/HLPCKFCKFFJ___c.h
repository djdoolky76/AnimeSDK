#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLPCKFCKFFJ;
namespace System { class Object; }

#define HLPCKFCKFFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E599760)
#define HLPCKFCKFFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5997A0)
#define HLPCKFCKFFJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5997B0)

inline static constexpr unsigned int HLPCKFCKFFJ___c_TypeDefinitionIndex = 34276;

	class HLPCKFCKFFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x383D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLPCKFCKFFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ___C_CTOR_OFFSET))(this);
		}

		::HLPCKFCKFFJ* __cctor_b__33_0()
		{
			return ((::HLPCKFCKFFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPCKFCKFFJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
