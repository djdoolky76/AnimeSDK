#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLAFHGGFBJD;
namespace System { class Object; }

#define KLAFHGGFBJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E854940)
#define KLAFHGGFBJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E854980)
#define KLAFHGGFBJD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E854990)

inline static constexpr unsigned int KLAFHGGFBJD___c_TypeDefinitionIndex = 26273;

	class KLAFHGGFBJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLAFHGGFBJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD___C_CTOR_OFFSET))(this);
		}

		::KLAFHGGFBJD* __cctor_b__23_0()
		{
			return ((::KLAFHGGFBJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAFHGGFBJD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
