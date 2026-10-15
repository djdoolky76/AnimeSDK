#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJOLPAOHPBJ;
namespace System { class Object; }

#define LJOLPAOHPBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95CC50)
#define LJOLPAOHPBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95CC90)
#define LJOLPAOHPBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E95CCA0)

inline static constexpr unsigned int LJOLPAOHPBJ___c_TypeDefinitionIndex = 27414;

	class LJOLPAOHPBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOLPAOHPBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ___C_CTOR_OFFSET))(this);
		}

		::LJOLPAOHPBJ* __cctor_b__28_0()
		{
			return ((::LJOLPAOHPBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOLPAOHPBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
