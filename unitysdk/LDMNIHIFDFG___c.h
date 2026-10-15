#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDMNIHIFDFG;
namespace System { class Object; }

#define LDMNIHIFDFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D04A0)
#define LDMNIHIFDFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D04E0)
#define LDMNIHIFDFG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8D04F0)

inline static constexpr unsigned int LDMNIHIFDFG___c_TypeDefinitionIndex = 29150;

	class LDMNIHIFDFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C_CTOR_OFFSET))(this);
		}

		::LDMNIHIFDFG* __cctor_b__23_0()
		{
			return ((::LDMNIHIFDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMNIHIFDFG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
