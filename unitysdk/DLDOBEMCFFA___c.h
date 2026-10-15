#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLDOBEMCFFA;
namespace System { class Object; }

#define DLDOBEMCFFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E1310)
#define DLDOBEMCFFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E1350)
#define DLDOBEMCFFA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1E1360)

inline static constexpr unsigned int DLDOBEMCFFA___c_TypeDefinitionIndex = 32622;

	class DLDOBEMCFFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLDOBEMCFFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA___C_CTOR_OFFSET))(this);
		}

		::DLDOBEMCFFA* __cctor_b__23_0()
		{
			return ((::DLDOBEMCFFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDOBEMCFFA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
