#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEBMHIBJPL;
namespace System { class Object; }

#define FJEBMHIBJPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E372B00)
#define FJEBMHIBJPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E372B40)
#define FJEBMHIBJPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E372B50)

inline static constexpr unsigned int FJEBMHIBJPL___c_TypeDefinitionIndex = 28079;

	class FJEBMHIBJPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEBMHIBJPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL___C_CTOR_OFFSET))(this);
		}

		::FJEBMHIBJPL* __cctor_b__28_0()
		{
			return ((::FJEBMHIBJPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEBMHIBJPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
