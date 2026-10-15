#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKCBOIFJKC;
namespace System { class Object; }

#define JLKCBOIFJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77F5D0)
#define JLKCBOIFJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77F610)
#define JLKCBOIFJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E77F620)

inline static constexpr unsigned int JLKCBOIFJKC___c_TypeDefinitionIndex = 29157;

	class JLKCBOIFJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B9F0);
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
