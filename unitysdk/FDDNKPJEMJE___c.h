#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDNKPJEMJE;
namespace System { class Object; }

#define FDDNKPJEMJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20530D60)
#define FDDNKPJEMJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20530D90)
#define FDDNKPJEMJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20530DA0)

inline static constexpr unsigned int FDDNKPJEMJE___c_TypeDefinitionIndex = 27608;

	class FDDNKPJEMJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDNKPJEMJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE___C_CTOR_OFFSET))(this);
		}

		::FDDNKPJEMJE* __cctor_b__28_0()
		{
			return ((::FDDNKPJEMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
