#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEJLKCJOAEM;
namespace System { class Object; }

#define IEJLKCJOAEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63C540)
#define IEJLKCJOAEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63C580)
#define IEJLKCJOAEM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E63C590)

	class IEJLKCJOAEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJLKCJOAEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM___C_CTOR_OFFSET))(this);
		}

		::IEJLKCJOAEM* __cctor_b__18_0()
		{
			return ((::IEJLKCJOAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
