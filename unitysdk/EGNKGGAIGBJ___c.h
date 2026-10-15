#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGNKGGAIGBJ;
namespace System { class Object; }

#define EGNKGGAIGBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26DBA0)
#define EGNKGGAIGBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26DBD0)
#define EGNKGGAIGBJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E26DBE0)

inline static constexpr unsigned int EGNKGGAIGBJ___c_TypeDefinitionIndex = 32447;

	class EGNKGGAIGBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGNKGGAIGBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ___C_CTOR_OFFSET))(this);
		}

		::EGNKGGAIGBJ* __cctor_b__18_0()
		{
			return ((::EGNKGGAIGBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNKGGAIGBJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
