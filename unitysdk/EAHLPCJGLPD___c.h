#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAHLPCJGLPD;
namespace System { class Object; }

#define EAHLPCJGLPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22ABF0)
#define EAHLPCJGLPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22AC30)
#define EAHLPCJGLPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E22AC40)

inline static constexpr unsigned int EAHLPCJGLPD___c_TypeDefinitionIndex = 31060;

	class EAHLPCJGLPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAHLPCJGLPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHLPCJGLPD___C_CTOR_OFFSET))(this);
		}

		::EAHLPCJGLPD* __cctor_b__28_0()
		{
			return ((::EAHLPCJGLPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHLPCJGLPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
