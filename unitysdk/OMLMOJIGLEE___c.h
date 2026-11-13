#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMLMOJIGLEE;
namespace System { class Object; }

#define OMLMOJIGLEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC21ED0)
#define OMLMOJIGLEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC21F10)
#define OMLMOJIGLEE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC21F20)

inline static constexpr unsigned int OMLMOJIGLEE___c_TypeDefinitionIndex = 33880;

	class OMLMOJIGLEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x237D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMLMOJIGLEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE___C_CTOR_OFFSET))(this);
		}

		::OMLMOJIGLEE* __cctor_b__43_0()
		{
			return ((::OMLMOJIGLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLMOJIGLEE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
