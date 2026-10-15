#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABIFJNADLI;
namespace System { class Object; }

#define DABIFJNADLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E149F40)
#define DABIFJNADLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E149F70)
#define DABIFJNADLI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E149F80)

inline static constexpr unsigned int DABIFJNADLI___c_TypeDefinitionIndex = 32031;

	class DABIFJNADLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABIFJNADLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI___C_CTOR_OFFSET))(this);
		}

		::DABIFJNADLI* __cctor_b__18_0()
		{
			return ((::DABIFJNADLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIFJNADLI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
