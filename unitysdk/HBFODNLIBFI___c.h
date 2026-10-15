#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFODNLIBFI;
namespace System { class Object; }

#define HBFODNLIBFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FF290)
#define HBFODNLIBFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FF2D0)
#define HBFODNLIBFI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4FF2E0)

inline static constexpr unsigned int HBFODNLIBFI___c_TypeDefinitionIndex = 26586;

	class HBFODNLIBFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFODNLIBFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI___C_CTOR_OFFSET))(this);
		}

		::HBFODNLIBFI* __cctor_b__38_0()
		{
			return ((::HBFODNLIBFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFODNLIBFI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
