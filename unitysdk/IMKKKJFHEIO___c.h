#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMKKKJFHEIO;
namespace System { class Object; }

#define IMKKKJFHEIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68BF30)
#define IMKKKJFHEIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68BF70)
#define IMKKKJFHEIO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E68BF80)

inline static constexpr unsigned int IMKKKJFHEIO___c_TypeDefinitionIndex = 28499;

	class IMKKKJFHEIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMKKKJFHEIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKKJFHEIO___C_CTOR_OFFSET))(this);
		}

		::IMKKKJFHEIO* __cctor_b__33_0()
		{
			return ((::IMKKKJFHEIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKKKJFHEIO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
