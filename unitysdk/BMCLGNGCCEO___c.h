#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCLGNGCCEO;
namespace System { class Object; }

#define BMCLGNGCCEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF3100)
#define BMCLGNGCCEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF3140)
#define BMCLGNGCCEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFF3150)

inline static constexpr unsigned int BMCLGNGCCEO___c_TypeDefinitionIndex = 26813;

	class BMCLGNGCCEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C_CTOR_OFFSET))(this);
		}

		::BMCLGNGCCEO* __cctor_b__23_0()
		{
			return ((::BMCLGNGCCEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCLGNGCCEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
