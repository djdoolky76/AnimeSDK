#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POOMINFCCKG;
namespace System { class Object; }

#define POOMINFCCKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD0880)
#define POOMINFCCKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD08C0)
#define POOMINFCCKG___C___CCTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x1DFD08D0)

inline static constexpr unsigned int POOMINFCCKG___c_TypeDefinitionIndex = 34829;

	class POOMINFCCKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x435B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POOMINFCCKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOMINFCCKG___C_CTOR_OFFSET))(this);
		}

		::POOMINFCCKG* __cctor_b__60_0()
		{
			return ((::POOMINFCCKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOMINFCCKG___C___CCTOR_B__60_0_OFFSET))(this);
		}

	};
