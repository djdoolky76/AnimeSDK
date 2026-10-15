#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHNAJFFFKB;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define EKJLLMDCNPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15500A10)
#define EKJLLMDCNPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15500A50)
#define EKJLLMDCNPO___C__GETDISPLAYDATAID_B__3_0_OFFSET UNITYSDK_OFFSET(0x15500A60)

inline static constexpr unsigned int EKJLLMDCNPO___c_TypeDefinitionIndex = 68276;

	class EKJLLMDCNPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35B10);
		}

		static ::System::Func_3<::OIHNAJFFFKB*, ::OIHNAJFFFKB*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_3<::OIHNAJFFFKB*, ::OIHNAJFFFKB*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKJLLMDCNPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJLLMDCNPO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDisplayDataID_b__3_0(::OIHNAJFFFKB* a1, ::OIHNAJFFFKB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OIHNAJFFFKB*, ::OIHNAJFFFKB*))((::PBYTE)hIl2Cpp + EKJLLMDCNPO___C__GETDISPLAYDATAID_B__3_0_OFFSET))(this, a1, a2);
		}

	};
