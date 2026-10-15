#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOHAJCPBBJI;
namespace System { class Object; }

#define BOHAJCPBBJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00DF10)
#define BOHAJCPBBJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00DF50)
#define BOHAJCPBBJI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E00DF60)

inline static constexpr unsigned int BOHAJCPBBJI___c_TypeDefinitionIndex = 33161;

	class BOHAJCPBBJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOHAJCPBBJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI___C_CTOR_OFFSET))(this);
		}

		::BOHAJCPBBJI* __cctor_b__18_0()
		{
			return ((::BOHAJCPBBJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHAJCPBBJI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
