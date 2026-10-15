#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHKKOLCPBOH;
namespace System { class Object; }

#define CHKKOLCPBOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09D1C0)
#define CHKKOLCPBOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09D1F0)
#define CHKKOLCPBOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E09D200)

inline static constexpr unsigned int CHKKOLCPBOH___c_TypeDefinitionIndex = 32387;

	class CHKKOLCPBOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHKKOLCPBOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH___C_CTOR_OFFSET))(this);
		}

		::CHKKOLCPBOH* __cctor_b__33_0()
		{
			return ((::CHKKOLCPBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKKOLCPBOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
