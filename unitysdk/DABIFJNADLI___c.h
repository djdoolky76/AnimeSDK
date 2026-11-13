#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABIFJNADLI;
namespace System { class Object; }

#define DABIFJNADLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2029F900)
#define DABIFJNADLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2029F930)
#define DABIFJNADLI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2029F940)

inline static constexpr unsigned int DABIFJNADLI___c_TypeDefinitionIndex = 32944;

	class DABIFJNADLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B1A0);
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
