#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPJGBCCGGI;
namespace System { class Object; }

#define NCPJGBCCGGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5CF0)
#define NCPJGBCCGGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB5D30)
#define NCPJGBCCGGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB5D40)

inline static constexpr unsigned int NCPJGBCCGGI___c_TypeDefinitionIndex = 31035;

	class NCPJGBCCGGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C_CTOR_OFFSET))(this);
		}

		::NCPJGBCCGGI* __cctor_b__23_0()
		{
			return ((::NCPJGBCCGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPJGBCCGGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
