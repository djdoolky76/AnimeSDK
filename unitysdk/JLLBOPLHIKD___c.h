#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLLBOPLHIKD;
namespace System { class Object; }

#define JLLBOPLHIKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E780EF0)
#define JLLBOPLHIKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E780F30)
#define JLLBOPLHIKD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E780F40)

inline static constexpr unsigned int JLLBOPLHIKD___c_TypeDefinitionIndex = 26039;

	class JLLBOPLHIKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLLBOPLHIKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD___C_CTOR_OFFSET))(this);
		}

		::JLLBOPLHIKD* __cctor_b__28_0()
		{
			return ((::JLLBOPLHIKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLBOPLHIKD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
