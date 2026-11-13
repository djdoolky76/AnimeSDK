#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MECNLNGKDHA;
namespace System { class Object; }

#define MECNLNGKDHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD530B0)
#define MECNLNGKDHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD530F0)
#define MECNLNGKDHA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD53100)

inline static constexpr unsigned int MECNLNGKDHA___c_TypeDefinitionIndex = 28326;

	class MECNLNGKDHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECNLNGKDHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA___C_CTOR_OFFSET))(this);
		}

		::MECNLNGKDHA* __cctor_b__23_0()
		{
			return ((::MECNLNGKDHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MECNLNGKDHA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
