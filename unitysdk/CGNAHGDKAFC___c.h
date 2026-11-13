#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNAHGDKAFC;
namespace System { class Object; }

#define CGNAHGDKAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD2DF30)
#define CGNAHGDKAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2DF70)
#define CGNAHGDKAFC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD2DF80)

inline static constexpr unsigned int CGNAHGDKAFC___c_TypeDefinitionIndex = 29769;

	class CGNAHGDKAFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCA70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNAHGDKAFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC___C_CTOR_OFFSET))(this);
		}

		::CGNAHGDKAFC* __cctor_b__33_0()
		{
			return ((::CGNAHGDKAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNAHGDKAFC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
