#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAEFMEJJIBI;
namespace System { class Object; }

#define BAEFMEJJIBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B29A0)
#define BAEFMEJJIBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B29D0)
#define BAEFMEJJIBI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7B29E0)

inline static constexpr unsigned int BAEFMEJJIBI___c_TypeDefinitionIndex = 31333;

	class BAEFMEJJIBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEFMEJJIBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI___C_CTOR_OFFSET))(this);
		}

		::BAEFMEJJIBI* __cctor_b__28_0()
		{
			return ((::BAEFMEJJIBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEFMEJJIBI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
