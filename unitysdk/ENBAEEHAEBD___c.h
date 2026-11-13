#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENBAEEHAEBD;
namespace System { class Object; }

#define ENBAEEHAEBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206E0A10)
#define ENBAEEHAEBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206E0A50)
#define ENBAEEHAEBD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206E0A60)

inline static constexpr unsigned int ENBAEEHAEBD___c_TypeDefinitionIndex = 29257;

	class ENBAEEHAEBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C_CTOR_OFFSET))(this);
		}

		::ENBAEEHAEBD* __cctor_b__23_0()
		{
			return ((::ENBAEEHAEBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBAEEHAEBD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
