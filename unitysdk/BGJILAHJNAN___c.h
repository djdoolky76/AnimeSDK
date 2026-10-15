#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJILAHJNAN;
namespace System { class Object; }

#define BGJILAHJNAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7AA40)
#define BGJILAHJNAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7AA80)
#define BGJILAHJNAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA7AA90)

	class BGJILAHJNAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJILAHJNAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN___C_CTOR_OFFSET))(this);
		}

		::BGJILAHJNAN* __cctor_b__28_0()
		{
			return ((::BGJILAHJNAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJILAHJNAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
