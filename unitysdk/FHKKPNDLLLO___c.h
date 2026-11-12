#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHKKPNDLLLO;
namespace System { class Object; }

#define FHKKPNDLLLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F693C50)
#define FHKKPNDLLLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F693C90)
#define FHKKPNDLLLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F693CA0)

inline static constexpr unsigned int FHKKPNDLLLO___c_TypeDefinitionIndex = 26135;

	class FHKKPNDLLLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHKKPNDLLLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO___C_CTOR_OFFSET))(this);
		}

		::FHKKPNDLLLO* __cctor_b__23_0()
		{
			return ((::FHKKPNDLLLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKKPNDLLLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
