#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEABJAOBML;
namespace System { class Object; }

#define AMEABJAOBML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20028460)
#define AMEABJAOBML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200284A0)
#define AMEABJAOBML___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x200284B0)

inline static constexpr unsigned int AMEABJAOBML___c_TypeDefinitionIndex = 27110;

	class AMEABJAOBML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x396C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEABJAOBML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML___C_CTOR_OFFSET))(this);
		}

		::AMEABJAOBML* __cctor_b__33_0()
		{
			return ((::AMEABJAOBML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
