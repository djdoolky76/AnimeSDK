#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNJMMFCCGFN;
namespace System { class Object; }

#define DNJMMFCCGFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D51B0)
#define DNJMMFCCGFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4D51F0)
#define DNJMMFCCGFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4D5200)

inline static constexpr unsigned int DNJMMFCCGFN___c_TypeDefinitionIndex = 35400;

	class DNJMMFCCGFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C_CTOR_OFFSET))(this);
		}

		::DNJMMFCCGFN* __cctor_b__28_0()
		{
			return ((::DNJMMFCCGFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
