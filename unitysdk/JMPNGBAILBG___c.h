#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMPNGBAILBG;
namespace System { class Object; }

#define JMPNGBAILBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7648B0)
#define JMPNGBAILBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7648F0)
#define JMPNGBAILBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E764900)

inline static constexpr unsigned int JMPNGBAILBG___c_TypeDefinitionIndex = 32929;

	class JMPNGBAILBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x655E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPNGBAILBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG___C_CTOR_OFFSET))(this);
		}

		::JMPNGBAILBG* __cctor_b__23_0()
		{
			return ((::JMPNGBAILBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPNGBAILBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
