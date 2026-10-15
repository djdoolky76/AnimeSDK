#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFFIOJPHJM;
namespace System { class Object; }

#define NCFFIOJPHJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADA410)
#define NCFFIOJPHJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADA450)
#define NCFFIOJPHJM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EADA460)

inline static constexpr unsigned int NCFFIOJPHJM___c_TypeDefinitionIndex = 29880;

	class NCFFIOJPHJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFFIOJPHJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM___C_CTOR_OFFSET))(this);
		}

		::NCFFIOJPHJM* __cctor_b__23_0()
		{
			return ((::NCFFIOJPHJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFFIOJPHJM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
