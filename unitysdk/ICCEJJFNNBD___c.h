#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICCEJJFNNBD;
namespace System { class Object; }

#define ICCEJJFNNBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F26C0)
#define ICCEJJFNNBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F2700)
#define ICCEJJFNNBD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F2710)

inline static constexpr unsigned int ICCEJJFNNBD___c_TypeDefinitionIndex = 30286;

	class ICCEJJFNNBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x447F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICCEJJFNNBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD___C_CTOR_OFFSET))(this);
		}

		::ICCEJJFNNBD* __cctor_b__23_0()
		{
			return ((::ICCEJJFNNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCEJJFNNBD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
