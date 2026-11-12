#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIMNGBAMMAM;
namespace System { class Object; }

#define PIMNGBAMMAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F220C40)
#define PIMNGBAMMAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F220C80)
#define PIMNGBAMMAM___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1F220C90)

inline static constexpr unsigned int PIMNGBAMMAM___c_TypeDefinitionIndex = 25547;

	class PIMNGBAMMAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIMNGBAMMAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMNGBAMMAM___C_CTOR_OFFSET))(this);
		}

		::PIMNGBAMMAM* __cctor_b__78_0()
		{
			return ((::PIMNGBAMMAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMNGBAMMAM___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
