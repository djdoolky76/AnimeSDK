#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNGEEKCHHED;
namespace System { class Object; }

#define DNGEEKCHHED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D1DD0)
#define DNGEEKCHHED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D1E10)
#define DNGEEKCHHED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4D1E20)

inline static constexpr unsigned int DNGEEKCHHED___c_TypeDefinitionIndex = 33814;

	class DNGEEKCHHED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNGEEKCHHED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED___C_CTOR_OFFSET))(this);
		}

		::DNGEEKCHHED* __cctor_b__28_0()
		{
			return ((::DNGEEKCHHED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGEEKCHHED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
