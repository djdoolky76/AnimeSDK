#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIPOBGFFNKD;
namespace System { class Object; }

#define FIPOBGFFNKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A4560)
#define FIPOBGFFNKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A45A0)
#define FIPOBGFFNKD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6A45B0)

inline static constexpr unsigned int FIPOBGFFNKD___c_TypeDefinitionIndex = 28146;

	class FIPOBGFFNKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIPOBGFFNKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPOBGFFNKD___C_CTOR_OFFSET))(this);
		}

		::FIPOBGFFNKD* __cctor_b__33_0()
		{
			return ((::FIPOBGFFNKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPOBGFFNKD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
