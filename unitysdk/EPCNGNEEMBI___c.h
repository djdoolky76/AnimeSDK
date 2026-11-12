#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPCNGNEEMBI;
namespace System { class Object; }

#define EPCNGNEEMBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5ECF60)
#define EPCNGNEEMBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5ECFA0)
#define EPCNGNEEMBI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5ECFB0)

inline static constexpr unsigned int EPCNGNEEMBI___c_TypeDefinitionIndex = 29245;

	class EPCNGNEEMBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPCNGNEEMBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI___C_CTOR_OFFSET))(this);
		}

		::EPCNGNEEMBI* __cctor_b__28_0()
		{
			return ((::EPCNGNEEMBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNGNEEMBI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
