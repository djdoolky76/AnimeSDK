#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHCNMGNAIBG;
namespace System { class Object; }

#define HHCNMGNAIBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E586A70)
#define HHCNMGNAIBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E586AA0)
#define HHCNMGNAIBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E586AB0)

inline static constexpr unsigned int HHCNMGNAIBG___c_TypeDefinitionIndex = 25914;

	class HHCNMGNAIBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHCNMGNAIBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG___C_CTOR_OFFSET))(this);
		}

		::HHCNMGNAIBG* __cctor_b__23_0()
		{
			return ((::HHCNMGNAIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCNMGNAIBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
