#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCNMJGGDEFO;
namespace System { class Object; }

#define FCNMJGGDEFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34ED70)
#define FCNMJGGDEFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34EDB0)
#define FCNMJGGDEFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E34EDC0)

	class FCNMJGGDEFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCNMJGGDEFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO___C_CTOR_OFFSET))(this);
		}

		::FCNMJGGDEFO* __cctor_b__28_0()
		{
			return ((::FCNMJGGDEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
