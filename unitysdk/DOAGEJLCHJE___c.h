#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOAGEJLCHJE;
namespace System { class Object; }

#define DOAGEJLCHJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201ECD40)
#define DOAGEJLCHJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201ECD80)
#define DOAGEJLCHJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201ECD90)

inline static constexpr unsigned int DOAGEJLCHJE___c_TypeDefinitionIndex = 30909;

	class DOAGEJLCHJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOAGEJLCHJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE___C_CTOR_OFFSET))(this);
		}

		::DOAGEJLCHJE* __cctor_b__23_0()
		{
			return ((::DOAGEJLCHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAGEJLCHJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
