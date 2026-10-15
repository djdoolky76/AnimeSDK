#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPGNDMDNPEM;
namespace System { class Object; }

#define NPGNDMDNPEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EAF0)
#define NPGNDMDNPEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EB30)
#define NPGNDMDNPEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB6EB40)

inline static constexpr unsigned int NPGNDMDNPEM___c_TypeDefinitionIndex = 32093;

	class NPGNDMDNPEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C_CTOR_OFFSET))(this);
		}

		::NPGNDMDNPEM* __cctor_b__23_0()
		{
			return ((::NPGNDMDNPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGNDMDNPEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
