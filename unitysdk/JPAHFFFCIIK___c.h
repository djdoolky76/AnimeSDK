#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPAHFFFCIIK;
namespace System { class Object; }

#define JPAHFFFCIIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CCB50)
#define JPAHFFFCIIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CCB90)
#define JPAHFFFCIIK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E7CCBA0)

inline static constexpr unsigned int JPAHFFFCIIK___c_TypeDefinitionIndex = 25091;

	class JPAHFFFCIIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPAHFFFCIIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAHFFFCIIK___C_CTOR_OFFSET))(this);
		}

		::JPAHFFFCIIK* __cctor_b__58_0()
		{
			return ((::JPAHFFFCIIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAHFFFCIIK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
