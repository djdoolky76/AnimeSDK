#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMKFIDNBEBI;
namespace System { class Object; }

#define MMKFIDNBEBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F968AE0)
#define MMKFIDNBEBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F968B20)
#define MMKFIDNBEBI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F968B30)

inline static constexpr unsigned int MMKFIDNBEBI___c_TypeDefinitionIndex = 29926;

	class MMKFIDNBEBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMKFIDNBEBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI___C_CTOR_OFFSET))(this);
		}

		::MMKFIDNBEBI* __cctor_b__23_0()
		{
			return ((::MMKFIDNBEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKFIDNBEBI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
