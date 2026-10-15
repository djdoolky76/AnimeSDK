#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
namespace System { class Object; }

#define APAMFCKFHLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E644E50)
#define APAMFCKFHLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E644E80)
#define APAMFCKFHLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E644E90)

inline static constexpr unsigned int APAMFCKFHLL___c_TypeDefinitionIndex = 27828;

	class APAMFCKFHLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APAMFCKFHLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL___C_CTOR_OFFSET))(this);
		}

		::APAMFCKFHLL* __cctor_b__28_0()
		{
			return ((::APAMFCKFHLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + APAMFCKFHLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
