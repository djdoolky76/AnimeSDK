#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IALCLGBDMBL;
namespace System { class Object; }

#define IALCLGBDMBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB730)
#define IALCLGBDMBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DB770)
#define IALCLGBDMBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5DB780)

inline static constexpr unsigned int IALCLGBDMBL___c_TypeDefinitionIndex = 27662;

	class IALCLGBDMBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IALCLGBDMBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL___C_CTOR_OFFSET))(this);
		}

		::IALCLGBDMBL* __cctor_b__28_0()
		{
			return ((::IALCLGBDMBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALCLGBDMBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
