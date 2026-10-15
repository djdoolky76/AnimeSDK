#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEMKDHAODBJ;
namespace System { class Object; }

#define DEMKDHAODBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16A760)
#define DEMKDHAODBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16A790)
#define DEMKDHAODBJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E16A7A0)

inline static constexpr unsigned int DEMKDHAODBJ___c_TypeDefinitionIndex = 28245;

	class DEMKDHAODBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMKDHAODBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ___C_CTOR_OFFSET))(this);
		}

		::DEMKDHAODBJ* __cctor_b__23_0()
		{
			return ((::DEMKDHAODBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMKDHAODBJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
