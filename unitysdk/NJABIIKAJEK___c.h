#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJABIIKAJEK;
namespace System { class Object; }

#define NJABIIKAJEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0229E0)
#define NJABIIKAJEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F022A20)
#define NJABIIKAJEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F022A30)

inline static constexpr unsigned int NJABIIKAJEK___c_TypeDefinitionIndex = 30911;

	class NJABIIKAJEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJABIIKAJEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK___C_CTOR_OFFSET))(this);
		}

		::NJABIIKAJEK* __cctor_b__28_0()
		{
			return ((::NJABIIKAJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJABIIKAJEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
