#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKCMMPFCGE;
namespace System { class Object; }

#define CPKCMMPFCGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E140D40)
#define CPKCMMPFCGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E140D80)
#define CPKCMMPFCGE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E140D90)

inline static constexpr unsigned int CPKCMMPFCGE___c_TypeDefinitionIndex = 34813;

	class CPKCMMPFCGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKCMMPFCGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE___C_CTOR_OFFSET))(this);
		}

		::CPKCMMPFCGE* __cctor_b__33_0()
		{
			return ((::CPKCMMPFCGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMMPFCGE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
