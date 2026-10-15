#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGNAHHFBMMN;
namespace System { class Object; }

#define HGNAHHFBMMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E556550)
#define HGNAHHFBMMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E556590)
#define HGNAHHFBMMN___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E5565A0)

inline static constexpr unsigned int HGNAHHFBMMN___c_TypeDefinitionIndex = 31614;

	class HGNAHHFBMMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGNAHHFBMMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNAHHFBMMN___C_CTOR_OFFSET))(this);
		}

		::HGNAHHFBMMN* __cctor_b__78_0()
		{
			return ((::HGNAHHFBMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNAHHFBMMN___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
