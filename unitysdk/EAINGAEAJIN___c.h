#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAINGAEAJIN;
namespace System { class Object; }

#define EAINGAEAJIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE740)
#define EAINGAEAJIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FE780)
#define EAINGAEAJIN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1FE790)

inline static constexpr unsigned int EAINGAEAJIN___c_TypeDefinitionIndex = 31377;

	class EAINGAEAJIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAINGAEAJIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN___C_CTOR_OFFSET))(this);
		}

		::EAINGAEAJIN* __cctor_b__38_0()
		{
			return ((::EAINGAEAJIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAINGAEAJIN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
