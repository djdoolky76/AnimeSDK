#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FENFEHCCOCA;
namespace System { class Object; }

#define FENFEHCCOCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33BF80)
#define FENFEHCCOCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33BFC0)
#define FENFEHCCOCA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E33BFD0)

inline static constexpr unsigned int FENFEHCCOCA___c_TypeDefinitionIndex = 32931;

	class FENFEHCCOCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENFEHCCOCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA___C_CTOR_OFFSET))(this);
		}

		::FENFEHCCOCA* __cctor_b__18_0()
		{
			return ((::FENFEHCCOCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENFEHCCOCA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
