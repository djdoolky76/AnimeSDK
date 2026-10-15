#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJKACFOFFAH;
namespace System { class Object; }

#define DJKACFOFFAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CDA30)
#define DJKACFOFFAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CDA70)
#define DJKACFOFFAH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1CDA80)

inline static constexpr unsigned int DJKACFOFFAH___c_TypeDefinitionIndex = 34823;

	class DJKACFOFFAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJKACFOFFAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH___C_CTOR_OFFSET))(this);
		}

		::DJKACFOFFAH* __cctor_b__38_0()
		{
			return ((::DJKACFOFFAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKACFOFFAH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
