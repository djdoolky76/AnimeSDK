#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBKEMKDKLO;
namespace System { class Object; }

#define MFBKEMKDKLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD60120)
#define MFBKEMKDKLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD60150)
#define MFBKEMKDKLO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FD60160)

inline static constexpr unsigned int MFBKEMKDKLO___c_TypeDefinitionIndex = 28806;

	class MFBKEMKDKLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBKEMKDKLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO___C_CTOR_OFFSET))(this);
		}

		::MFBKEMKDKLO* __cctor_b__18_0()
		{
			return ((::MFBKEMKDKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKEMKDKLO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
