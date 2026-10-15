#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBKHHILFFOF;
namespace System { class Object; }

#define KBKHHILFFOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0740)
#define KBKHHILFFOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F0780)
#define KBKHHILFFOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7F0790)

inline static constexpr unsigned int KBKHHILFFOF___c_TypeDefinitionIndex = 26243;

	class KBKHHILFFOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBKHHILFFOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF___C_CTOR_OFFSET))(this);
		}

		::KBKHHILFFOF* __cctor_b__38_0()
		{
			return ((::KBKHHILFFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
