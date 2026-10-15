#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKECCJELLI;
namespace System { class Object; }

#define AAKECCJELLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8F4B0)
#define AAKECCJELLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8F4E0)
#define AAKECCJELLI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD8F4F0)

inline static constexpr unsigned int AAKECCJELLI___c_TypeDefinitionIndex = 25365;

	class AAKECCJELLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKECCJELLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI___C_CTOR_OFFSET))(this);
		}

		::AAKECCJELLI* __cctor_b__28_0()
		{
			return ((::AAKECCJELLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKECCJELLI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
