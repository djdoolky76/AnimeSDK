#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGKOLFNOAKC;
namespace System { class Object; }

#define NGKOLFNOAKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20404E80)
#define NGKOLFNOAKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20404EB0)
#define NGKOLFNOAKC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20404EC0)

inline static constexpr unsigned int NGKOLFNOAKC___c_TypeDefinitionIndex = 33437;

	class NGKOLFNOAKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGKOLFNOAKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC___C_CTOR_OFFSET))(this);
		}

		::NGKOLFNOAKC* __cctor_b__18_0()
		{
			return ((::NGKOLFNOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKOLFNOAKC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
