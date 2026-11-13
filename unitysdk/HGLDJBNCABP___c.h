#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGLDJBNCABP;
namespace System { class Object; }

#define HGLDJBNCABP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAFEB40)
#define HGLDJBNCABP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFEB80)
#define HGLDJBNCABP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FAFEB90)

inline static constexpr unsigned int HGLDJBNCABP___c_TypeDefinitionIndex = 26304;

	class HGLDJBNCABP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGLDJBNCABP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP___C_CTOR_OFFSET))(this);
		}

		::HGLDJBNCABP* __cctor_b__33_0()
		{
			return ((::HGLDJBNCABP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
