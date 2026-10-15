#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDBGGEJBNNM;
namespace System { class Object; }

#define CDBGGEJBNNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07FEF0)
#define CDBGGEJBNNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07FF30)
#define CDBGGEJBNNM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E07FF40)

inline static constexpr unsigned int CDBGGEJBNNM___c_TypeDefinitionIndex = 32301;

	class CDBGGEJBNNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDBGGEJBNNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM___C_CTOR_OFFSET))(this);
		}

		::CDBGGEJBNNM* __cctor_b__18_0()
		{
			return ((::CDBGGEJBNNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBGGEJBNNM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
