#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJLHCIDDFDF;
namespace System { class Object; }

#define OJLHCIDDFDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A69B0)
#define OJLHCIDDFDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A69F0)
#define OJLHCIDDFDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6A6A00)

inline static constexpr unsigned int OJLHCIDDFDF___c_TypeDefinitionIndex = 29383;

	class OJLHCIDDFDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C_CTOR_OFFSET))(this);
		}

		::OJLHCIDDFDF* __cctor_b__28_0()
		{
			return ((::OJLHCIDDFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
