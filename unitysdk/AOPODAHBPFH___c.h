#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPODAHBPFH;
namespace System { class Object; }

#define AOPODAHBPFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6445B0)
#define AOPODAHBPFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6445F0)
#define AOPODAHBPFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E644600)

inline static constexpr unsigned int AOPODAHBPFH___c_TypeDefinitionIndex = 31687;

	class AOPODAHBPFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOPODAHBPFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH___C_CTOR_OFFSET))(this);
		}

		::AOPODAHBPFH* __cctor_b__28_0()
		{
			return ((::AOPODAHBPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
