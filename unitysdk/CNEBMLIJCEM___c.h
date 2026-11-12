#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNEBMLIJCEM;
namespace System { class Object; }

#define CNEBMLIJCEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4008A0)
#define CNEBMLIJCEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4008D0)
#define CNEBMLIJCEM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4008E0)

inline static constexpr unsigned int CNEBMLIJCEM___c_TypeDefinitionIndex = 35000;

	class CNEBMLIJCEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNEBMLIJCEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM___C_CTOR_OFFSET))(this);
		}

		::CNEBMLIJCEM* __cctor_b__28_0()
		{
			return ((::CNEBMLIJCEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBMLIJCEM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
