#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
namespace System { class Object; }

#define CJLCPMDGIBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B4DB0)
#define CJLCPMDGIBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B4DE0)
#define CJLCPMDGIBO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3B4DF0)

inline static constexpr unsigned int CJLCPMDGIBO___c_TypeDefinitionIndex = 25780;

	class CJLCPMDGIBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJLCPMDGIBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO___C_CTOR_OFFSET))(this);
		}

		::CJLCPMDGIBO* __cctor_b__23_0()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLCPMDGIBO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
