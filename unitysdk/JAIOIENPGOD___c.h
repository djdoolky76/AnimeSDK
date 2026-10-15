#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIOIENPGOD;
namespace System { class Object; }

#define JAIOIENPGOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1410)
#define JAIOIENPGOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1450)
#define JAIOIENPGOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6C1460)

inline static constexpr unsigned int JAIOIENPGOD___c_TypeDefinitionIndex = 34350;

	class JAIOIENPGOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAIOIENPGOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIOIENPGOD___C_CTOR_OFFSET))(this);
		}

		::JAIOIENPGOD* __cctor_b__23_0()
		{
			return ((::JAIOIENPGOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIOIENPGOD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
