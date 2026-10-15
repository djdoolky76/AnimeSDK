#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPAPEBOFJJA;
namespace System { class Object; }

#define EPAPEBOFJJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3033F0)
#define EPAPEBOFJJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E303430)
#define EPAPEBOFJJA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E303440)

inline static constexpr unsigned int EPAPEBOFJJA___c_TypeDefinitionIndex = 26832;

	class EPAPEBOFJJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x555A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPAPEBOFJJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA___C_CTOR_OFFSET))(this);
		}

		::EPAPEBOFJJA* __cctor_b__28_0()
		{
			return ((::EPAPEBOFJJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPAPEBOFJJA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
