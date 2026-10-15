#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEFKOGMGEIC;
namespace System { class Object; }

#define PEFKOGMGEIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF17A10)
#define PEFKOGMGEIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF17A50)
#define PEFKOGMGEIC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF17A60)

inline static constexpr unsigned int PEFKOGMGEIC___c_TypeDefinitionIndex = 29467;

	class PEFKOGMGEIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEFKOGMGEIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKOGMGEIC___C_CTOR_OFFSET))(this);
		}

		::PEFKOGMGEIC* __cctor_b__38_0()
		{
			return ((::PEFKOGMGEIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKOGMGEIC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
