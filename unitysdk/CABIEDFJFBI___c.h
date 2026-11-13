#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABIEDFJFBI;
namespace System { class Object; }

#define CABIEDFJFBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20347A10)
#define CABIEDFJFBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20347A50)
#define CABIEDFJFBI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20347A60)

inline static constexpr unsigned int CABIEDFJFBI___c_TypeDefinitionIndex = 29291;

	class CABIEDFJFBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABIEDFJFBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABIEDFJFBI___C_CTOR_OFFSET))(this);
		}

		::CABIEDFJFBI* __cctor_b__38_0()
		{
			return ((::CABIEDFJFBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABIEDFJFBI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
