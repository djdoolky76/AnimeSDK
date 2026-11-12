#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAINGAEAJIN;
namespace System { class Object; }

#define EAINGAEAJIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F50BF10)
#define EAINGAEAJIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F50BF50)
#define EAINGAEAJIN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F50BF60)

inline static constexpr unsigned int EAINGAEAJIN___c_TypeDefinitionIndex = 32290;

	class EAINGAEAJIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x465B0);
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
