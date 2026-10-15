#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLBNCPOFNPB;
namespace System { class Object; }

#define CLBNCPOFNPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C64B0)
#define CLBNCPOFNPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C64F0)
#define CLBNCPOFNPB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0C6500)

inline static constexpr unsigned int CLBNCPOFNPB___c_TypeDefinitionIndex = 28000;

	class CLBNCPOFNPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLBNCPOFNPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB___C_CTOR_OFFSET))(this);
		}

		::CLBNCPOFNPB* __cctor_b__33_0()
		{
			return ((::CLBNCPOFNPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
