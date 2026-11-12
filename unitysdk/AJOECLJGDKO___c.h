#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPFHDFJPECH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AJOECLJGDKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12DA76B0)
#define AJOECLJGDKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12DA76F0)
#define AJOECLJGDKO___C___CTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x12DA7700)

inline static constexpr unsigned int AJOECLJGDKO___c_TypeDefinitionIndex = 82176;

	class AJOECLJGDKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AAF0);
		}

		static ::System::Func_2<::EPFHDFJPECH*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::EPFHDFJPECH*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJOECLJGDKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOECLJGDKO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__13_0(::EPFHDFJPECH* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EPFHDFJPECH*))((::PBYTE)hIl2Cpp + AJOECLJGDKO___C___CTOR_B__13_0_OFFSET))(this, a1);
		}

	};
