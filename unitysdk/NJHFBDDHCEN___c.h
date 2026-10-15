#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHFBDDHCEN;
namespace System { class Object; }

#define NJHFBDDHCEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3FFB0)
#define NJHFBDDHCEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3FFF0)
#define NJHFBDDHCEN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB40000)

inline static constexpr unsigned int NJHFBDDHCEN___c_TypeDefinitionIndex = 31628;

	class NJHFBDDHCEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHFBDDHCEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN___C_CTOR_OFFSET))(this);
		}

		::NJHFBDDHCEN* __cctor_b__33_0()
		{
			return ((::NJHFBDDHCEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHFBDDHCEN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
