#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOIFCADNGL;
namespace System { class Object; }

#define KJOIFCADNGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE4700)
#define KJOIFCADNGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE4730)
#define KJOIFCADNGL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FFE4740)

inline static constexpr unsigned int KJOIFCADNGL___c_TypeDefinitionIndex = 34742;

	class KJOIFCADNGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOIFCADNGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL___C_CTOR_OFFSET))(this);
		}

		::KJOIFCADNGL* __cctor_b__43_0()
		{
			return ((::KJOIFCADNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOIFCADNGL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
