#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBMEIIMMJD;
namespace System { class Object; }

#define FDBMEIIMMJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6399E0)
#define FDBMEIIMMJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F639A20)
#define FDBMEIIMMJD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F639A30)

inline static constexpr unsigned int FDBMEIIMMJD___c_TypeDefinitionIndex = 30408;

	class FDBMEIIMMJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x594B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDBMEIIMMJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBMEIIMMJD___C_CTOR_OFFSET))(this);
		}

		::FDBMEIIMMJD* __cctor_b__28_0()
		{
			return ((::FDBMEIIMMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBMEIIMMJD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
