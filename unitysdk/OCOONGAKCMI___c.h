#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOONGAKCMI;
namespace System { class Object; }

#define OCOONGAKCMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB4A520)
#define OCOONGAKCMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB4A560)
#define OCOONGAKCMI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FB4A570)

inline static constexpr unsigned int OCOONGAKCMI___c_TypeDefinitionIndex = 30464;

	class OCOONGAKCMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOONGAKCMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI___C_CTOR_OFFSET))(this);
		}

		::OCOONGAKCMI* __cctor_b__18_0()
		{
			return ((::OCOONGAKCMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOONGAKCMI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
