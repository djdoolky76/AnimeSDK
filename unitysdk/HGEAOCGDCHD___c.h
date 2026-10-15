#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGEAOCGDCHD;
namespace System { class Object; }

#define HGEAOCGDCHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54A830)
#define HGEAOCGDCHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54A870)
#define HGEAOCGDCHD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E54A880)

inline static constexpr unsigned int HGEAOCGDCHD___c_TypeDefinitionIndex = 29130;

	class HGEAOCGDCHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEAOCGDCHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD___C_CTOR_OFFSET))(this);
		}

		::HGEAOCGDCHD* __cctor_b__28_0()
		{
			return ((::HGEAOCGDCHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEAOCGDCHD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
