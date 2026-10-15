#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMEGIPHFFDA;
namespace System { class Object; }

#define NMEGIPHFFDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB45230)
#define NMEGIPHFFDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB45260)
#define NMEGIPHFFDA___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EB45270)

inline static constexpr unsigned int NMEGIPHFFDA___c_TypeDefinitionIndex = 26636;

	class NMEGIPHFFDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMEGIPHFFDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEGIPHFFDA___C_CTOR_OFFSET))(this);
		}

		::NMEGIPHFFDA* __cctor_b__68_0()
		{
			return ((::NMEGIPHFFDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEGIPHFFDA___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
