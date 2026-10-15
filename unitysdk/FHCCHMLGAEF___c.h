#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCCHMLGAEF;
namespace System { class Object; }

#define FHCCHMLGAEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35AB60)
#define FHCCHMLGAEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35ABA0)
#define FHCCHMLGAEF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E35ABB0)

inline static constexpr unsigned int FHCCHMLGAEF___c_TypeDefinitionIndex = 31943;

	class FHCCHMLGAEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCCHMLGAEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF___C_CTOR_OFFSET))(this);
		}

		::FHCCHMLGAEF* __cctor_b__18_0()
		{
			return ((::FHCCHMLGAEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCCHMLGAEF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
