#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPPENGOOHGN;
namespace System { class Object; }

#define CPPENGOOHGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E147500)
#define CPPENGOOHGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E147540)
#define CPPENGOOHGN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E147550)

inline static constexpr unsigned int CPPENGOOHGN___c_TypeDefinitionIndex = 33492;

	class CPPENGOOHGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x232C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPENGOOHGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN___C_CTOR_OFFSET))(this);
		}

		::CPPENGOOHGN* __cctor_b__23_0()
		{
			return ((::CPPENGOOHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPENGOOHGN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
