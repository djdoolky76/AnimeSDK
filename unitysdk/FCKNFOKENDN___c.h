#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCKNFOKENDN;
namespace System { class Object; }

#define FCKNFOKENDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34D940)
#define FCKNFOKENDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34D980)
#define FCKNFOKENDN___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1E34D990)

inline static constexpr unsigned int FCKNFOKENDN___c_TypeDefinitionIndex = 25255;

	class FCKNFOKENDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCKNFOKENDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKNFOKENDN___C_CTOR_OFFSET))(this);
		}

		::FCKNFOKENDN* __cctor_b__72_0()
		{
			return ((::FCKNFOKENDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKNFOKENDN___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
