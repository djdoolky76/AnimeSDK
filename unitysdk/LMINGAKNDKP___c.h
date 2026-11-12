#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMINGAKNDKP;
namespace System { class Object; }

#define LMINGAKNDKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCCAD40)
#define LMINGAKNDKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCCAD80)
#define LMINGAKNDKP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCCAD90)

inline static constexpr unsigned int LMINGAKNDKP___c_TypeDefinitionIndex = 31156;

	class LMINGAKNDKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x404C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMINGAKNDKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP___C_CTOR_OFFSET))(this);
		}

		::LMINGAKNDKP* __cctor_b__33_0()
		{
			return ((::LMINGAKNDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMINGAKNDKP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
