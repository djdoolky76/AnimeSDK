#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANHNOJACGI;
namespace System { class Object; }

#define CANHNOJACGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F322F60)
#define CANHNOJACGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F322FA0)
#define CANHNOJACGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F322FB0)

inline static constexpr unsigned int CANHNOJACGI___c_TypeDefinitionIndex = 34652;

	class CANHNOJACGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANHNOJACGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI___C_CTOR_OFFSET))(this);
		}

		::CANHNOJACGI* __cctor_b__28_0()
		{
			return ((::CANHNOJACGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANHNOJACGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
