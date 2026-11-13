#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCNEDLGLLEA;
namespace System { class Object; }

#define OCNEDLGLLEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB48D80)
#define OCNEDLGLLEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB48DC0)
#define OCNEDLGLLEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB48DD0)

inline static constexpr unsigned int OCNEDLGLLEA___c_TypeDefinitionIndex = 30575;

	class OCNEDLGLLEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDC90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCNEDLGLLEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNEDLGLLEA___C_CTOR_OFFSET))(this);
		}

		::OCNEDLGLLEA* __cctor_b__23_0()
		{
			return ((::OCNEDLGLLEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNEDLGLLEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
