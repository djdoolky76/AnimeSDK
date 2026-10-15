#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBKEMKDKLO;
namespace System { class Object; }

#define MFBKEMKDKLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E7E40)
#define MFBKEMKDKLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E7E70)
#define MFBKEMKDKLO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9E7E80)

inline static constexpr unsigned int MFBKEMKDKLO___c_TypeDefinitionIndex = 28216;

	class MFBKEMKDKLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E830);
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
