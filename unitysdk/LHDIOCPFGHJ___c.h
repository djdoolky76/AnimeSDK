#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHDIOCPFGHJ;
namespace System { class Object; }

#define LHDIOCPFGHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201B9920)
#define LHDIOCPFGHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201B9960)
#define LHDIOCPFGHJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x201B9970)

inline static constexpr unsigned int LHDIOCPFGHJ___c_TypeDefinitionIndex = 30347;

	class LHDIOCPFGHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C_CTOR_OFFSET))(this);
		}

		::LHDIOCPFGHJ* __cctor_b__18_0()
		{
			return ((::LHDIOCPFGHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
