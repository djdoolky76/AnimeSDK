#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLBKIAFNLOE;
namespace System { class Object; }

#define HLBKIAFNLOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8B59B0)
#define HLBKIAFNLOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8B59F0)
#define HLBKIAFNLOE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F8B5A00)

inline static constexpr unsigned int HLBKIAFNLOE___c_TypeDefinitionIndex = 26242;

	class HLBKIAFNLOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x378B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBKIAFNLOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE___C_CTOR_OFFSET))(this);
		}

		::HLBKIAFNLOE* __cctor_b__38_0()
		{
			return ((::HLBKIAFNLOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKIAFNLOE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
