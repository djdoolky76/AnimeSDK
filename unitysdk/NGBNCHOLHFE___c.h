#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGBNCHOLHFE;
namespace System { class Object; }

#define NGBNCHOLHFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADE150)
#define NGBNCHOLHFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADE190)
#define NGBNCHOLHFE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EADE1A0)

inline static constexpr unsigned int NGBNCHOLHFE___c_TypeDefinitionIndex = 34292;

	class NGBNCHOLHFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGBNCHOLHFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBNCHOLHFE___C_CTOR_OFFSET))(this);
		}

		::NGBNCHOLHFE* __cctor_b__33_0()
		{
			return ((::NGBNCHOLHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBNCHOLHFE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
