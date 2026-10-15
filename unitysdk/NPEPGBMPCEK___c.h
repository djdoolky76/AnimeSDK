#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEPGBMPCEK;
namespace System { class Object; }

#define NPEPGBMPCEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB97B00)
#define NPEPGBMPCEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB97B40)
#define NPEPGBMPCEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB97B50)

inline static constexpr unsigned int NPEPGBMPCEK___c_TypeDefinitionIndex = 34454;

	class NPEPGBMPCEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEPGBMPCEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK___C_CTOR_OFFSET))(this);
		}

		::NPEPGBMPCEK* __cctor_b__23_0()
		{
			return ((::NPEPGBMPCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEPGBMPCEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
