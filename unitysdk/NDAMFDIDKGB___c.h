#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDAMFDIDKGB;
namespace System { class Object; }

#define NDAMFDIDKGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3BC0)
#define NDAMFDIDKGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE3C00)
#define NDAMFDIDKGB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAE3C10)

inline static constexpr unsigned int NDAMFDIDKGB___c_TypeDefinitionIndex = 29614;

	class NDAMFDIDKGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAMFDIDKGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB___C_CTOR_OFFSET))(this);
		}

		::NDAMFDIDKGB* __cctor_b__23_0()
		{
			return ((::NDAMFDIDKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAMFDIDKGB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
