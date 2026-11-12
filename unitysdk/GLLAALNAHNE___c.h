#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLLAALNAHNE;
namespace System { class Object; }

#define GLLAALNAHNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7B5410)
#define GLLAALNAHNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B5440)
#define GLLAALNAHNE___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F7B5450)

inline static constexpr unsigned int GLLAALNAHNE___c_TypeDefinitionIndex = 34851;

	class GLLAALNAHNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLAALNAHNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE___C_CTOR_OFFSET))(this);
		}

		::GLLAALNAHNE* __cctor_b__48_0()
		{
			return ((::GLLAALNAHNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
