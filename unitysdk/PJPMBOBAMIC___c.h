#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJPMBOBAMIC;
namespace System { class Object; }

#define PJPMBOBAMIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F493030)
#define PJPMBOBAMIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F493060)
#define PJPMBOBAMIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F493070)

inline static constexpr unsigned int PJPMBOBAMIC___c_TypeDefinitionIndex = 31174;

	class PJPMBOBAMIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJPMBOBAMIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC___C_CTOR_OFFSET))(this);
		}

		::PJPMBOBAMIC* __cctor_b__28_0()
		{
			return ((::PJPMBOBAMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPMBOBAMIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
