#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define PIPFNPKAMJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD85F20)
#define PIPFNPKAMJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD85F50)
#define PIPFNPKAMJL___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x1DD85F60)

inline static constexpr unsigned int PIPFNPKAMJL___c_TypeDefinitionIndex = 43957;

	class PIPFNPKAMJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPFNPKAMJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL___C_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* __cctor_b__49_0()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFNPKAMJL___C___CCTOR_B__49_0_OFFSET))(this);
		}

	};
