#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKNPEGHPCMH;
namespace System { class Object; }

#define GKNPEGHPCMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48FE80)
#define GKNPEGHPCMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48FEB0)
#define GKNPEGHPCMH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E48FEC0)

inline static constexpr unsigned int GKNPEGHPCMH___c_TypeDefinitionIndex = 32999;

	class GKNPEGHPCMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNPEGHPCMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH___C_CTOR_OFFSET))(this);
		}

		::GKNPEGHPCMH* __cctor_b__23_0()
		{
			return ((::GKNPEGHPCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNPEGHPCMH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
