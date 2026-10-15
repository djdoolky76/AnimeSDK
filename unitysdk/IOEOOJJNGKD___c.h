#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOEOOJJNGKD;
namespace System { class Object; }

#define IOEOOJJNGKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4320)
#define IOEOOJJNGKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4360)
#define IOEOOJJNGKD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E6D4370)

inline static constexpr unsigned int IOEOOJJNGKD___c_TypeDefinitionIndex = 27921;

	class IOEOOJJNGKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOEOOJJNGKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEOOJJNGKD___C_CTOR_OFFSET))(this);
		}

		::IOEOOJJNGKD* __cctor_b__53_0()
		{
			return ((::IOEOOJJNGKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEOOJJNGKD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
