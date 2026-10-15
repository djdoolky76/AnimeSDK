#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAIMCDOLBHO;
namespace System { class Object; }

#define KAIMCDOLBHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7E20)
#define KAIMCDOLBHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7E60)
#define KAIMCDOLBHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7B7E70)

inline static constexpr unsigned int KAIMCDOLBHO___c_TypeDefinitionIndex = 27386;

	class KAIMCDOLBHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAIMCDOLBHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO___C_CTOR_OFFSET))(this);
		}

		::KAIMCDOLBHO* __cctor_b__23_0()
		{
			return ((::KAIMCDOLBHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
