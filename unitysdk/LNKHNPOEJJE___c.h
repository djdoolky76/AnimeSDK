#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNKHNPOEJJE;
namespace System { class Object; }

#define LNKHNPOEJJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E988EC0)
#define LNKHNPOEJJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988F00)
#define LNKHNPOEJJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E988F10)

inline static constexpr unsigned int LNKHNPOEJJE___c_TypeDefinitionIndex = 32802;

	class LNKHNPOEJJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNKHNPOEJJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE___C_CTOR_OFFSET))(this);
		}

		::LNKHNPOEJJE* __cctor_b__28_0()
		{
			return ((::LNKHNPOEJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
