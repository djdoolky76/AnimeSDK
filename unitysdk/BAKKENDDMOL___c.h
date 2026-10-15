#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAKKENDDMOL;
namespace System { class Object; }

#define BAKKENDDMOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAAC0)
#define BAKKENDDMOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BAB00)
#define BAKKENDDMOL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7BAB10)

inline static constexpr unsigned int BAKKENDDMOL___c_TypeDefinitionIndex = 28018;

	class BAKKENDDMOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKKENDDMOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL___C_CTOR_OFFSET))(this);
		}

		::BAKKENDDMOL* __cctor_b__18_0()
		{
			return ((::BAKKENDDMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKKENDDMOL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
