#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMOCDMHFEJG;
namespace System { class Object; }

#define JMOCDMHFEJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E762D70)
#define JMOCDMHFEJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E762DB0)
#define JMOCDMHFEJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E762DC0)

inline static constexpr unsigned int JMOCDMHFEJG___c_TypeDefinitionIndex = 28874;

	class JMOCDMHFEJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMOCDMHFEJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG___C_CTOR_OFFSET))(this);
		}

		::JMOCDMHFEJG* __cctor_b__23_0()
		{
			return ((::JMOCDMHFEJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOCDMHFEJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
