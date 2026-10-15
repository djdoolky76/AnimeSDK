#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IGEHGPIAFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1640B000)
#define IGEHGPIAFNF_DJEGIFFHCBJ_OFFSET UNITYSDK_OFFSET(0x1640AB30)
#define IGEHGPIAFNF_JCHCJACPHOD_OFFSET UNITYSDK_OFFSET(0x1640A710)

	class IGEHGPIAFNF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEHGPIAFNF_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* JCHCJACPHOD(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGEHGPIAFNF_JCHCJACPHOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJEGIFFHCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEHGPIAFNF_DJEGIFFHCBJ_OFFSET))(this);
		}

	};
