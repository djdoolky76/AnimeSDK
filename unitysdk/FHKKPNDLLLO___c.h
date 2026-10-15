#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHKKPNDLLLO;
namespace System { class Object; }

#define FHKKPNDLLLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3617E0)
#define FHKKPNDLLLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E361820)
#define FHKKPNDLLLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E361830)

inline static constexpr unsigned int FHKKPNDLLLO___c_TypeDefinitionIndex = 25638;

	class FHKKPNDLLLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56DF0);
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
