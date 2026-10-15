#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNLOBEKDKGL;
namespace System { class Object; }

#define CNLOBEKDKGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10B6E0)
#define CNLOBEKDKGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10B710)
#define CNLOBEKDKGL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E10B720)

inline static constexpr unsigned int CNLOBEKDKGL___c_TypeDefinitionIndex = 28191;

	class CNLOBEKDKGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNLOBEKDKGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL___C_CTOR_OFFSET))(this);
		}

		::CNLOBEKDKGL* __cctor_b__43_0()
		{
			return ((::CNLOBEKDKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLOBEKDKGL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
