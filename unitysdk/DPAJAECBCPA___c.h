#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMCBKMBDILL.h"
#include "unitysdk/System/Object.h"
class DPAJAECBCPA;
namespace System { class Object; }

#define DPAJAECBCPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC390)
#define DPAJAECBCPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DC3D0)
#define DPAJAECBCPA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1DC3E0)
#define DPAJAECBCPA___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x1E1DC410)
#define DPAJAECBCPA___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x1E1DC420)

inline static constexpr unsigned int DPAJAECBCPA___c_TypeDefinitionIndex = 30317;

	class DPAJAECBCPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAJAECBCPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA___C_CTOR_OFFSET))(this);
		}

		::DPAJAECBCPA* __cctor_b__33_0()
		{
			return ((::DPAJAECBCPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAJAECBCPA___C___CCTOR_B__33_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__33_1(::NMCBKMBDILL a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NMCBKMBDILL))((::PBYTE)hIl2Cpp + DPAJAECBCPA___C___CCTOR_B__33_1_OFFSET))(this, a1);
		}

		::NMCBKMBDILL __cctor_b__33_2(::System::Int32 a1)
		{
			return ((::NMCBKMBDILL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPAJAECBCPA___C___CCTOR_B__33_2_OFFSET))(this, a1);
		}

	};
