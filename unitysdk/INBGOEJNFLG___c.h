#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INBGOEJNFLG;
namespace System { class Object; }

#define INBGOEJNFLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E692010)
#define INBGOEJNFLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E692050)
#define INBGOEJNFLG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E692060)

inline static constexpr unsigned int INBGOEJNFLG___c_TypeDefinitionIndex = 27960;

	class INBGOEJNFLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBGOEJNFLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG___C_CTOR_OFFSET))(this);
		}

		::INBGOEJNFLG* __cctor_b__18_0()
		{
			return ((::INBGOEJNFLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGOEJNFLG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
