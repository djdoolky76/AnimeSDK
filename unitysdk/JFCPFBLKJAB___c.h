#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFCPFBLKJAB;
namespace System { class Object; }

#define JFCPFBLKJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F8EB0)
#define JFCPFBLKJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F8EF0)
#define JFCPFBLKJAB___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E6F8F00)

inline static constexpr unsigned int JFCPFBLKJAB___c_TypeDefinitionIndex = 25710;

	class JFCPFBLKJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFCPFBLKJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB___C_CTOR_OFFSET))(this);
		}

		::JFCPFBLKJAB* __cctor_b__44_0()
		{
			return ((::JFCPFBLKJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFCPFBLKJAB___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
