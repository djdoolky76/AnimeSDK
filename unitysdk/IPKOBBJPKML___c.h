#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPKOBBJPKML;
namespace System { class Object; }

#define IPKOBBJPKML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEE5D00)
#define IPKOBBJPKML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE5D40)
#define IPKOBBJPKML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEE5D50)

inline static constexpr unsigned int IPKOBBJPKML___c_TypeDefinitionIndex = 33956;

	class IPKOBBJPKML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x557F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKOBBJPKML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML___C_CTOR_OFFSET))(this);
		}

		::IPKOBBJPKML* __cctor_b__23_0()
		{
			return ((::IPKOBBJPKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKOBBJPKML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
