#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILKADBIDKAA;
namespace System { class Object; }

#define ILKADBIDKAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E682A40)
#define ILKADBIDKAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E682A70)
#define ILKADBIDKAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E682A80)

inline static constexpr unsigned int ILKADBIDKAA___c_TypeDefinitionIndex = 34524;

	class ILKADBIDKAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILKADBIDKAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA___C_CTOR_OFFSET))(this);
		}

		::ILKADBIDKAA* __cctor_b__28_0()
		{
			return ((::ILKADBIDKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKADBIDKAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
