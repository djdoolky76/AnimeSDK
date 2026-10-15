#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLNOEMIDHME;
namespace System { class Object; }

#define MLNOEMIDHME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA89980)
#define MLNOEMIDHME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA899C0)
#define MLNOEMIDHME___C___CCTOR_B__99_0_OFFSET UNITYSDK_OFFSET(0x1EA899D0)

	class MLNOEMIDHME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLNOEMIDHME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNOEMIDHME___C_CTOR_OFFSET))(this);
		}

		::MLNOEMIDHME* __cctor_b__99_0()
		{
			return ((::MLNOEMIDHME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNOEMIDHME___C___CCTOR_B__99_0_OFFSET))(this);
		}

	};
