#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAECPMJAIIK;
namespace System { class Object; }

#define LAECPMJAIIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20385F50)
#define LAECPMJAIIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20385F90)
#define LAECPMJAIIK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20385FA0)

inline static constexpr unsigned int LAECPMJAIIK___c_TypeDefinitionIndex = 27632;

	class LAECPMJAIIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAECPMJAIIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK___C_CTOR_OFFSET))(this);
		}

		::LAECPMJAIIK* __cctor_b__23_0()
		{
			return ((::LAECPMJAIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECPMJAIIK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
