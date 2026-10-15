#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFNBOEMFIJD;
namespace System { class Object; }

#define JFNBOEMFIJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E731F00)
#define JFNBOEMFIJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E731F40)
#define JFNBOEMFIJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E731F50)

inline static constexpr unsigned int JFNBOEMFIJD___c_TypeDefinitionIndex = 25794;

	class JFNBOEMFIJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x601D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFNBOEMFIJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD___C_CTOR_OFFSET))(this);
		}

		::JFNBOEMFIJD* __cctor_b__23_0()
		{
			return ((::JFNBOEMFIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNBOEMFIJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
