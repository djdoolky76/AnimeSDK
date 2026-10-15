#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOAGGFCDAL;
namespace System { class Object; }

#define CNOAGGFCDAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10D770)
#define CNOAGGFCDAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10D7B0)
#define CNOAGGFCDAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E10D7C0)

inline static constexpr unsigned int CNOAGGFCDAL___c_TypeDefinitionIndex = 27712;

	class CNOAGGFCDAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOAGGFCDAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL___C_CTOR_OFFSET))(this);
		}

		::CNOAGGFCDAL* __cctor_b__18_0()
		{
			return ((::CNOAGGFCDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
