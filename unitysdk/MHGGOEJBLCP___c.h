#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHGGOEJBLCP;
namespace System { class Object; }

#define MHGGOEJBLCP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA04050)
#define MHGGOEJBLCP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA04090)
#define MHGGOEJBLCP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA040A0)

inline static constexpr unsigned int MHGGOEJBLCP___c_TypeDefinitionIndex = 34669;

	class MHGGOEJBLCP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHGGOEJBLCP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP___C_CTOR_OFFSET))(this);
		}

		::MHGGOEJBLCP* __cctor_b__33_0()
		{
			return ((::MHGGOEJBLCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGGOEJBLCP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
