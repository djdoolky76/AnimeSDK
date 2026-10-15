#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGJHBCBIONE;
namespace System { class Object; }

#define HGJHBCBIONE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54EB40)
#define HGJHBCBIONE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54EB80)
#define HGJHBCBIONE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E54EB90)

inline static constexpr unsigned int HGJHBCBIONE___c_TypeDefinitionIndex = 31809;

	class HGJHBCBIONE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGJHBCBIONE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE___C_CTOR_OFFSET))(this);
		}

		::HGJHBCBIONE* __cctor_b__28_0()
		{
			return ((::HGJHBCBIONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
