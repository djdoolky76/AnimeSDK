#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKPGMKDKMG;
namespace System { class Object; }

#define CPKPGMKDKMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F41A330)
#define CPKPGMKDKMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41A370)
#define CPKPGMKDKMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F41A380)

inline static constexpr unsigned int CPKPGMKDKMG___c_TypeDefinitionIndex = 35426;

	class CPKPGMKDKMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKPGMKDKMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG___C_CTOR_OFFSET))(this);
		}

		::CPKPGMKDKMG* __cctor_b__23_0()
		{
			return ((::CPKPGMKDKMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
