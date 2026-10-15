#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHCEIOHLADG;
namespace System { class Object; }

#define FHCEIOHLADG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35B540)
#define FHCEIOHLADG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35B580)
#define FHCEIOHLADG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E35B590)

inline static constexpr unsigned int FHCEIOHLADG___c_TypeDefinitionIndex = 25357;

	class FHCEIOHLADG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHCEIOHLADG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEIOHLADG___C_CTOR_OFFSET))(this);
		}

		::FHCEIOHLADG* __cctor_b__38_0()
		{
			return ((::FHCEIOHLADG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCEIOHLADG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
