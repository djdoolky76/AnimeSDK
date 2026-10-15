#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCCJOJGJNGK;
namespace System { class Object; }

#define HCCJOJGJNGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E507DD0)
#define HCCJOJGJNGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E507E10)
#define HCCJOJGJNGK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E507E20)

inline static constexpr unsigned int HCCJOJGJNGK___c_TypeDefinitionIndex = 28628;

	class HCCJOJGJNGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCCJOJGJNGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK___C_CTOR_OFFSET))(this);
		}

		::HCCJOJGJNGK* __cctor_b__18_0()
		{
			return ((::HCCJOJGJNGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCJOJGJNGK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
