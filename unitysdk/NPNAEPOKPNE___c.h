#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPNAEPOKPNE;
namespace System { class Object; }

#define NPNAEPOKPNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA0230)
#define NPNAEPOKPNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA0270)
#define NPNAEPOKPNE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBA0280)

inline static constexpr unsigned int NPNAEPOKPNE___c_TypeDefinitionIndex = 27215;

	class NPNAEPOKPNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPNAEPOKPNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE___C_CTOR_OFFSET))(this);
		}

		::NPNAEPOKPNE* __cctor_b__28_0()
		{
			return ((::NPNAEPOKPNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNAEPOKPNE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
