#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEBMHIBJPL;
namespace System { class Object; }

#define FJEBMHIBJPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5A20)
#define FJEBMHIBJPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5A60)
#define FJEBMHIBJPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6A5A70)

inline static constexpr unsigned int FJEBMHIBJPL___c_TypeDefinitionIndex = 28669;

	class FJEBMHIBJPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x465C0);
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
