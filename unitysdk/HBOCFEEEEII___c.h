#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOCFEEEEII;
namespace System { class Object; }

#define HBOCFEEEEII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52FFD0)
#define HBOCFEEEEII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E530010)
#define HBOCFEEEEII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E530020)

inline static constexpr unsigned int HBOCFEEEEII___c_TypeDefinitionIndex = 26600;

	class HBOCFEEEEII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOCFEEEEII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII___C_CTOR_OFFSET))(this);
		}

		::HBOCFEEEEII* __cctor_b__38_0()
		{
			return ((::HBOCFEEEEII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOCFEEEEII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
