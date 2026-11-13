#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLGDFGGOFH;
namespace System { class Object; }

#define ECLGDFGGOFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F37AE20)
#define ECLGDFGGOFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F37AE50)
#define ECLGDFGGOFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F37AE60)

inline static constexpr unsigned int ECLGDFGGOFH___c_TypeDefinitionIndex = 33266;

	class ECLGDFGGOFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLGDFGGOFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH___C_CTOR_OFFSET))(this);
		}

		::ECLGDFGGOFH* __cctor_b__28_0()
		{
			return ((::ECLGDFGGOFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
