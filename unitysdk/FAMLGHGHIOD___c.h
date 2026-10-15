#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMLGHGHIOD;
namespace System { class Object; }

#define FAMLGHGHIOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32A1F0)
#define FAMLGHGHIOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A230)
#define FAMLGHGHIOD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E32A240)

	class FAMLGHGHIOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C_CTOR_OFFSET))(this);
		}

		::FAMLGHGHIOD* __cctor_b__33_0()
		{
			return ((::FAMLGHGHIOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
