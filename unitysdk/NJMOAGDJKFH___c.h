#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMOAGDJKFH;
namespace System { class Object; }

#define NJMOAGDJKFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4F8B0)
#define NJMOAGDJKFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4F8E0)
#define NJMOAGDJKFH___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1EB4F8F0)

inline static constexpr unsigned int NJMOAGDJKFH___c_TypeDefinitionIndex = 33542;

	class NJMOAGDJKFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x659B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMOAGDJKFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMOAGDJKFH___C_CTOR_OFFSET))(this);
		}

		::NJMOAGDJKFH* __cctor_b__83_0()
		{
			return ((::NJMOAGDJKFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMOAGDJKFH___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
