#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHIIPPKECEF;
namespace System { class Object; }

#define CHIIPPKECEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C8F30)
#define CHIIPPKECEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C8F70)
#define CHIIPPKECEF___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E0C8F80)

inline static constexpr unsigned int CHIIPPKECEF___c_TypeDefinitionIndex = 26508;

	class CHIIPPKECEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHIIPPKECEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIIPPKECEF___C_CTOR_OFFSET))(this);
		}

		::CHIIPPKECEF* __cctor_b__93_0()
		{
			return ((::CHIIPPKECEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIIPPKECEF___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
