#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHDGNBKBNDB;
namespace System { class Object; }

#define NHDGNBKBNDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB19AA0)
#define NHDGNBKBNDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB19AD0)
#define NHDGNBKBNDB___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EB19AE0)

	class NHDGNBKBNDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDGNBKBNDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDGNBKBNDB___C_CTOR_OFFSET))(this);
		}

		::NHDGNBKBNDB* __cctor_b__53_0()
		{
			return ((::NHDGNBKBNDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDGNBKBNDB___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
