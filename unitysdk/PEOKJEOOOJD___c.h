#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEOKJEOOOJD;
namespace System { class Object; }

#define PEOKJEOOOJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1FAA0)
#define PEOKJEOOOJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1FAE0)
#define PEOKJEOOOJD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DF1FAF0)

	class PEOKJEOOOJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C_CTOR_OFFSET))(this);
		}

		::PEOKJEOOOJD* __cctor_b__48_0()
		{
			return ((::PEOKJEOOOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOKJEOOOJD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
