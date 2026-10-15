#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGBBCMBMOLI;
namespace System { class Object; }

#define NGBBCMBMOLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0ACA0)
#define NGBBCMBMOLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0ACE0)
#define NGBBCMBMOLI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB0ACF0)

inline static constexpr unsigned int NGBBCMBMOLI___c_TypeDefinitionIndex = 25712;

	class NGBBCMBMOLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGBBCMBMOLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBBCMBMOLI___C_CTOR_OFFSET))(this);
		}

		::NGBBCMBMOLI* __cctor_b__43_0()
		{
			return ((::NGBBCMBMOLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBBCMBMOLI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
