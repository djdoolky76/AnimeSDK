#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GDPHGHOPGOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C63A290)
#define GDPHGHOPGOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C63A2D0)
#define GDPHGHOPGOH___C___DISPATCHTITLES_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C63A2E0)

inline static constexpr unsigned int GDPHGHOPGOH___c_TypeDefinitionIndex = 36529;

	class GDPHGHOPGOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9C0);
		}

		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPHGHOPGOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPHGHOPGOH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __DispatchTitles_b__25_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDPHGHOPGOH___C___DISPATCHTITLES_B__25_0_OFFSET))(this, a1);
		}

	};
