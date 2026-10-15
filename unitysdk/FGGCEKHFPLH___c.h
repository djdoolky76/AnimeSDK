#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGGCEKHFPLH;
namespace System { class Object; }

#define FGGCEKHFPLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37DE20)
#define FGGCEKHFPLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37DE50)
#define FGGCEKHFPLH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E37DE60)

inline static constexpr unsigned int FGGCEKHFPLH___c_TypeDefinitionIndex = 28241;

	class FGGCEKHFPLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGGCEKHFPLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGCEKHFPLH___C_CTOR_OFFSET))(this);
		}

		::FGGCEKHFPLH* __cctor_b__28_0()
		{
			return ((::FGGCEKHFPLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGCEKHFPLH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
