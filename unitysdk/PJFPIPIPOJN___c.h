#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFPIPIPOJN;
namespace System { class Object; }

#define PJFPIPIPOJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4C1B0)
#define PJFPIPIPOJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4C1F0)
#define PJFPIPIPOJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF4C200)

inline static constexpr unsigned int PJFPIPIPOJN___c_TypeDefinitionIndex = 32943;

	class PJFPIPIPOJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x366F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFPIPIPOJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN___C_CTOR_OFFSET))(this);
		}

		::PJFPIPIPOJN* __cctor_b__23_0()
		{
			return ((::PJFPIPIPOJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFPIPIPOJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
