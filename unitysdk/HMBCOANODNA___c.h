#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBCOANODNA;
namespace System { class Object; }

#define HMBCOANODNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59D060)
#define HMBCOANODNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D090)
#define HMBCOANODNA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E59D0A0)

inline static constexpr unsigned int HMBCOANODNA___c_TypeDefinitionIndex = 34140;

	class HMBCOANODNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x396C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBCOANODNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA___C_CTOR_OFFSET))(this);
		}

		::HMBCOANODNA* __cctor_b__28_0()
		{
			return ((::HMBCOANODNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBCOANODNA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
