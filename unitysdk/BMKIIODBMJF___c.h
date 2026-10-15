#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMKIIODBMJF;
namespace System { class Object; }

#define BMKIIODBMJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFDD00)
#define BMKIIODBMJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFDD30)
#define BMKIIODBMJF___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DFFDD40)

inline static constexpr unsigned int BMKIIODBMJF___c_TypeDefinitionIndex = 25550;

	class BMKIIODBMJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKIIODBMJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKIIODBMJF___C_CTOR_OFFSET))(this);
		}

		::BMKIIODBMJF* __cctor_b__58_0()
		{
			return ((::BMKIIODBMJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKIIODBMJF___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
