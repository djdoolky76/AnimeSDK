#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFOOLGFCNDN;
namespace System { class Object; }

#define KFOOLGFCNDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5420B0)
#define KFOOLGFCNDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5420E0)
#define KFOOLGFCNDN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F5420F0)

inline static constexpr unsigned int KFOOLGFCNDN___c_TypeDefinitionIndex = 27604;

	class KFOOLGFCNDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C_CTOR_OFFSET))(this);
		}

		::KFOOLGFCNDN* __cctor_b__48_0()
		{
			return ((::KFOOLGFCNDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOOLGFCNDN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
