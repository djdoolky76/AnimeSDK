#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANMDOACPHMN;
namespace System { class Object; }

#define ANMDOACPHMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E663FA0)
#define ANMDOACPHMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E663FE0)
#define ANMDOACPHMN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E663FF0)

	class ANMDOACPHMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANMDOACPHMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN___C_CTOR_OFFSET))(this);
		}

		::ANMDOACPHMN* __cctor_b__28_0()
		{
			return ((::ANMDOACPHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANMDOACPHMN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
