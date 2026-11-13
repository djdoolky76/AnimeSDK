#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJDOHAHIOF;
namespace System { class Object; }

#define OMJDOHAHIOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1D910)
#define OMJDOHAHIOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1D950)
#define OMJDOHAHIOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC1D960)

inline static constexpr unsigned int OMJDOHAHIOF___c_TypeDefinitionIndex = 31354;

	class OMJDOHAHIOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x233A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C_CTOR_OFFSET))(this);
		}

		::OMJDOHAHIOF* __cctor_b__23_0()
		{
			return ((::OMJDOHAHIOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJDOHAHIOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
