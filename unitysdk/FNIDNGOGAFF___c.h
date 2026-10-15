#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNIDNGOGAFF;
namespace System { class Object; }

#define FNIDNGOGAFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C3770)
#define FNIDNGOGAFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C37A0)
#define FNIDNGOGAFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C37B0)

inline static constexpr unsigned int FNIDNGOGAFF___c_TypeDefinitionIndex = 30278;

	class FNIDNGOGAFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C_CTOR_OFFSET))(this);
		}

		::FNIDNGOGAFF* __cctor_b__28_0()
		{
			return ((::FNIDNGOGAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
