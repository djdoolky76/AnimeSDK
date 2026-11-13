#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKCBOIFJKC;
namespace System { class Object; }

#define JLKCBOIFJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE79DF0)
#define JLKCBOIFJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE79E30)
#define JLKCBOIFJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE79E40)

inline static constexpr unsigned int JLKCBOIFJKC___c_TypeDefinitionIndex = 29798;

	class JLKCBOIFJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKCBOIFJKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC___C_CTOR_OFFSET))(this);
		}

		::JLKCBOIFJKC* __cctor_b__33_0()
		{
			return ((::JLKCBOIFJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
