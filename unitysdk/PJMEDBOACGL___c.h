#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJMEDBOACGL;
namespace System { class Object; }

#define PJMEDBOACGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7F1C0)
#define PJMEDBOACGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7F200)
#define PJMEDBOACGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF7F210)

inline static constexpr unsigned int PJMEDBOACGL___c_TypeDefinitionIndex = 32853;

	class PJMEDBOACGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJMEDBOACGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL___C_CTOR_OFFSET))(this);
		}

		::PJMEDBOACGL* __cctor_b__23_0()
		{
			return ((::PJMEDBOACGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJMEDBOACGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
