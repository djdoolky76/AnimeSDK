#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADOONPCDLO;
namespace System { class Object; }

#define BADOONPCDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E783AD0)
#define BADOONPCDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E783B10)
#define BADOONPCDLO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E783B20)

inline static constexpr unsigned int BADOONPCDLO___c_TypeDefinitionIndex = 31472;

	class BADOONPCDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADOONPCDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO___C_CTOR_OFFSET))(this);
		}

		::BADOONPCDLO* __cctor_b__33_0()
		{
			return ((::BADOONPCDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
