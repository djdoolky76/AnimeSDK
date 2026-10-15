#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEHLELAFJI;
namespace System { class Object; }

#define PMEHLELAFJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAA970)
#define PMEHLELAFJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAA9B0)
#define PMEHLELAFJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFAA9C0)

inline static constexpr unsigned int PMEHLELAFJI___c_TypeDefinitionIndex = 28456;

	class PMEHLELAFJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEHLELAFJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI___C_CTOR_OFFSET))(this);
		}

		::PMEHLELAFJI* __cctor_b__28_0()
		{
			return ((::PMEHLELAFJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEHLELAFJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
