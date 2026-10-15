#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJBNPPDIDDC;
namespace System { class Object; }

#define PJBNPPDIDDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF73F50)
#define PJBNPPDIDDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF73F90)
#define PJBNPPDIDDC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF73FA0)

inline static constexpr unsigned int PJBNPPDIDDC___c_TypeDefinitionIndex = 29102;

	class PJBNPPDIDDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBNPPDIDDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC___C_CTOR_OFFSET))(this);
		}

		::PJBNPPDIDDC* __cctor_b__43_0()
		{
			return ((::PJBNPPDIDDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
