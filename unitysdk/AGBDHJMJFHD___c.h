#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBDHJMJFHD;
namespace System { class Object; }

#define AGBDHJMJFHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E55E0)
#define AGBDHJMJFHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E5620)
#define AGBDHJMJFHD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F3E5630)

inline static constexpr unsigned int AGBDHJMJFHD___c_TypeDefinitionIndex = 29440;

	class AGBDHJMJFHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBDHJMJFHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD___C_CTOR_OFFSET))(this);
		}

		::AGBDHJMJFHD* __cctor_b__23_0()
		{
			return ((::AGBDHJMJFHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
