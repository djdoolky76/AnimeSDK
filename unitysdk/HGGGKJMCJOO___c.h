#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGGGKJMCJOO;
namespace System { class Object; }

#define HGGGKJMCJOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAFA940)
#define HGGGKJMCJOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFA980)
#define HGGGKJMCJOO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAFA990)

inline static constexpr unsigned int HGGGKJMCJOO___c_TypeDefinitionIndex = 30377;

	class HGGGKJMCJOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGGKJMCJOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO___C_CTOR_OFFSET))(this);
		}

		::HGGGKJMCJOO* __cctor_b__23_0()
		{
			return ((::HGGGKJMCJOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGGKJMCJOO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
