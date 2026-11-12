#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPODAHBPFH;
namespace System { class Object; }

#define AOPODAHBPFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F92F6D0)
#define AOPODAHBPFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F92F710)
#define AOPODAHBPFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F92F720)

inline static constexpr unsigned int AOPODAHBPFH___c_TypeDefinitionIndex = 32600;

	class AOPODAHBPFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOPODAHBPFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH___C_CTOR_OFFSET))(this);
		}

		::AOPODAHBPFH* __cctor_b__28_0()
		{
			return ((::AOPODAHBPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPODAHBPFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
