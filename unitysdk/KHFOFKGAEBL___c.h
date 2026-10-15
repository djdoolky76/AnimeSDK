#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFOFKGAEBL;
namespace System { class Object; }

#define KHFOFKGAEBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E843A50)
#define KHFOFKGAEBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E843A90)
#define KHFOFKGAEBL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E843AA0)

inline static constexpr unsigned int KHFOFKGAEBL___c_TypeDefinitionIndex = 34091;

	class KHFOFKGAEBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHFOFKGAEBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFOFKGAEBL___C_CTOR_OFFSET))(this);
		}

		::KHFOFKGAEBL* __cctor_b__23_0()
		{
			return ((::KHFOFKGAEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFOFKGAEBL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
