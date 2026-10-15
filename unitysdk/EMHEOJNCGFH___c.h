#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHEOJNCGFH;
namespace System { class Object; }

#define EMHEOJNCGFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2910)
#define EMHEOJNCGFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2950)
#define EMHEOJNCGFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2E2960)

	class EMHEOJNCGFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHEOJNCGFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH___C_CTOR_OFFSET))(this);
		}

		::EMHEOJNCGFH* __cctor_b__28_0()
		{
			return ((::EMHEOJNCGFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHEOJNCGFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
