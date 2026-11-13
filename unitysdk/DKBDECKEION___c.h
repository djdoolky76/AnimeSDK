#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKBDECKEION;
namespace System { class Object; }

#define DKBDECKEION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB3AB50)
#define DKBDECKEION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3AB90)
#define DKBDECKEION___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FB3ABA0)

inline static constexpr unsigned int DKBDECKEION___c_TypeDefinitionIndex = 34963;

	class DKBDECKEION___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKBDECKEION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION___C_CTOR_OFFSET))(this);
		}

		::DKBDECKEION* __cctor_b__38_0()
		{
			return ((::DKBDECKEION*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBDECKEION___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
