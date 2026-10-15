#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNPDAHNCAMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDF1D0)
#define NNPDAHNCAMK_EFIAJANIJLD_OFFSET UNITYSDK_OFFSET(0xBCDEFE0)
#define NNPDAHNCAMK_HPBCOLDFMNI_OFFSET UNITYSDK_OFFSET(0xBCDEEC0)
#define NNPDAHNCAMK_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xBCDF080)

	class NNPDAHNCAMK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AHOOLDFODPL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPDAHNCAMK_CTOR_OFFSET))(this);
		}

		::System::Void HPBCOLDFMNI(::System::Action* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + NNPDAHNCAMK_HPBCOLDFMNI_OFFSET))(this, a1, a2);
		}

		::System::Void EFIAJANIJLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPDAHNCAMK_EFIAJANIJLD_OFFSET))(this);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPDAHNCAMK_MBABPIHGAJN_OFFSET))(this);
		}

	};
