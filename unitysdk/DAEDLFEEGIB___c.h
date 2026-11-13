#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAEDLFEEGIB;
namespace System { class Object; }

#define DAEDLFEEGIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A33A0)
#define DAEDLFEEGIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202A33E0)
#define DAEDLFEEGIB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202A33F0)

inline static constexpr unsigned int DAEDLFEEGIB___c_TypeDefinitionIndex = 35342;

	class DAEDLFEEGIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAEDLFEEGIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB___C_CTOR_OFFSET))(this);
		}

		::DAEDLFEEGIB* __cctor_b__23_0()
		{
			return ((::DAEDLFEEGIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEDLFEEGIB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
